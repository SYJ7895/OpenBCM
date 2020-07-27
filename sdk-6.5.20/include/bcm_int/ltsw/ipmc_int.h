/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_IPMC_INT_H
#define BCMINT_LTSW_IPMC_INT_H

/*!
 * \brief IPMC public information.
 */
typedef struct bcmint_ipmc_pub_info_s {

    /*! Maximum of RP ID. */
    int rp_max;

    /*! Minimum of RP ID. */
    int rp_min;

} bcmint_ipmc_pub_info_t;

/*! HA subcomponent ID for IPMC module. */
#define BCMINT_IPMC_SUB_COMP_ID_RP_BMP 0

/*! HA subcomponent ID for hitbit flexctr ID. */
#define BCMINT_IPMC_SUB_COMP_ID_MC_HIT_STAT_ID 1

#endif /* BCMINT_LTSW_IPMC_INT_H */