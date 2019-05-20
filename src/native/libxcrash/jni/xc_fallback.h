// Copyright (c) 2019-present, iQIYI, Inc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//

// Created by caikelun on 2019-03-07.

#ifndef XC_FALLBACK_H
#define XC_FALLBACK_H 1

#include <stdint.h>
#include <sys/types.h>
#include "xc_recorder.h"

#ifdef __cplusplus
extern "C" {
#endif

int xc_fallback_get_emergency(siginfo_t *si,
                              ucontext_t *uc,
                              pid_t pid,
                              pid_t tid,
                              long timezone,
                              uint64_t start_time,
                              uint64_t crash_time,
                              const char *app_id,
                              const char *app_version,
                              int api_level,
                              const char *os_version,
                              const char *kernel_version,
                              const char *abi_list,
                              const char *manufacturer,
                              const char *brand,
                              const char *model,
                              const char *build_fingerprint,
                              const char *revision,
                              char *emergency,
                              size_t emergency_len);

int xc_fallback_record(int log_fd,
                       char *emergency,
                       pid_t pid,
                       int api_level,
                       unsigned int logcat_system_lines,
                       unsigned int logcat_events_lines,
                       unsigned int logcat_main_lines);

#ifdef __cplusplus
}
#endif

#endif