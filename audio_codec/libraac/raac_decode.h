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

#ifndef _AUDIO_CODEC_RAAC_H
#define _AUDIO_CODEC_RAAC_H

#include "include/rm_parse.h"
#include "include/ra_depack.h"
#include "include/ra_decode.h"


typedef struct {
    ra_decode*          pDecode;
    ra_format_info*     pRaInfo;
    BYTE*               pOutBuf;
    UINT32              ulOutBufSize;
    UINT32              ulTotalSample;
    UINT32              ulTotalSamplePlayed;
    UINT32              ulStatus;
    UINT32              input_buffer_size;
    BYTE*            input_buf;
    UINT32              decoded_size;

} raac_decoder_info_t;

typedef struct {
    BYTE *buf;
    int buf_len;
    int buf_max;
    int cousume;
    int all_consume;
} cook_IObuf;

#define RADEC_IDLE  0
#define RADEC_INIT  1
#define RADEC_PLAY  2
#define RADEC_PAUSE 3

#define USE_C_DECODER
#endif
