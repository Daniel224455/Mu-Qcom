#!/usr/bin/env python3

# This script is needed because armasm64 and link can only output a
# PE/COFF file, but our BootShim needs to be a raw bin with no headers.
# We extract the .text section from our PE and write it as a flat binary,
# same what llvm-objcopy does.

import sys
import struct

def pe_to_bin(in_path, out_path):
    with open(in_path, "rb") as f:
        data = f.read()

    pe_offset = struct.unpack_from("<I", data, 0x3C)[0]
    num_sections = struct.unpack_from("<H", data, pe_offset + 4 + 2)[0]
    opt_size = struct.unpack_from("<H", data, pe_offset + 4 + 16)[0]
    opt_offset = pe_offset + 4 + 20
    sec_offset = opt_offset + opt_size

    for i in range(num_sections):
        sec = sec_offset + i * 40
        name = data[sec:sec+8].rstrip(b"\x00").decode("ascii", errors="ignore")
        raw_size = struct.unpack_from("<I", data, sec + 16)[0]
        raw_ptr  = struct.unpack_from("<I", data, sec + 20)[0]

        if name == ".text":
            raw = data[raw_ptr:raw_ptr + raw_size]
            raw = raw.rstrip(b"\x00")
            with open(out_path, "wb") as f:
                f.write(raw)
            return

    sys.exit("No .text section found")

if __name__ == "__main__":
    pe_to_bin(sys.argv[1], sys.argv[2])