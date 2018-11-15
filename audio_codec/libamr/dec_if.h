/*
 * Copyright (C) 2018 Amlogic Corporation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*
 *===================================================================
 *  3GPP AMR Wideband Floating-point Speech Codec
 *===================================================================
 */
#ifndef DEC_IF_H
#define DEC_IF_H

#include "typedef.h"

#define NB_SERIAL_MAX   61    /* max serial size      */
#define L_FRAME16k      320   /* Frame size at 16kHz  */

#define _good_frame  0
#define _bad_frame   1
#define _lost_frame  2
#define _no_frame    3

void D_IF_decode(void *st, UWord8 *bits, Word16 *synth, Word32 bfi);
void * D_IF_init(void);
void D_IF_exit(void *state);

#endif
