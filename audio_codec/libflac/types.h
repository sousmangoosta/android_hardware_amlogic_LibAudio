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

#ifndef _DSP_TYPES_H
#define _DSP_TYPES_H
/* bsd */
typedef unsigned char       u_char;
typedef unsigned short      u_short;
typedef unsigned int        u_int;
typedef unsigned long       u_long;

/* sysv */
typedef unsigned char       unchar;
typedef unsigned short      ushort;
typedef unsigned int        uint;
typedef unsigned long       ulong;

typedef unsigned char       __u8;
typedef unsigned short  __u16;
typedef unsigned int        __u32;
typedef unsigned long long      __u64;


typedef  signed char        __s8;
typedef  short  __s16;
typedef  int        __s32;
typedef  long long      __s64;

typedef     __u8        u_int8_t;
typedef     __s8        int8_t;
typedef     __u16       u_int16_t;
typedef     __s16       int16_t;
typedef     __u32       u_int32_t;
typedef     __s32       int32_t;


typedef     __u8        uint8_t;
typedef     __u16       uint16_t;
typedef     __u32       uint32_t;

typedef     __u64       uint64_t;
typedef     __u64       u_int64_t;
typedef     __s64       int64_t;
typedef     float       float32_t;


#ifndef NULL
#define NULL ((void *)0)
#endif

#endif
