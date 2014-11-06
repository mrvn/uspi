//
// uspi.h
//
// Services provided by the USPi library
//
// USPi - An USB driver for Raspberry Pi written in C
// Copyright (C) 2014  R. Stange <rsta2@o2online.de>
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#ifndef _uspi_h
#define _uspi_h

#ifdef __cplusplus
extern "C" {
#endif

int USPiInitialize (void);

// Ethernet services
int USPiEthernetAvailable (void);

void USPiGetMACAddress (unsigned char Buffer[6]);

int USPiSendFrame (const void *pBuffer, unsigned nLength);

// pBuffer must have size FRAME_BUFFER_SIZE
#define FRAME_BUFFER_SIZE	2048
int USPiReceiveFrame (void *pBuffer, unsigned *pResultLength);

#ifdef __cplusplus
}
#endif

#endif