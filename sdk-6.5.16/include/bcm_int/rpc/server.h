/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *
 * File:	server.h
 * Purpose:	server BCM API dispatch driver
 * Generator:	mkdispatch 1.54
 */

#ifdef	BCM_RPC_SUPPORT

#include <bcm_int/rpc/entry.h>

typedef void (*_bcm_server_routine_t)(cpudb_key_t, uint8 *, void *);
typedef struct _bcm_server_lookup_s {
	uint32			key[BCM_RPC_LOOKUP_KEYLEN];
	_bcm_server_routine_t	routine;
} _bcm_server_lookup_t;

extern _bcm_server_lookup_t _bcm_server_lookup[BCM_RPC_LOOKUP_COUNT];
extern void _bcm_server_unavail(cpudb_key_t, uint8 *, void *);

#endif	/* BCM_RPC_SUPPORT */
