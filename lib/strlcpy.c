/*
 * SPDX-FileCopyrightText: 2022-2023, Alejandro Colomar <alx@kernel.org>
 * SPDX-License-Identifier: BSD-3-Clause
 */


#include <config.h>

#include <stddef.h>
#include <sys/types.h>

#ident "$Id$"

#include "strlcpy.h"


extern inline ssize_t strlcpy_(char *restrict dst, const char *restrict src,
    size_t size);
