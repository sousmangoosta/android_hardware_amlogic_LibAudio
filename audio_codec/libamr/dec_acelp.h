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
#ifndef DEC_ACELP_H
#define DEC_ACELP_H

#include "typedef.h"

void D_ACELP_decode_2t(Word16 index, Word16 code[]);
void D_ACELP_decode_4t(Word16 index[], Word16 nbbits, Word16 code[]);
void D_ACELP_phase_dispersion(Word16 gain_code, Word16 gain_pit, Word16 code[],
                              Word16 mode, Word16 disp_mem[]);

#endif

