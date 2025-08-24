##
#  Copyright (c) 2011 - 2022, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2020, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#  Copyright (c) Microsoft Corporation.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
##

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
  PLATFORM_NAME                  = P682LPN
  PLATFORM_GUID                  = E75F0D93-EDBB-4231-A0DF-77988E675D19
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/P682LPNPkg
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = RELEASE|DEBUG
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = P682LPNPkg/P682LPN.fdf
  USE_CUSTOM_DISPLAY_DRIVER      = 0
  HAS_BUILD_IN_KEYBOARD          = 0

  #
  # 0 = Tiger T606
  # 1 = Tiger T7200
  #
  SOC_TYPE                       = 0

[BuildOptions]
  *_*_*_CC_FLAGS = -DHAS_BUILD_IN_KEYBOARD=$(HAS_BUILD_IN_KEYBOARD)

[PcdsFixedAtBuild]
  # DDR Start Address
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x80000000

  # Device Maintainer
  gSiliciumPkgTokenSpaceGuid.PcdDeviceMaintainer|"RadGoodNow & Daniel224455"

  # CPU Vector Address
  #gArmTokenSpaceGuid.PcdCpuVectorBaseAddress|0x80004000

  # UEFI Stack Addresses
  gEmbeddedTokenSpaceGuid.PcdPrePiStackBase|0x94700000
  gEmbeddedTokenSpaceGuid.PcdPrePiStackSize|0x00041000

  # SmBios
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemManufacturer|"Itel"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemModel|"Vision 3 Plus"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"P682LPN"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"Vision_3_Plus_P682LPN"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosBoardModel|"Vision 3 Plus"

  # Simple Frame Buffer
  gSiliciumPkgTokenSpaceGuid.PcdPrimaryFrameBufferWidth|720
  gSiliciumPkgTokenSpaceGuid.PcdPrimaryFrameBufferHeight|1640
  gSiliciumPkgTokenSpaceGuid.PcdPrimaryFrameBufferColorDepth|32

  # Dynamic RAM Start Address
  gUnisocPkgTokenSpaceGuid.PcdRamPartitionBase|0xA0000000

[PcdsDynamicDefault]
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|720
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|1640
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|720
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|1640
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|90
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|86
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|90
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|86

[LibraryClasses]
  DeviceMemoryMapLib|P682LPNPkg/Library/DeviceMemoryMapLib/DeviceMemoryMapLib.inf
  DeviceGuidLib|P682LPNPkg/Library/DeviceGuidLib/DeviceGuidLib.inf
  AcpiDeviceUpdateLib|SiliciumPkg/Library/AcpiDeviceUpdateLibNull/AcpiDeviceUpdateLibNull.inf

#[Components]
  #SiliciumPkg/Drivers/KeypadDxe/KeypadDxe.inf
  #SiliciumPkg/Drivers/KeypadDeviceDxe/KeypadDeviceDxe.inf

!include UMS9230Pkg/UMS9230Pkg.dsc.inc