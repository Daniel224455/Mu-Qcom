#include <Library/DeviceMemoryMapLib.h>

STATIC
ARM_MEMORY_REGION_DESCRIPTOR_EX
gDeviceMemoryDescriptorEx[] = {
  // Name, Address, Length, HobOption, ResourceType, ResourceAttribute, MemoryType, ArmAttribute

  // DDR Regions
  {"ddrbist Reserved",  0x80000000, 0x00001000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK_XN},
  {"sipc-mem Reserved", 0x87800000, 0x00800000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK_XN},
  {"sp-ddr Reserved",   0x88000000, 0x00300000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK_XN},
  {"audiodsp Reserved", 0x89000000, 0x00600000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK_XN},
  {"cpmodem Reserved",  0x89600000, 0x04900000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK_XN},
  {"iq-mem Reserved",   0x90000000, 0x04000000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK_XN},
  {"audio Reserved",    0x94100000, 0x00300000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK_XN},
  {"UEFI FD",           0x94500000, 0x00200000, AddMem, SYS_MEM, INITIALIZED, BsData, WRITE_BACK_XN},
  {"UEFI Stack",        0x94700000, 0x00041000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK_XN},
  {"DXE Heap",          0x94741000, 0x04500000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK_XN},
  {"Display Reserved",  0x9E000000, 0x00AB0000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_THROUGH_XN},
  {"sysdump Reserved",  0x9F000000, 0x01000000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK_XN},
  //{"TrustZone",         0xB0040000, 0x05FC0000, NoHob,  MEM_RES, SYS_MEM_CAP, Reserv, NS_DEVICE},

  // Register Regions
  {"Registers",         0x00000000, 0x80000000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},

  // Terminator for MMU
  {"Terminator", 0, 0, 0, 0, 0, 0, 0}
};

ARM_MEMORY_REGION_DESCRIPTOR_EX*
GetDeviceMemoryMap ()
{
  return gDeviceMemoryDescriptorEx;
}
