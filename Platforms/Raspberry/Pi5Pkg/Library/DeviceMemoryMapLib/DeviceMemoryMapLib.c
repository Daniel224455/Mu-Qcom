#include <Library/DeviceMemoryMapLib.h>

STATIC
ARM_MEMORY_REGION_DESCRIPTOR_EX
gDeviceMemoryDescriptorEx[] = {
  // Name, Address, Length, HobOption, ResourceType, ResourceAttribute, MemoryType, ArmAttribute

  // DDR Regions
  {"UEFI FD",           0x00000000, 0x001D0000, AddMem, SYS_MEM, SYS_MEM_CAP, Reserv, WRITE_BACK},
  {"FD Variables",      0x001D0000, 0x00020000, AddMem, SYS_MEM, SYS_MEM_CAP, RtData, WRITE_BACK},
  {"FDT Blob",          0x001F0000, 0x00020000, AddMem, SYS_MEM, SYS_MEM_CAP, Reserv, WRITE_BACK},
  {"RAM Partition",     0x00220000, 0x3F9F0000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK_XN},
  {"UEFI Stack",        0x40010000, 0x00041000, AddMem, SYS_MEM, SYS_MEM_CAP, RtCode, WRITE_BACK},
  {"CPU Vectors",       0x40051000, 0x00010000, AddMem, SYS_MEM, SYS_MEM_CAP, BsCode, WRITE_BACK_XN},
  {"DXE Heap",          0x40061000, 0x07900000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK_XN},
  {"RAM Partition",     0x47961000, 0x00001000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  
  // Register Regions
  {"Registers",        0x1000000000, 0x1000000000, NoHob, MMAP_IO, UNCACHEABLE, MmIO, NS_DEVICE},

  // Terminator for MMU
  {"Terminator", 0, 0, 0, 0, 0, 0, 0}
};

ARM_MEMORY_REGION_DESCRIPTOR_EX*
GetDeviceMemoryMap ()
{
  return gDeviceMemoryDescriptorEx;
}
