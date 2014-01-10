/*
* Copyright (c) 2013 Qualcomm Atheros, Inc.
* All Rights Reserved.
* Qualcomm Atheros Confidential and Proprietary.
*/

#ifndef HDD_IPA_H__
#define HDD_IPA_H__

/**===========================================================================

  \file  wlan_hdd_ipa.h

  \brief WLAN IPA interface module headers
  ==========================================================================*/

/* $HEADER$ */

/*---------------------------------------------------------------------------
  Include files
  -------------------------------------------------------------------------*/
#ifdef IPA_OFFLOAD
#include <mach/ipa.h>

VOS_STATUS hdd_ipa_init(hdd_context_t *pHddCtx);
VOS_STATUS hdd_ipa_cleanup(hdd_context_t *pHddCtx);
int hdd_ipa_wlan_evt(void *pAdapter, uint8_t sta_id,
				enum ipa_wlan_event type, uint8_t *mac_addr);
VOS_STATUS hdd_ipa_process_rxt(v_VOID_t *vosContext, adf_nbuf_t rxBuf,
							 v_U8_t staId);
bool hdd_ipa_is_enabled(hdd_context_t *pHddCtx);
#endif

#endif
