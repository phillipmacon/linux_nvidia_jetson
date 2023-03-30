/*
 * tegra210_spdif.h - Definitions for Tegra210 SPDIF driver
 *
 * Copyright (c) 2014-2020, NVIDIA CORPORATION.  All rights reserved.
 *
 */

#ifndef __TEGRA210_SPDIF_H__
#define __TEGRA210_SPDIF_H__

/* Register offsets from TEGRA_SPDIF_BASE */

#define TEGRA210_SPDIF_CTRL			0x0
#define TEGRA210_SPDIF_STROBE_CTRL		0x4
#define TEGRA210_SPDIF_CIF_TXD_CTRL		0x08
#define TEGRA210_SPDIF_CIF_RXD_CTRL		0x0C
#define TEGRA210_SPDIF_CIF_TXU_CTRL		0x10
#define TEGRA210_SPDIF_CIF_RXU_CTRL		0x14
#define TEGRA210_SPDIF_CH_STA_RX_A		0x18
#define TEGRA210_SPDIF_CH_STA_RX_B		0x1C
#define TEGRA210_SPDIF_CH_STA_RX_C		0x20
#define TEGRA210_SPDIF_CH_STA_RX_D		0x24
#define TEGRA210_SPDIF_CH_STA_RX_E		0x28
#define TEGRA210_SPDIF_CH_STA_RX_F		0x2C
#define TEGRA210_SPDIF_CH_STA_TX_A		0x30
#define TEGRA210_SPDIF_CH_STA_TX_B		0x34
#define TEGRA210_SPDIF_CH_STA_TX_C		0x38
#define TEGRA210_SPDIF_CH_STA_TX_D		0x3C
#define TEGRA210_SPDIF_CH_STA_TX_E		0x40
#define TEGRA210_SPDIF_CH_STA_TX_F		0x44
#define TEGRA210_SPDIF_FLOWCTL_CTRL		0x70
#define TEGRA210_SPDIF_TX_STEP			0x74
#define TEGRA210_SPDIF_FLOW_STATUS		0x78
#define TEGRA210_SPDIF_FLOW_TOTAL		0x7c
#define TEGRA210_SPDIF_FLOW_OVER			0x80
#define TEGRA210_SPDIF_FLOW_UNDER		0x84
#define TEGRA210_SPDIF_LCOEF_1_4_0		0x88
#define TEGRA210_SPDIF_LCOEF_1_4_1		0x8c
#define TEGRA210_SPDIF_LCOEF_1_4_2		0x90
#define TEGRA210_SPDIF_LCOEF_1_4_3		0x94
#define TEGRA210_SPDIF_LCOEF_1_4_4		0x98
#define TEGRA210_SPDIF_LCOEF_1_4_5		0x9c
#define TEGRA210_SPDIF_LCOEF_2_4_0		0xa0
#define TEGRA210_SPDIF_LCOEF_2_4_1		0xa4
#define TEGRA210_SPDIF_LCOEF_2_4_2		0xa8

/* Fields in TEGRA210_SPDIF_CTRL */
#define TEGRA210_SPDIF_CTRL_FLOWCTL_EN_ENABLE	(1<<31)
#define TEGRA210_SPDIF_CTRL_CAP_LC_LEFT_CH	(1<<30)
#define TEGRA210_SPDIF_CTRL_RX_EN_ENABLE		(1<<29)
#define TEGRA210_SPDIF_CTRL_TX_EN_ENABLE		(1<<28)
#define TEGRA210_SPDIF_CTRL_TC_EN_ENABLE		(1<<27)
#define TEGRA210_SPDIF_CTRL_TU_EN_ENABLE		(1<<26)
#define TEGRA210_SPDIF_CTRL_IE_P_RSVD_ENABLE	(1<<23)
#define TEGRA210_SPDIF_CTRL_IE_B_RSVD_ENABLE	(1<<22)
#define TEGRA210_SPDIF_CTRL_IE_C_RSVD_ENABLE	(1<<21)
#define TEGRA210_SPDIF_CTRL_IE_U_RSVD_ENABLE	(1<<20)
#define TEGRA210_SPDIF_CTRL_LBK_EN_ENABLE_MASK	(1<<15)
#define TEGRA210_SPDIF_CTRL_LBK_EN_ENABLE_SHIFT	15
#define TEGRA210_SPDIF_CTRL_PACK_ENABLE		(1<<14)

