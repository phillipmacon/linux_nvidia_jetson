/*
 * Copyright (c) 2020, NVIDIA CORPORATION.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef NVGPU_PM_RESERVATION_VGPU_H
#define NVGPU_PM_RESERVATION_VGPU_H

#include <nvgpu/types.h>

struct gk20a;
enum nvgpu_profiler_pm_resource_type;
enum nvgpu_profiler_pm_reservation_scope;

int vgpu_pm_reservation_acquire(struct gk20a *g, u32 reservation_id,
	enum nvgpu_profiler_pm_resource_type pm_resource,
	enum nvgpu_profiler_pm_reservation_scope scope,
	u32 vmid);
int vgpu_pm_reservation_release(struct gk20a *g, u32 reservation_id,
	enum nvgpu_profiler_pm_resource_type pm_resource,
	u32 vmid);

#endif /* NVGPU_PM_RESERVATION_VGPU_H */
