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
  gArmPlatformTokenSpaceGuid.PcdCoreCount|4
  gArmPlatformTokenSpaceGuid.PcdClusterCount|1

  # GIC
  gArmTokenSpaceGuid.PcdGicDistributorBase|0x107FFF9000
  gArmTokenSpaceGuid.PcdGicRedistributorsBase|0x107FFFA000
  gArmTokenSpaceGuid.PcdGicInterruptInterfaceBase|0x107FFFA000

  # Timer
  gArmTokenSpaceGuid.PcdArmArchTimerFreqInHz|54000000
  gArmTokenSpaceGuid.PcdArmArchTimerSecIntrNum|13
  gArmTokenSpaceGuid.PcdArmArchTimerIntrNum|14

  # SmBios
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorModel|"Broadcom (TM) BCM2712 @ 2.40 GHz"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorPartNumber|"BCM2712"

  # SmBios CPU Extras
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosMaxCpuFreq|2400
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosLevel1InstCacheSize|0x30    # unsure about these
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosLevel1DataCacheSize|0x20    # unsure about these
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosLevel2CacheSize|0x200        
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosLevel3CacheSize|0x800

  # SmBios Memory Extras
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosMemorySpeed|4267            
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosMemoryType|30

[LibraryClasses]
  PlatformPrePiLib|BCM2712Pkg/Library/PlatformPrePiLib/PlatformPrePiLib.inf
  AcpiPlatformUpdateLib|SiliciumPkg/Library/AcpiPlatformUpdateLibNull/AcpiPlatformUpdateLibNull.inf
  HwResetSystemLib|ArmPkg/Library/ArmSmcPsciResetSystemLib/ArmSmcPsciResetSystemLib.inf
  ResetSystemLib|ArmPkg/Library/ArmSmcPsciResetSystemLib/ArmSmcPsciResetSystemLib.inf
  SoCPlatformLib|BCM2712Pkg/Library/SoCPlatformLib/SoCPlatformLib.inf
  GpioLib|BCM2712Pkg/Library/Bcm2712GpioLib/Bcm2712GpioLib.inf
  PciHostBridgeLib|BCM2712Pkg/Library/Bcm2712PciHostBridgeLib/Bcm2712PciHostBridgeLib.inf
  PciSegmentLib|BCM2712Pkg/Library/Bcm2712PciSegmentLib/PciSegmentLib.inf
  
[Components]
  BroadcomPkg/Drivers/BcmGenetDxe/BcmGenetDxe.inf
  BroadcomPkg/Drivers/BrcmStbSdhciDxe/BrcmStbSdhciDxe.inf

!include BroadcomPkg/BroadcomPkg.dsc.inc
