/* $Id: $ */
/** @file
 * VBoxSeamless - Seamless windows
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

#ifndef __VBOXSERVICESEAMLESS__H
#define __VBOXSERVICESEAMLESS__H

/* The seamless windows service prototypes */
int                VBoxSeamlessInit     (const VBOXSERVICEENV *pEnv, void **ppInstance, bool *pfStartThread);
unsigned __stdcall VBoxSeamlessThread   (void *pInstance);
void               VBoxSeamlessDestroy  (const VBOXSERVICEENV *pEnv, void *pInstance);


void VBoxSeamlessEnable();
void VBoxSeamlessDisable();
void VBoxSeamlessCheckWindows(bool fForce);

void VBoxSeamlessSetSupported(BOOL fSupported);

#endif /* __VBOXSERVICESEAMLESS__H */
