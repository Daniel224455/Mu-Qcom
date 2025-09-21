#include <Library/DeviceMemoryMapLib.h>

STATIC
ARM_MEMORY_REGION_DESCRIPTOR_EX
gDeviceMemoryDescriptorEx[] = {
  // Name, Address, Length, HobOption, ResourceType, ResourceAttribute, MemoryType, ArmAttribute

  // DDR Regions
  {"CPU Vectors",        0x80000000, 0x00001000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
  {"UEFI Stack",         0x80001000, 0x00040000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
  //{"RAM Partition",      0x80041000, 0x0FFBE000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"SGPU RMEM",          0x8FF00000, 0x000E0000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  {"Kaslr",              0x8FFFF000, 0x00001000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  {"ECT",                0x90000000, 0x0003A000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  {"UEFI FD",            0x9003A000, 0x00200000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
  {"SEC Debug Next",     0x91200000, 0x00200000, AddMem, MEM_RES, UNCACHEABLE, Reserv, WRITE_BACK},
  {"RAM Partition",      0x93E3A000, 0x0000C000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"FDT Pointer",        0x93E46000, 0x00001000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
  {"DXE Heap",           0x93E47000, 0x03C00000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  //{"RAM Partition",      0x93E47000, 0x22A2F000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"SEC Camera",         0x96000000, 0x036F0000, AddMem, MEM_RES, UNCACHEABLE, Reserv, WRITE_BACK},

  {"EL3 Monitor",        0xBFF80000, 0x00080000, AddMem, MEM_RES, UNCACHEABLE, Reserv, WRITE_BACK},
  //{"RAM Partition",      0xB6876000, 0x01000000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"EL2 Code",           0xC1400000, 0x00200000, AddMem, MEM_RES, UNCACHEABLE, Reserv, WRITE_BACK},
  {"S2MPU Table",        0xC1800000, 0x00600000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},

  //{"RAM Partition",      0xC2B00000, 0x00500000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"SEC Log",            0xC3000000, 0x00080000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_BACK}, 
  //{"RAM Partition",      0xC30A0000, 0x1CF60000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},

  //{"RAM Partition",      0xE0100000, 0x1A100000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"WIFI MSI RMEM",      0xE7200000, 0x00001000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  {"TEEGRIS",            0xED310000, 0x00002000, AddMem, MEM_RES, UNCACHEABLE, Reserv, WRITE_BACK},
  {"Display Reserved",   0xF6200000, 0x01348000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_THROUGH},
  {"Debug Data",         0xFD000000, 0x03000000, AddMem, MEM_RES, UNCACHEABLE, Reserv, WRITE_BACK},
  
  /*{"RAM Partition",      0x880000000, 0x0D800000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},*/
  {"CP RMEM 1",          0x800000000, 0x0D800000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  {"ABOX RMEM",          0x88D800000, 0x02800000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  {"GNSS RMEM",          0x8A1600000, 0x00600000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  {"DNC FW RMEM",        0x8A1C00000, 0x00500000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  {"MFC FW RMEM",        0x8A2400000, 0x00800000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  {"SECRDX BootDev",     0x8B0000000, 0x0B600000, AddMem, MEM_RES, UNCACHEABLE, Reserv, WRITE_BACK},
  {"CP RMEM 2",          0x900000000, 0x0E000000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  /*{"RAM Partition",      0x900000000, 0x80000000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"RAM Partition",      0x980000000, 0x80000000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},*/
  {"EL2 Earlymem",       0x9FEC00000, 0x01400000, AddMem, MEM_RES, UNCACHEABLE, Reserv, WRITE_BACK},
  
  // Other Regions
  {"IRAM",               0x02020000, 0x0DFE0000, AddMem, MEM_RES, UNCACHEABLE, Reserv, WRITE_BACK},

  // Register Regions
  {"Chip Info",          0x10000000, 0x00010000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
  {"Watchdog Timer",     0x10050000, 0x00001000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
  {"Gic Distributor",    0x10200000, 0x00010000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
  {"Gic Redistributors", 0x10240000, 0x00200000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
  {"Pinctrl",            0x15850000, 0x00001000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
  {"DRM-Decon-1",        0x19F00000, 0x00001000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
  {"DRM-Decon-2",        0x19F01000, 0x00001000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
  {"DRM-Decon-3",        0x19F02000, 0x00001000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
  {"DRM-Decon-4",        0x19F03000, 0x00001000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
  {"PCIe Memory",        0x20000000, 0x40000000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
  {"DDR Info",           0x02038000, 0x00050000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE}, // unknown, will change later.

  // Terminator for MMU
  {"Terminator", 0, 0, 0, 0, 0, 0, 0}
};

ARM_MEMORY_REGION_DESCRIPTOR_EX*
GetDeviceMemoryMap ()
{
  return gDeviceMemoryDescriptorEx;
}
