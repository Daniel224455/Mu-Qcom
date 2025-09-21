#include <Library/DeviceMemoryMapLib.h>

STATIC
ARM_MEMORY_REGION_DESCRIPTOR_EX
gDeviceMemoryDescriptorEx[] = {
  // Name, Address, Length, HobOption, ResourceType, ResourceAttribute, MemoryType, ArmAttribute

  // DDR Regions
  {"CPU Vectors",        0x80000000, 0x00001000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
  {"UEFI Stack",         0x80001000, 0x00040000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
  //{"RAM Partition",      0x80041000, 0x0FFBE000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"Kaslr",              0x8FFFF000, 0x00001000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  {"ECT",                0x90000000, 0x0003A000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  {"UEFI FD",            0x9003A000, 0x00200000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
  {"DXE Heap",           0x9023A000, 0x03C00000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"RAM Partition",      0x93E3A000, 0x0000C000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"FDT Pointer",        0x93E46000, 0x00001000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
  {"RAM Partition",      0x93E47000, 0x22A2F000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},

  //{"RAM Partition",      0xB6876000, 0x01000000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"EL2 Code",           0xC1400000, 0x00200000, AddMem, SYS_MEM, SYS_MEM_CAP, BsCode, WRITE_BACK},
  {"RAM Partition",      0xC1600000, 0x01200000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},

  {"RAM Partition",      0xC2B00000, 0x00500000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"SEC Log",            0xC3000000, 0x00080000, AddMem, SYS_MEM, SYS_MEM_CAP, Reserv, WRITE_BACK}, 
  {"RAM Partition",      0xC30A0000, 0x1CF60000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},

  {"RAM Partition",      0xE0100000, 0x1A100000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"Display Reserved",   0xF6200000, 0x01348000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_THROUGH},
  {"EL2 Earlymem",       0xFEC00000, 0x01400000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},

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
  {"DDR Info",           0x02038000, 0x00050000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE}, // unknown, will change later.









    // DDR Regions
  //{"RAM Partition",      0x80041000, 0x0FFBE000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  //{"Kaslr",              0x8FFFF000, 0x00001000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  //{"ECT",                0x90000000, 0x0003A000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  {"CPU Vectors",        0x9003A000, 0x00001000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
  {"UEFI Stack",         0x9003B000, 0x00040000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
  {"UEFI FD",            0x9007B000, 0x00200000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
  {"DXE Heap",           0x9027B000, 0x03C00000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"RAM Partition",      0x93E7B000, 0x0000C000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  //{"FDT Pointer",        0x93E87000, 0x00001000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
  {"RAM Partition",      0x93E88000, 0x229EE000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},

  {"RAM Partition",      0xB6876000, 0x0038A000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  // Mem Hole: 0xB6C00000 until 0xC1400000
  {"EL2 Code",           0xC1400000, 0x00200000, AddMem, SYS_MEM, SYS_MEM_CAP, BsCode, WRITE_BACK},
  {"RAM Partition",      0xC1600000, 0x01200000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},

  {"RAM Partition",      0xC2B00000, 0x00500000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"SEC Log",            0xC3000000, 0x00080000, AddMem, SYS_MEM, SYS_MEM_CAP, Reserv, WRITE_BACK}, 
  {"RAM Partition",      0xC30A0000, 0x1CF60000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},

  // Mem Hole; 0xE0000000 until 0xE1300000

  {"RAM Partition",      0xE1300000, 0x14F00000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
  {"Display Reserved",   0xF6200000, 0x01348000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_THROUGH},
  {"EL2 Earlymem",       0xFEC00000, 0x01400000, AddMem, SYS_MEM, UNCACHEABLE, Reserv, WRITE_BACK},
  //{"RAM Partition",      0x880000000, 0x00001000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},

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
  {"DDR Info",           0x02038000, 0x00050000, AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE}, // unknown, will change later.
  
  // Terminator for MMU
  {"Terminator", 0, 0, 0, 0, 0, 0, 0}
};

ARM_MEMORY_REGION_DESCRIPTOR_EX*
GetDeviceMemoryMap ()
{
  return gDeviceMemoryDescriptorEx;
}
