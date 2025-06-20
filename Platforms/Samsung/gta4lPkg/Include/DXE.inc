  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/gta4l/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/gta4l/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/gta4l/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/QcomMpmTimerDxe/QcomMpmTimerDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/gta4l/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF Binaries/gta4l/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/NpaDxe/NpaDxe.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/gta4l/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/CpuClockHandlerDxe/CpuClockHandlerDxe.inf

  INF Binaries/gta4l/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/MinidumpTADxe/MinidumpTADxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/gta4l/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/gta4l/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/gta4l/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/gta4l/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf

  INF QcomPkg/Drivers/DdrClockHandlerDxe/DdrClockHandlerDxe.inf

  INF Binaries/gta4l/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf

  INF Binaries/generic/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/generic/QcomPkg/Drivers/XhciDxe/XhciDxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/gta4l/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/MacDxe/MacDxe.inf
  INF Binaries/gta4l/QcomPkg/SocPkg/KamortaPkg/Drivers/RNGDxe/RngDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/gta4l/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/gta4l/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
