/*
 * Copyright (c) 2015-2020, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef TBB_EXT_H
#define TBB_EXT_H

#include "ext.h"

/* TBBR extensions */
enum {
	TRUSTED_FW_NVCOUNTER_EXT,
	NON_TRUSTED_FW_NVCOUNTER_EXT,
	TRUSTED_BOOT_FW_HASH_EXT,
	TRUSTED_BOOT_FW_CONFIG_HASH_EXT,
	HW_CONFIG_HASH_EXT,
	FW_CONFIG_HASH_EXT,
	TRUSTED_WORLD_PK_EXT,
	NON_TRUSTED_WORLD_PK_EXT,
	SCP_FW_CONTENT_CERT_PK_EXT,
	SCP_FW_HASH_EXT,
	SOC_FW_CONTENT_CERT_PK_EXT,
	SOC_AP_FW_HASH_EXT,
	SOC_FW_CONFIG_HASH_EXT,
	TRUSTED_OS_FW_CONTENT_CERT_PK_EXT,
	TRUSTED_OS_FW_HASH_EXT,
	TRUSTED_OS_FW_EXTRA1_HASH_EXT,
	TRUSTED_OS_FW_EXTRA2_HASH_EXT,
	TRUSTED_OS_FW_CONFIG_HASH_EXT,
	NON_TRUSTED_FW_CONTENT_CERT_PK_EXT,
	NON_TRUSTED_WORLD_BOOTLOADER_HASH_EXT,
	NON_TRUSTED_FW_CONFIG_HASH_EXT,
	SP_PKG1_HASH_EXT,
	SP_PKG2_HASH_EXT,
	SP_PKG3_HASH_EXT,
	SP_PKG4_HASH_EXT,
	SP_PKG5_HASH_EXT,
	SP_PKG6_HASH_EXT,
	SP_PKG7_HASH_EXT,
	SP_PKG8_HASH_EXT,
	SCP_FWU_CFG_HASH_EXT,
	AP_FWU_CFG_HASH_EXT,
	FWU_HASH_EXT,
	DDR_FW_CONTENT_CERT_PK_EXT,
	DDR_IMEM_UDIMM_1D_HASH_EXT,
	DDR_IMEM_UDIMM_2D_HASH_EXT,
	DDR_DMEM_UDIMM_1D_HASH_EXT,
	DDR_DMEM_UDIMM_2D_HASH_EXT,
	DDR_IMEM_RDIMM_1D_HASH_EXT,
	DDR_IMEM_RDIMM_2D_HASH_EXT,
	DDR_DMEM_RDIMM_1D_HASH_EXT,
	DDR_DMEM_RDIMM_2D_HASH_EXT
};

#endif /* TBB_EXT_H */
