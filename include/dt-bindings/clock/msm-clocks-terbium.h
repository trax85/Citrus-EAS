/*
 * Copyright (c) 2015, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MSM_CLOCKS_TERBIUM_H
#define __MSM_CLOCKS_TERBIUM_H

#define clk_gpll0_clk_src			0x5933b69f
#define clk_gpll2_clk_src			0x7c34503b
#define clk_gpll3_clk_src			0x5b1eccd5
#define clk_gpll4_clk_src			0x10525d57
#define clk_gpll6_clk_src			0x17dceaad

#define clk_bimc_clk				0x4b80bf00
#define clk_bimc_a_clk				0x4b25668a
#define clk_ipa_clk				0xfa685cda
#define clk_ipa_a_clk				0xeeec2919
#define clk_pcnoc_clk				0xc1296d0f
#define clk_pcnoc_a_clk				0x9bcffee4
#define clk_qdss_clk				0x1492202a
#define clk_qdss_a_clk				0xdd121669
#define clk_snoc_clk				0x2c341aa0
#define clk_snoc_a_clk				0x8fcef2af
#define clk_xo_clk_src				0x23f5649f
#define clk_xo_a_clk_src			0x2fdd2c7c
#define clk_bimc_msmbus_clk			0xd212feea
#define clk_bimc_msmbus_a_clk			0x71d1a499
#define clk_bimc_usb_a_clk			0xea410834
#define clk_pcnoc_keepalive_a_clk		0x9464f720
#define clk_pcnoc_msmbus_clk			0x2b53b688
#define clk_pcnoc_msmbus_a_clk			0x9753a54f
#define clk_pcnoc_usb_a_clk			0x11d6a74e
#define clk_snoc_msmbus_clk			0xe6900bb6
#define clk_snoc_msmbus_a_clk			0x5d4683bd
#define clk_snoc_usb_a_clk			0x34b7821b
#define clk_sysmmnoc_clk			0xebb1df78
#define clk_sysmmnoc_a_clk			0x6ca682a2
#define clk_sysmmnoc_msmbus_clk			0xd61e5721
#define clk_sysmmnoc_msmbus_a_clk		0x50600f1b
#define clk_xo_gcc				0x6ac2a778
#define clk_xo_lpm_clk				0x2be48257
#define clk_xo_otg_clk				0x79bca5cc
#define clk_xo_pil_lpass_clk			0xb72aa4c9
#define clk_xo_pil_mss_clk			0xe97a8354
#define clk_xo_pil_pronto_clk			0x89dae6d0
#define clk_xo_wlan_clk				0x0116b76f
#define clk_gcc_blsp1_qup2_spi_apps_clk		0x3e77d48f
#define clk_gcc_blsp1_qup3_i2c_apps_clk		0x9e25ac82
#define clk_gcc_blsp1_qup3_spi_apps_clk		0xfb978880
#define clk_gcc_blsp1_qup4_i2c_apps_clk		0xd7f40f6f
#define clk_gcc_blsp1_qup4_spi_apps_clk		0x80f8722f
#define clk_gcc_blsp1_uart1_apps_clk		0xc7c62f90
#define clk_gcc_blsp1_uart2_apps_clk		0xf8a61c96
#define clk_gcc_blsp2_qup1_i2c_apps_clk		0x9ace11dd
#define clk_gcc_blsp2_qup1_spi_apps_clk		0xa32604cc
#define clk_gcc_blsp2_qup2_i2c_apps_clk		0x1bf9a57e
#define clk_gcc_blsp2_qup2_spi_apps_clk		0xbf54ca6d
#define clk_gcc_blsp2_qup3_i2c_apps_clk		0x336d4170
#define clk_gcc_blsp2_qup3_spi_apps_clk		0xc68509d6
#define clk_gcc_blsp2_qup4_i2c_apps_clk		0xbd22539d
#define clk_gcc_blsp2_qup4_spi_apps_clk		0x01a72b93
#define clk_gcc_blsp2_uart1_apps_clk		0x8c3512ff
#define clk_gcc_blsp2_uart2_apps_clk		0x1e1965a3
#define clk_gcc_camss_cci_ahb_clk		0xa81c11ba
#define clk_gcc_camss_cci_clk			0xb7dd8824
#define clk_gcc_camss_cpp_ahb_clk		0x4ac95e14
#define clk_gcc_camss_cpp_axi_clk		0xbbf73861
#define clk_gcc_camss_cpp_clk			0x7118a0de
#define clk_gcc_camss_csi0_ahb_clk		0x175d672a
#define clk_gcc_camss_csi0_clk			0x6b01b3e1
#define clk_gcc_camss_csi0phy_clk		0x06a41ff7
#define clk_gcc_camss_csi0pix_clk		0x61a8a930
#define clk_gcc_camss_csi0rdi_clk		0x7053c7ae
#define clk_gcc_camss_csi1_ahb_clk		0x2c2dc261
#define clk_gcc_camss_csi1_clk			0x1aba4a8c
#define clk_gcc_camss_csi1phy_clk		0x0fd1d1fa
#define clk_gcc_camss_csi1pix_clk		0x87fc98d8
#define clk_gcc_camss_csi1rdi_clk		0x6ac996fe
#define clk_gcc_camss_csi2_ahb_clk		0xf3f25940
#define clk_gcc_camss_csi2_clk			0xb6857fa2
#define clk_gcc_camss_csi2phy_clk		0xbeeffbcd
#define clk_gcc_camss_csi2pix_clk		0xa619561a
#define clk_gcc_camss_csi2rdi_clk		0x019fd3f1
#define clk_gcc_camss_csi_vfe0_clk		0xcc73453c
#define clk_gcc_camss_csi_vfe1_clk		0xb1ef6e8b
#define clk_gcc_camss_gp0_clk			0xd2bc3892
#define clk_gcc_camss_gp1_clk			0xe4c013e1
#define clk_gcc_camss_ispif_ahb_clk		0x3c0a858f
#define clk_gcc_camss_jpeg0_clk			0x1ed3f032
#define clk_gcc_camss_jpeg_ahb_clk		0x3bfa7603
#define clk_gcc_camss_jpeg_axi_clk		0x3e278896
#define clk_gcc_camss_mclk0_clk			0x80902deb
#define clk_gcc_camss_mclk1_clk			0x5002d85f
#define clk_gcc_camss_mclk2_clk			0x222f8fff
#define clk_gcc_camss_micro_ahb_clk		0xfbbee8cf
#define clk_gcc_camss_csi0phytimer_clk		0xf8897589
#define clk_gcc_camss_csi1phytimer_clk		0x4d26438f
#define clk_gcc_camss_ahb_clk			0x9894b414
#define clk_gcc_camss_top_ahb_clk		0x4e814a78
#define clk_gcc_camss_vfe0_clk			0xaaa3cd97
#define clk_gcc_camss_vfe_ahb_clk		0x4050f47a
#define clk_gcc_camss_vfe_axi_clk		0x77fe2384
#define clk_gcc_camss_vfe1_ahb_clk		0x634a738a
#define clk_gcc_camss_vfe1_axi_clk		0xaf7463b3
#define clk_gcc_camss_vfe1_clk			0xcaf20d99
#define clk_gcc_dcc_clk				0xd1000c50
#define clk_gcc_dsa_core_clk			0xa7bc3134
#define clk_gcc_dsa_noc_cfg_ahb_clk		0x9ba991b0
#define clk_gcc_oxili_gmem_clk			0x5620913a
#define clk_gcc_gp1_clk				0x057f7b69
#define clk_gcc_gp2_clk				0x9bf83ffd
#define clk_gcc_gp3_clk				0xec6539ee
#define clk_gcc_mdss_ahb_clk			0xbfb92ed3
#define clk_gcc_mdss_axi_clk			0x668f51de
#define clk_gcc_mdss_byte0_clk			0x35da7862
#define clk_gcc_mdss_byte1_clk			0x41f97fd8
#define clk_gcc_mdss_esc0_clk			0xaec5cb25
#define clk_gcc_mdss_esc1_clk			0x34653cc7
#define clk_gcc_mdss_mdp_clk			0x22f3521f
#define clk_gcc_mdss_pclk0_clk			0xcc5c5c77
#define clk_gcc_mdss_pclk1_clk			0x9a9c430d
#define clk_gcc_mdss_vsync_clk			0x32a09f1f
#define clk_gcc_mss_cfg_ahb_clk			0x111cde81
#define clk_gcc_mss_q6_bimc_axi_clk		0x67544d62
#define clk_gcc_bimc_gfx_clk			0x3edd69ad
#define clk_gcc_oxili_ahb_clk			0xd15c8a00
#define clk_gcc_oxili_aon_clk			0xae18e54d
#define clk_gcc_oxili_gfx3d_clk			0x49a51fd9
#define clk_gcc_oxili_timer_clk			0x1180db06
#define clk_gcc_pdm2_clk			0x99d55711
#define clk_gcc_pdm_ahb_clk			0x365664f6
#define clk_gcc_rbcpr_gfx_ahb_clk		0xf2f28a7c
#define clk_gcc_rbcpr_gfx_clk			0x20c0af83
#define clk_gcc_sdcc1_ahb_clk			0x691e0caa
#define clk_gcc_sdcc1_apps_clk			0x9ad6fb96
#define clk_gcc_sdcc1_ice_core_clk		0x0fd5680a
#define clk_gcc_sdcc2_ahb_clk			0x23d5727f
#define clk_gcc_sdcc2_apps_clk			0x861b20ac
#define clk_gcc_sdcc3_ahb_clk			0x565b2c03
#define clk_gcc_sdcc3_apps_clk			0x0b27aeac
#define clk_gcc_throttle_gfx_1_ahb_clk		0x816e2808
#define clk_gcc_throttle_gfx_1_axi_clk		0xde9e65b7
#define clk_gcc_throttle_gfx_1_cxo_clk		0x3f1cc76e
#define clk_gcc_usb2a_phy_sleep_clk		0x6caa736f
#define clk_gcc_usb_hs_phy_cfg_ahb_clk		0xe13808fd
#define clk_gcc_usb_fs_ahb_clk			0x69283a8e
#define clk_gcc_usb_fs_ic_clk			0x529442f0
#define clk_gcc_usb_fs_system_clk		0x21803434
#define clk_gcc_usb_hs_ahb_clk			0x72ce8032
#define clk_gcc_usb_hs_system_clk		0xa11972e5
#define clk_gcc_venus0_ahb_clk			0x08d778c6
#define clk_gcc_venus0_axi_clk			0xcdf4c8f6
#define clk_gcc_venus0_core0_vcodec0_clk	0x83a7f549
#define clk_gcc_venus0_core1_vcodec0_clk	0xa0813de6
#define clk_gcc_venus0_vcodec0_clk		0xf76a02bb
#define clk_gcc_apss_ahb_clk			0x2b0d39ff
#define clk_gcc_apss_axi_clk			0x1d47f4ff
#define clk_gcc_bimc_apss_axi_clk		0x3d061676
#define clk_gcc_blsp1_ahb_clk			0x8caa5b4f
#define clk_gcc_blsp2_ahb_clk			0x8f283c1d
#define clk_gcc_boot_rom_ahb_clk		0xde2adeb1
#define clk_gcc_crypto_ahb_clk			0x94de4919
#define clk_gcc_crypto_axi_clk			0xd4415c9b
#define clk_gcc_crypto_clk			0x00d390d2
#define clk_gcc_cpp_tbu_clk			0xab6f19ab
#define clk_gcc_gfx_1_tbu_clk			0xe66048ad
#define clk_gcc_gfx_tbu_clk			0x18bb9a90
#define clk_gcc_gfx_tcu_clk			0x59505e55
#define clk_gcc_gtcu_ahb_clk			0xb432168e
#define clk_gcc_jpeg_tbu_clk			0xcf8fd944
#define clk_gcc_mdp_rt_tbu_clk			0x51e8fc68
#define clk_gcc_mdp_tbu_clk			0x82287f76
#define clk_gcc_smmu_cfg_clk			0x75eaefa5
#define clk_gcc_venus_1_tbu_clk			0xdd8ee8d0
#define clk_gcc_venus_tbu_clk			0x7e0b97ce
#define clk_gcc_vfe1_tbu_clk			0x4888e70f
#define clk_gcc_vfe_tbu_clk			0x061f2f95
#define clk_aps_0_clk_src			0xa6068d64
#define clk_aps_1_clk_src			0x3eec0ade
#define clk_apss_ahb_clk_src			0x36f8495f
#define clk_blsp1_qup1_i2c_apps_clk_src		0x17f78f5e
#define clk_blsp1_qup1_spi_apps_clk_src		0xf534c4fa
#define clk_blsp1_qup2_i2c_apps_clk_src		0x8de71c79
#define clk_blsp1_qup2_spi_apps_clk_src		0x33cf809a
#define clk_blsp1_qup3_i2c_apps_clk_src		0xf161b902
#define clk_blsp1_qup3_spi_apps_clk_src		0x5e95683f
#define clk_blsp1_qup4_i2c_apps_clk_src		0xb2ecce68
#define clk_blsp1_qup4_spi_apps_clk_src		0xddb5bbdb
#define clk_blsp1_uart1_apps_clk_src		0xf8146114
#define clk_blsp1_uart2_apps_clk_src		0xfc9c2f73
#define clk_blsp2_qup1_i2c_apps_clk_src		0xd6d1e95d
#define clk_blsp2_qup1_spi_apps_clk_src		0xcc1b8365
#define clk_blsp2_qup2_i2c_apps_clk_src		0x603b5c51
#define clk_blsp2_qup2_spi_apps_clk_src		0xd577dc44
#define clk_blsp2_qup3_i2c_apps_clk_src		0xea82959c
#define clk_blsp2_qup3_spi_apps_clk_src		0xd04b1e92
#define clk_blsp2_qup4_i2c_apps_clk_src		0x73dc968c
#define clk_blsp2_qup4_spi_apps_clk_src		0x25d4a2b1
#define clk_blsp2_uart1_apps_clk_src		0x562c66dc
#define clk_blsp2_uart2_apps_clk_src		0xdd448080
#define clk_cci_clk_src				0x822f3d97
#define clk_cpp_clk_src				0x8382f56d
#define clk_csi0_clk_src			0x227e65bc
#define clk_csi1_clk_src			0x6a2a6c36
#define clk_csi2_clk_src			0x4113589f
#define clk_camss_gp0_clk_src			0x43b063e9
#define clk_camss_gp1_clk_src			0xa3315f1b
#define clk_jpeg0_clk_src			0x9a0a0ac3
#define clk_mclk0_clk_src			0x266b3853
#define clk_mclk1_clk_src			0xa73cad0c
#define clk_mclk2_clk_src			0x42545468
#define clk_csi0phytimer_clk_src		0xc8a309be
#define clk_csi1phytimer_clk_src		0x7c0fe23a
#define clk_camss_top_ahb_clk_src		0xf92304fb
#define clk_vfe0_clk_src			0xa0c2bd8f
#define clk_vfe1_clk_src			0x4e357366
#define clk_crypto_clk_src			0x37a21414
#define clk_dsa_core_clk_src			0x26f8bb96
#define clk_gp1_clk_src				0xad85b97a
#define clk_gp2_clk_src				0xfb1f0065
#define clk_gp3_clk_src				0x63b693d6
#define clk_byte0_clk_src			0x75cc885b
#define clk_byte1_clk_src			0x63c2c955
#define clk_esc0_clk_src			0xb41d7c38
#define clk_esc1_clk_src			0x3b0afa42
#define clk_mdp_clk_src				0x6dc1f8f1
#define clk_pclk0_clk_src			0xccac1f35
#define clk_pclk1_clk_src			0x090f68ac
#define clk_vsync_clk_src			0xecb43940
#define clk_gfx3d_clk_src			0x917f76ef
#define clk_pdm2_clk_src			0x31e494fd
#define clk_rbcpr_gfx_clk_src			0x37f04b53
#define clk_sdcc1_apps_clk_src			0xd4975db2
#define clk_sdcc1_ice_core_clk_src		0xfd6a4301
#define clk_sdcc2_apps_clk_src			0xfc46c821
#define clk_sdcc3_apps_clk_src			0xea34c7f4
#define clk_usb_fs_ic_clk_src			0x85e6f4ec
#define clk_usb_fs_system_clk_src		0x8f05a38c
#define clk_usb_hs_system_clk_src		0x28385546
#define clk_vcodec0_clk_src			0xbc193019
#define clk_gcc_qusb2_phy_clk			0x996884d5
#define clk_gcc_usb2_hs_phy_only_clk		0x0047179d

/* DEBUG */
#define clk_gcc_debug_mux			0x8121ac15
#define clk_rpm_debug_mux			0x25cd1f3a
#define clk_wcnss_m_clk				0x709f430b

#endif