#define TEGRA210_SPDIF_BIT_MODE16		0
#define TEGRA210_SPDIF_BIT_MODE20		1
#define TEGRA210_SPDIF_BIT_MODE24		2
#define TEGRA210_SPDIF_BIT_MODERAW		3

#define TEGRA210_SPDIF_CTRL_BIT_MODE_SHIFT	12
#define TEGRA210_SPDIF_CTRL_BIT_MODE_MASK	(3                         << TEGRA210_SPDIF_CTRL_BIT_MODE_SHIFT)
#define TEGRA210_SPDIF_CTRL_BIT_MODE_16BIT	(TEGRA210_SPDIF_BIT_MODE16  << TEGRA210_SPDIF_CTRL_BIT_MODE_SHIFT)
#define TEGRA210_SPDIF_CTRL_BIT_MODE_20BIT	(TEGRA210_SPDIF_BIT_MODE20  << TEGRA210_SPDIF_CTRL_BIT_MODE_SHIFT)
#define TEGRA210_SPDIF_CTRL_BIT_MODE_24BIT	(TEGRA210_SPDIF_BIT_MODE24  << TEGRA210_SPDIF_CTRL_BIT_MODE_SHIFT)
#define TEGRA210_SPDIF_CTRL_BIT_MODE_RAW		(TEGRA210_SPDIF_BIT_MODERAW << TEGRA210_SPDIF_CTRL_BIT_MODE_SHIFT)

#define TEGRA210_SPDIF_CTRL_CG_EN_ENABLE		(1<<11)

#define TEGRA210_SPDIF_CTRL_OBS_SEL_SHIFT	8
#define TEGRA210_SPDIF_CTRL_OBS_SEL_NASK		(0x7 << TEGRA210_SPDIF_CTRL_OBS_SEL_SHIFT)

#define TEGRA210_SPDIF_CTRL_SOFT_RESET_ENABLE	(1<<7)

/* Fields in TEGRA210_SPDIF_STROBE_CTRL */
#define TEGRA210_SPDIF_STROBE_CTRL_PERIOD_SHIFT		16
#define TEGRA210_SPDIF_STROBE_CTRL_PERIOD_MASK		(0xff << TEGRA210_SPDIF_STROBE_CTRL_PERIOD_SHIFT)

#define TEGRA210_SPDIF_STROBE_CTRL_STROBE		(1<<15)

#define TEGRA210_SPDIF_STROBE_CTRL_DATA_STROBES_SHIFT	8
#define TEGRA210_SPDIF_STROBE_CTRL_DATA_STROBES_MASK	(0x1f << TEGRA210_SPDIF_STROBE_CTRL_DATA_STROBES_SHIFT)

#define TEGRA210_SPDIF_STROBE_CTRL_CLOCK_PERIOD_SHIFT	0
#define TEGRA210_SPDIF_STROBE_CTRL_CLOCK_PERIOD_MASK	(0x3f << TEGRA210_SPDIF_STROBE_CTRL_CLOCK_PERIOD_SHIFT)

/*
 * The 6-word receive channel data page buffer holds a block (192 frames) of
 * channel status information. The order of receive is from LSB to MSB
 * bit, and from CH_STA_RX_A to CH_STA_RX_F then back to CH_STA_RX_A.
 */

/* Fields in TEGRA210_SPDIF_CH_STA_TX_A */
#define TEGRA210_SPDIF_CH_STA_TX_A_SF_22050			0x4
#define TEGRA210_SPDIF_CH_STA_TX_A_SF_24000			0x6
#define TEGRA210_SPDIF_CH_STA_TX_A_SF_32000			0x3
#define TEGRA210_SPDIF_CH_STA_TX_A_SF_44100			0x0
#define TEGRA210_SPDIF_CH_STA_TX_A_SF_48000			0x2
#define TEGRA210_SPDIF_CH_STA_TX_A_SF_88200			0x8
#define TEGRA210_SPDIF_CH_STA_TX_A_SF_96000			0xA
#define TEGRA210_SPDIF_CH_STA_TX_A_SF_176400			0xC
#define TEGRA210_SPDIF_CH_STA_TX_A_SF_192000			0xE

