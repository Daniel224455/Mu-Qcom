#include <Library/DeviceMemoryMapLib.h>

STATIC
ARM_MEMORY_REGION_DESCRIPTOR_EX
gDeviceMemoryDescriptorEx[] = {
  // Name, Address, Length, HobOption, ResourceType, ResourceAttribute, MemoryType, ArmAttribute

  // DDR Regions
  {"UEFI FD",           0x00000000, 0x001f0000, AddMem, SYS_MEM, INITIALIZED, BsData, WRITE_BACK_XN},
  {"UEFI Stack",        0x01040000, 0x00041000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK_XN},
  {"DXE Heap",          0x01081000, 0x04500000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK_XN},
  {"Display Reserved",  0x00000000, 0x00000000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_THROUGH_XN},
  // random addr above, we use uart for now.
  //{"TrustZone",         0xB0040000, 0x05FC0000, NoHob,  MEM_RES, SYS_MEM_CAP, Reserv, NS_DEVICE},

  // Register Regions
  {"Registers",         0x00020000, 0x80000000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},

  // Terminator for MMU
  {"Terminator", 0, 0, 0, 0, 0, 0, 0}
};

ARM_MEMORY_REGION_DESCRIPTOR_EX*
GetDeviceMemoryMap ()
{
  return gDeviceMemoryDescriptorEx;
}
