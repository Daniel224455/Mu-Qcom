/**
  Copyright (C) Microsoft Corporation. All rights reserved.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _BOOT_GRAPHICS_H_
#define _BOOT_GRAPHICS_H_

#define BG_NO_BOOT_OS       4
#define BG_MSD_DEFAULT      5
#define BG_MSD_CONNECTED    6
#define BG_MSD_DISCONNECTED 7

EFI_STATUS
EFIAPI
GetCoverBootGraphic (
  IN  UINT8   Graphic,
  OUT UINTN  *ImageSize,
  OUT UINT8 **ImageData);

#endif /* _BOOT_GRAPHICS_H_ */
