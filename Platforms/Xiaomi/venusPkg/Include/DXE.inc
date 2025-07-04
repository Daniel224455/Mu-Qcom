  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/venus/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/venus/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/venus/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/venus/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/venus/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/venus/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/ProjectInfoDxe/ProjectInfoDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/HWIODxe/HWIODxe.inf

  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/venus/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/CpuClockHandlerDxe/CpuClockHandlerDxe.inf

  INF Binaries/venus/QcomPkg/Drivers/ICBDxe/ICBDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/venus/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif
  INF Binaries/venus/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/venus/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/MinidumpTADxe/MinidumpTADxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/venus/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/venus/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/IPCCDxe/IPCCDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/PmicGlinkDxe/PmicGlinkDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/venus/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf

  INF QcomPkg/Drivers/DdrClockHandlerDxe/DdrClockHandlerDxe.inf

  INF Binaries/venus/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/venus/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/XhciDxe/XhciDxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/venus/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/UCDxe/UCDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/RNGDxe/RngDxe.inf
  #INF Binaries/venus/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/FvUtilsDxe/FvUtilsDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/ParserDxe/ParserDxe.inf
  INF Binaries/venus/QcomPkg/Drivers/SerialPortDxe/SerialPortDxe.inf
