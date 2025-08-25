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
  PLATFORM_NAME                  = Pi5
  PLATFORM_GUID                  = 71148BEC-5505-4AA8-AAA6-653F8D74FB1B
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/Pi5Pkg
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = RELEASE|DEBUG
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = Pi5Pkg/Pi5.fdf
  HAS_BUILD_IN_KEYBOARD          = 1

[BuildOptions]
  *_*_*_CC_FLAGS = -DHAS_BUILD_IN_KEYBOARD=$(HAS_BUILD_IN_KEYBOARD)

[PcdsFixedAtBuild]
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x00020000

  # Device Maintainer
  gSiliciumPkgTokenSpaceGuid.PcdDeviceMaintainer|"Daniel224455"

  # UEFI Stack Addresses
  gEmbeddedTokenSpaceGuid.PcdPrePiStackBase|0x00320000
  gEmbeddedTokenSpaceGuid.PcdPrePiStackSize|0x00041000

  # SmBios
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemManufacturer|"Raspberry Inc"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemModel|"Pi 5"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"Pi5"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"Pi_5_Pi5"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosBoardModel|"Pi 5"

  # Simple Frame Buffer
  gSiliciumPkgTokenSpaceGuid.PcdPrimaryFrameBufferWidth|1080
  gSiliciumPkgTokenSpaceGuid.PcdPrimaryFrameBufferHeight|1920
  gSiliciumPkgTokenSpaceGuid.PcdPrimaryFrameBufferColorDepth|32

  gEmbeddedTokenSpaceGuid.PcdDmaDeviceOffset|0xc0000000
  gEmbeddedTokenSpaceGuid.PcdDmaDeviceLimit|0xffffffff

[PcdsDynamicDefault]
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|1080
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|1920
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|1080
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|1920
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|135
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|101
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|135
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|101

[LibraryClasses]
  DeviceMemoryMapLib|Pi5Pkg/Library/DeviceMemoryMapLib/DeviceMemoryMapLib.inf
  DeviceGuidLib|Pi5Pkg/Library/DeviceGuidLib/DeviceGuidLib.inf
  AcpiDeviceUpdateLib|SiliciumPkg/Library/AcpiDeviceUpdateLibNull/AcpiDeviceUpdateLibNull.inf
  BoardInfoLib|Pi5Pkg/Library/BoardInfoLib/BoardInfoLib.inf
  FdtPlatformLib|Pi5Pkg/Library/FdtPlatformLib/FdtPlatformLib.inf
  BoardRevisionHelperLib|Pi5Pkg/Library/BoardRevisionHelperLib/BoardRevisionHelperLib.inf
  NonDiscoverableDeviceRegistrationLib|MdeModulePkg/Library/NonDiscoverableDeviceRegistrationLib/NonDiscoverableDeviceRegistrationLib.inf
  
!include BCM2712Pkg/BCM2712Pkg.dsc.inc