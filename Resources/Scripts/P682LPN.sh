#!/bin/bash

# Build an Android kernel that is actually UEFI disguised as the Kernel
cat ./BootShim/BootShim.bin "./Build/P682LPNPkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/P682LPN_UEFI.fd" > "./Build/P682LPNPkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/P682LPN_UEFI.fd-bootshim"||exit 1
gzip -c < "./Build/P682LPNPkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/P682LPN_UEFI.fd-bootshim" > "./Build/P682LPNPkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/P682LPN_UEFI.fd-bootshim.gz"||exit 1
cat "./Build/P682LPNPkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/P682LPN_UEFI.fd-bootshim.gz" > ./Resources/bootpayload.bin||exit 1
gzip -c < ./Resources/ramdisk > ./Resources/ramdisk.gz

python3 ./Resources/Scripts/mkbootimg.py \
  --kernel ./Resources/bootpayload.bin \
  --dtb ./Resources/DTBs/P682LPN.img \
  --dtb_offset 0x01f00000 \
  --base 0x00000000 \
  --pagesize 2048 \
  --ramdisk ./Resources/ramdisk.gz \
  --kernel_offset 0x00008000 \
  --ramdisk_offset 0x05400000 \
  --tags_offset 0x00000100 \
  --os_version 11.0.0 \
  --os_patch_level "$(date '+%Y-%m')" \
  --header_version 2 \
  -o Mu-P682LPN.img \
  ||_error "\nFailed to create Android Boot Image!\n"

python2 ./Resources/avbtool.py add_hash_footer --image Mu-P682LPN.img --partition_name boot --partition_size 67108864 --key ./Resources/rsa4096_vbmeta.pem --algorithm SHA256_RSA4096 || _error "\nFailed to sign image!\n"