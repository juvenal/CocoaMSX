/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Arch/ArchEvent.h,v $
**
** $Revision: 72 $
**
** $Date: 2012-10-19 17:09:05 -0700 (Fri, 19 Oct 2012) $
**
** More info: http://www.bluemsx.com
**
** Copyright (C) 2003-2006 Daniel Vik
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
**
******************************************************************************
*/
#ifndef ARCH_EVENT_H
#define ARCH_EVENT_H

void* archEventCreate(int initState);
void archEventDestroy(void* event);
void archEventSet(void* event);
void archEventWait(void* event, int timeout);

void* archSemaphoreCreate(int initCount);
void archSemaphoreDestroy(void* semaphore);
void archSemaphoreSignal(void* semaphore);
void archSemaphoreWait(void* semaphore, int timeout);

#endif
