/* $Id: $ */
/** @file
 * VBoxSeamless - Shared Clipboard
 */

/*
 * Copyright (C) 2006-2010 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 */

#ifndef __VBOXSERVICESHAREDCLIPLBOARD__H
#define __VBOXSERVICESHAREDCLIPLBOARD__H

/* The shared clipboard service prototypes. */
int                VBoxClipboardInit    (const VBOXSERVICEENV *pEnv, void **ppInstance, bool *pfStartThread);
unsigned __stdcall VBoxClipboardThread  (void *pInstance);
void               VBoxClipboardDestroy (const VBOXSERVICEENV *pEnv, void *pInstance);


#endif /* __VBOXSERVICESHAREDCLIPLBOARD__H */
