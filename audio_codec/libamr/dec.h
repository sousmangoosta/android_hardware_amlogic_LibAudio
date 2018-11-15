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
#ifndef DEC_H
#define DEC_H

#include "typedef.h"

void D_MAIN_reset(void *st, Word16 reset_all);
Word32 D_MAIN_init(void **spd_state);
void D_MAIN_close(void **spd_state);
Word32 D_MAIN_decode(Word16 mode, Word16 prms[], Word16 synth16k[],
                     void *spd_state, UWord8 frame_type);

#endif

