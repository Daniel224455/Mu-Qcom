##
#  Copyright (c) 2011 - 2022, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2020, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#  Copyright (c) Microsoft Corporation.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
##

[Defines]
  # GIC
  USE_CUSTOM_GIC                             = 0

  # Timer
  USE_CUSTOM_TIMER                           = 0
  USE_PHYSICAL_TIMER                         = 0

  # KEP
  ENABLE_KEP                                 = 0
  HAS_ACTLR_EL1_UNIMPLEMENTED_ERRATA         = 0
  HAS_AMCNTENSET0_EL0_UNIMPLEMENTED_ERRATA   = 0
  HAS_GIC_V3_WITHOUT_IRM_FLAG_SUPPORT_ERRATA = 0
  HAS_PSCI_MEMPROTECT_FAILING_ERRATA         = 0

[BuildOptions]
  *_*_AARCH64_CC_FLAGS = -march=armv8-a+crypto+rcpc

[PcdsFixedAtBuild]
  # CPU
  gArmPlatformTokenSpaceGuid.PcdCoreCount|8
  gArmPlatformTokenSpaceGuid.PcdClusterCount|2

  # GIC
  gArmTokenSpaceGuid.PcdGicDistributorBase|0x10000000
  gArmTokenSpaceGuid.PcdGicRedistributorsBase|0x10040000
  gArmTokenSpaceGuid.PcdGicInterruptInterfaceBase|0x10040000

  # Timer
  gArmTokenSpaceGuid.PcdArmArchTimerFreqInHz|13000000
  gArmTokenSpaceGuid.PcdArmArchTimerSecIntrNum|29
  gArmTokenSpaceGuid.PcdArmArchTimerIntrNum|30

  # SmBios
!if $(SOC_TYPE) == 0
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorModel|"Tiger T606 @ 1.60 GHz"
!elseif $(SOC_TYPE) == 1
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorModel|"Tiger T7200 @ 1.60 GHz"
!endif
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorPartNumber|"UMS9230"

  # SmBios CPU Extras
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosMaxCpuFreq|1600
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosLevel1InstCacheSize|0x20    
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosLevel1DataCacheSize|0x20    
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosLevel2CacheSize|0x200      
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosLevel3CacheSize|0x100

  # SmBios Memory Extras
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosMemorySpeed|1600          
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosMemoryType|30

[LibraryClasses]
  PlatformPrePiLib|UMS9230Pkg/Library/PlatformPrePiLib/PlatformPrePiLib.inf
  AcpiPlatformUpdateLib|SiliciumPkg/Library/AcpiPlatformUpdateLibNull/AcpiPlatformUpdateLibNull.inf
  HwResetSystemLib|ArmPkg/Library/ArmSmcPsciResetSystemLib/ArmSmcPsciResetSystemLib.inf
  ResetSystemLib|ArmPkg/Library/ArmSmcPsciResetSystemLib/ArmSmcPsciResetSystemLib.inf
  SoCPlatformLib|UMS9230Pkg/Library/SoCPlatformLib/SoCPlatformLib.inf

!include UnisocPkg/UnisocPkg.dsc.inc
