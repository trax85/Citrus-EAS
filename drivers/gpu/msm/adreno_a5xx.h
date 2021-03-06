/* Copyright (c) 2015, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _ADRENO_A5XX_H_
#define _ADRENO_A5XX_H_

#include "a5xx_reg.h"

#define A5XX_IRQ_FLAGS \
	{ BIT(A5XX_INT_RBBM_GPU_IDLE), "RBBM_GPU_IDLE" }, \
	{ BIT(A5XX_INT_RBBM_AHB_ERROR), "RBBM_AHB_ERR" }, \
	{ BIT(A5XX_INT_RBBM_TRANSFER_TIMEOUT), "RBBM_TRANSFER_TIMEOUT" }, \
	{ BIT(A5XX_INT_RBBM_ME_MS_TIMEOUT), "RBBM_ME_MS_TIMEOUT" }, \
	{ BIT(A5XX_INT_RBBM_PFP_MS_TIMEOUT), "RBBM_PFP_MS_TIMEOUT" }, \
	{ BIT(A5XX_INT_RBBM_ETS_MS_TIMEOUT), "RBBM_ETS_MS_TIMEOUT" }, \
	{ BIT(A5XX_INT_RBBM_ATB_ASYNC_OVERFLOW), "RBBM_ATB_ASYNC_OVERFLOW" }, \
	{ BIT(A5XX_INT_RBBM_GPC_ERROR), "RBBM_GPC_ERR" }, \
	{ BIT(A5XX_INT_CP_SW), "CP_SW" }, \
	{ BIT(A5XX_INT_CP_HW_ERROR), "CP_OPCODE_ERROR" }, \
	{ BIT(A5XX_INT_CP_CCU_FLUSH_DEPTH_TS), "CP_CCU_FLUSH_DEPTH_TS" }, \
	{ BIT(A5XX_INT_CP_CCU_FLUSH_COLOR_TS), "CP_CCU_FLUSH_COLOR_TS" }, \
	{ BIT(A5XX_INT_CP_CCU_RESOLVE_TS), "CP_CCU_RESOLVE_TS" }, \
	{ BIT(A5XX_INT_CP_IB2), "CP_IB2_INT" }, \
	{ BIT(A5XX_INT_CP_IB1), "CP_IB1_INT" }, \
	{ BIT(A5XX_INT_CP_RB), "CP_RB_INT" }, \
	{ BIT(A5XX_INT_CP_UNUSED_1), "CP_UNUSED_1" }, \
	{ BIT(A5XX_INT_CP_RB_DONE_TS), "CP_RB_DONE_TS" }, \
	{ BIT(A5XX_INT_CP_WT_DONE_TS), "CP_WT_DONE_TS" }, \
	{ BIT(A5XX_INT_UNKNOWN_1), "UNKNOWN_1" }, \
	{ BIT(A5XX_INT_CP_CACHE_FLUSH_TS), "CP_CACHE_FLUSH_TS" }, \
	{ BIT(A5XX_INT_UNUSED_2), "UNUSED_2" }, \
	{ BIT(A5XX_INT_RBBM_ATB_BUS_OVERFLOW), "RBBM_ATB_BUS_OVERFLOW" }, \
	{ BIT(A5XX_INT_MISC_HANG_DETECT), "MISC_HANG_DETECT" }, \
	{ BIT(A5XX_INT_UCHE_OOB_ACCESS), "UCHE_OOB_ACCESS" }, \
	{ BIT(A5XX_INT_UCHE_TRAP_INTR), "UCHE_TRAP_INTR" }, \
	{ BIT(A5XX_INT_DEBBUS_INTR_0), "DEBBUS_INTR_0" }, \
	{ BIT(A5XX_INT_DEBBUS_INTR_1), "DEBBUS_INTR_1" }, \
	{ BIT(A5XX_INT_GPMU_VOLTAGE_DROOP), "GPMU_VOLTAGE_DROOP" }, \
	{ BIT(A5XX_INT_GPMU_FIRMWARE), "GPMU_FIRMWARE" }, \
	{ BIT(A5XX_INT_ISDB_CPU_IRQ), "ISDB_CPU_IRQ" }, \
	{ BIT(A5XX_INT_ISDB_UNDER_DEBUG), "ISDB_UNDER_DEBUG" }

#define A5XX_CP_CTXRECORD_MAGIC_REF     0x27C4BAFCUL
/* Size of each CP preemption record */
#define A5XX_CP_CTXRECORD_SIZE_IN_BYTES     0x100000
/* Size of ctx_rec_PRCNT below */
#define A5XX_CP_CTXRECORD_PREEMPTION_COUNTER_SIZE_IN_DWORDS       16

/**
 * struct a5xx_cp_preemption_record - CP context record for
 * preemption.
 * @magic: (00) Value at this offset must be equal to
 * A5XX_CP_CTXRECORD_MAGIC_REF.
 * @info: (04) Type of record. Written non-zero (usually) by CP.
 * we must set to zero for all ringbuffers.
 * @data: (08) DATA field in SET_RENDER_MODE or checkpoint packets.
 * Written by CP when switching out. Not used on switch-in.
 * we must initialize to zero.
 * @cntl: (12) RB_CNTL, saved and restored by CP.
 * @rptr: (16) RB_RPTR, saved and restored by CP.
 * @wptr: (20) RB_WPTR, saved and restored by CP.
 * @rptr_addr: (24) RB_RPTR_ADDR_LO|HI saved and restored.
 * rbase: (32) RB_BASE_LO|HI saved and restored.
 * counter: (40) Pointer to preemption counter
 */
struct a5xx_cp_preemption_record {
	uint32_t  magic;
	uint32_t  info;
	uint32_t  data;
	uint32_t  cntl;
	uint32_t  rptr;
	uint32_t  wptr;
	uint64_t  rptr_addr;
	uint64_t  rbase;
	uint64_t  counter;
};

#define A5XX_CP_SMMU_INFO_MAGIC_REF     0x3618CDA3UL

/**
 * struct a5xx_cp_smmu_info - CP preemption SMMU info.
 * @magic: (00) The value at this offset must be equal to
 * A5XX_CP_SMMU_INFO_MAGIC_REF.
 * @_pad4: (04) Reserved/padding
 * @ttbr0: (08) Base address of the page table for the
 * incoming context.
 * @context_idr: (16) Context Identification Register value.
 */
struct a5xx_cp_smmu_info {
	uint32_t  magic;
	uint32_t  _pad4;
	uint64_t  ttbr0;
	uint32_t  context_idr;
};

#endif