#define TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_SHIFT		24
#define TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_MASK		\
		(0xF                                 << TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_22050	\
		(TEGRA210_SPDIF_CH_STA_TX_A_SF_22050  << TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_24000		\
		(TEGRA210_SPDIF_CH_STA_TX_A_SF_24000  << TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_32000		\
		(TEGRA210_SPDIF_CH_STA_TX_A_SF_32000  << TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_44100		\
		(TEGRA210_SPDIF_CH_STA_TX_A_SF_44100  << TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_48000		\
		(TEGRA210_SPDIF_CH_STA_TX_A_SF_48000  << TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_88200		\
		(TEGRA210_SPDIF_CH_STA_TX_A_SF_88200  << TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_96000		\
		(TEGRA210_SPDIF_CH_STA_TX_A_SF_96000  << TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_176400		\
		(TEGRA210_SPDIF_CH_STA_TX_A_SF_176400 << TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_192000		\
		(TEGRA210_SPDIF_CH_STA_TX_A_SF_192000 << TEGRA210_SPDIF_CH_STA_TX_A_SAMP_FREQ_SHIFT)

/* Fields in TEGRA210_SPDIF_CH_STA_TX_B */
#define TEGRA210_SPDIF_CH_STA_TX_B_SF_8000			0x6
#define TEGRA210_SPDIF_CH_STA_TX_B_SF_11025			0xA
#define TEGRA210_SPDIF_CH_STA_TX_B_SF_12000			0x2
#define TEGRA210_SPDIF_CH_STA_TX_B_SF_16000			0x8
#define TEGRA210_SPDIF_CH_STA_TX_B_SF_22050			0xB
#define TEGRA210_SPDIF_CH_STA_TX_B_SF_24000			0x9
#define TEGRA210_SPDIF_CH_STA_TX_B_SF_32000			0xC
#define TEGRA210_SPDIF_CH_STA_TX_B_SF_44100			0xF
#define TEGRA210_SPDIF_CH_STA_TX_B_SF_48000			0xD
#define TEGRA210_SPDIF_CH_STA_TX_B_SF_88200			0x7
#define TEGRA210_SPDIF_CH_STA_TX_B_SF_96000			0x5
#define TEGRA210_SPDIF_CH_STA_TX_B_SF_176400			0x3
#define TEGRA210_SPDIF_CH_STA_TX_B_SF_192000			0x1

#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT		4
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_MASK		\
		(0xF                                 << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_8000		\
		(TEGRA210_SPDIF_CH_STA_TX_B_SF_8000   << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_11025		\
		(TEGRA210_SPDIF_CH_STA_TX_B_SF_11025  << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_12000		\
		(TEGRA210_SPDIF_CH_STA_TX_B_SF_12000  << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_16000		\
		(TEGRA210_SPDIF_CH_STA_TX_B_SF_16000  << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_22050		\
		(TEGRA210_SPDIF_CH_STA_TX_B_SF_22025  << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_24000		\
		(TEGRA210_SPDIF_CH_STA_TX_B_SF_24000  << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_32000		\
		(TEGRA210_SPDIF_CH_STA_TX_B_SF_32000  << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_44100		\
		(TEGRA210_SPDIF_CH_STA_TX_B_SF_44100  << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_48000		\
		(TEGRA210_SPDIF_CH_STA_TX_B_SF_48000  << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_88200		\
		(TEGRA210_SPDIF_CH_STA_TX_B_SF_88200  << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_96000		\
		(TEGRA210_SPDIF_CH_STA_TX_B_SF_96000  << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_176400		\
		(TEGRA210_SPDIF_CH_STA_TX_B_SF_176400 << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)
#define TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_192000		\
		(TEGRA210_SPDIF_CH_STA_TX_B_SF_192000 << TEGRA210_SPDIF_CH_STA_TX_B_ORIG_SAMP_FREQ_SHIFT)

/* Fields in TEGRA210_SPDIF_CH_STA_TX_C */
/* Fields in TEGRA210_SPDIF_CH_STA_TX_D */
/* Fields in TEGRA210_SPDIF_CH_STA_TX_E */
/* Fields in TEGRA210_SPDIF_CH_STA_TX_F */

/* Fields in TEGRA210_SPDIF_FLOWCTL_CTRL */
#define TEGRA210_SPDIF_FLOWCTL_CTRL_FILTER_QUAD		(1<<31)

/* Fields in TEGRA210_SPDIF_TX_STEP */
#define TEGRA210_SPDIF_TX_STEP_STEP_SIZE_SHIFT		0
#define TEGRA210_SPDIF_TX_STEP_STEP_SIZE_MASK		(0xffff << TEGRA210_SPDIF_TX_STEP_STEP_SIZE_SHIFT)

/* Fields in TEGRA210_SPDIF_FLOW_STATUS */
#define TEGRA210_SPDIF_FLOW_STATUS_COUNTER_EN_ENABLE	(1<<1)
#define TEGRA210_SPDIF_FLOW_STATUS_MONITOR_CLR_CLEAR	(1<<2)
#define TEGRA210_SPDIF_FLOW_STATUS_COUNTER_CLR_CLEAR	(1<<3)
#define TEGRA210_SPDIF_FLOW_STATUS_MONITOR_INT_EN_ENABLE	(1<<4)
#define TEGRA210_SPDIF_FLOW_STATUS_FLOW_OVERFLOW_OVER	(1<<30)
#define TEGRA210_SPDIF_FLOW_STATUS_FLOW_UNDERFLOW_UNDER	(1<<31)

/* Fields in TEGRA210_SPDIF_FLOW_TOTAL */
/* Fields in TEGRA210_SPDIF_FLOW_OVER */
/* Fields in TEGRA210_SPDIF_FLOW_UNDER */

/* Fields in TEGRA210_SPDIF_LCOEF_1_4_0 */
#define TEGRA210_SPDIF_LCOEF_1_4_0_COEF_SHIFT		0
#define TEGRA210_SPDIF_LCOEF_1_4_0_COEF_MASK		(0xffff << TEGRA30_TEGRA210_SPDIF_LCOEF_1_4_0_COEF_SHIFT)

/* Fields in TEGRA210_SPDIF_LCOEF_1_4_1 */
#define TEGRA210_SPDIF_LCOEF_1_4_1_COEF_SHIFT		0
#define TEGRA210_SPDIF_LCOEF_1_4_1_COEF_MASK		(0xffff << TEGRA210_SPDIF_LCOEF_1_4_1_COEF_SHIFT)

/* Fields in TEGRA210_SPDIF_LCOEF_1_4_2 */
#define TEGRA210_SPDIF_LCOEF_1_4_2_COEF_SHIFT		0
#define TEGRA210_SPDIF_LCOEF_1_4_2_COEF_MASK		(0xffff << TEGRA210_SPDIF_LCOEF_1_4_2_COEF_SHIFT)

/* Fields in TEGRA210_SPDIF_LCOEF_1_4_3 */
#define TEGRA210_SPDIF_LCOEF_1_4_3_COEF_SHIFT		0
#define TEGRA210_SPDIF_LCOEF_1_4_3_COEF_MASK		(0xffff << TEGRA210_SPDIF_LCOEF_1_4_3_COEF_SHIFT)

/* Fields in TEGRA210_SPDIF_LCOEF_1_4_4 */
#define TEGRA210_SPDIF_LCOEF_1_4_4_COEF_SHIFT		0
#define TEGRA210_SPDIF_LCOEF_1_4_4_COEF_MASK		(0xffff << TEGRA210_SPDIF_LCOEF_1_4_4_COEF_SHIFT)

/* Fields in TEGRA210_SPDIF_LCOEF_1_4_5 */
#define TEGRA210_SPDIF_LCOEF_1_4_5_COEF_SHIFT		0
#define TEGRA210_SPDIF_LCOEF_1_4_5_COEF_MASK		(0xffff << TEGRA210_SPDIF_LCOEF_1_4_5_COEF_SHIFT)

/* Fields in TEGRA210_SPDIF_LCOEF_2_4_0 */
#define TEGRA210_SPDIF_LCOEF_2_4_0_COEF_SHIFT		0
#define TEGRA210_SPDIF_LCOEF_2_4_0_COEF_MASK		(0xffff << TEGRA210_SPDIF_LCOEF_2_4_0_COEF_SHIFT)

/* Fields in TEGRA210_SPDIF_LCOEF_2_4_1 */
#define TEGRA210_SPDIF_LCOEF_2_4_1_COEF_SHIFT		0
#define TEGRA210_SPDIF_LCOEF_2_4_1_COEF_MASK		(0xffff << TEGRA210_SPDIF_LCOEF_2_4_1_COEF_SHIFT)

/* Fields in TEGRA210_SPDIF_LCOEF_2_4_2 */
#define TEGRA210_SPDIF_LCOEF_2_4_2_COEF_SHIFT		0
#define TEGRA210_SPDIF_LCOEF_2_4_2_COEF_MASK		(0xffff << TEGRA210_SPDIF_LCOEF_2_4_2_COEF_SHIFT)

struct tegra210_spdif {
	struct clk *clk_spdif_out;
	struct clk *clk_spdif_in;
	struct regmap *regmap;
	unsigned int loopback;
};

#endif
