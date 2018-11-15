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

#ifndef COOK_CODEC_HEADERS
#define COOK_CODEC_HEADERS


#define SUB_FMT_VALID           (1<<1)
#define CHANNEL_VALID           (1<<2)
#define SAMPLE_RATE_VALID       (1<<3)
#define DATA_WIDTH_VALID        (1<<4)

#define AUDIO_EXTRA_DATA_SIZE  (2048*2)

struct audio_info {
    int valid;
    int sample_rate;
    int channels;
    int bitrate;
    int codec_id;
    int block_align;
    int extradata_size;
    char extradata[AUDIO_EXTRA_DATA_SIZE];
};
#if 0
typedef enum {
    DECODE_INIT_ERR,
    DECODE_FATAL_ERR,
} err_code_t;
#endif

#endif

