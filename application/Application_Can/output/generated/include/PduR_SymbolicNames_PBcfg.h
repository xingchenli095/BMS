/**
 * \file
 *
 * \brief AUTOSAR PduR
 *
 * This file contains the implementation of the AUTOSAR
 * module PduR.
 *
 * \version 5.3.49
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#ifndef PDUR_SYMBOLIC_NAMES_PBCFG_H
#define PDUR_SYMBOLIC_NAMES_PBCFG_H

/*==================[includes]==============================================*/

/*==================[macros]================================================*/
/* -------------------- Routing path: 0 Pdu_CounterIn_256R */
#if (defined PduRConf_PduRSrcPdu_Pdu_CounterIn_256R_S)
#error PduRConf_PduRSrcPdu_Pdu_CounterIn_256R_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Pdu_CounterIn_256R_S 0U /* SRC CanIf-LO-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Pdu_CounterIn_256R_S)
#error PduR_Pdu_CounterIn_256R_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Pdu_CounterIn_256R_S 0U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* PduRConf_PduRDestPdu_Pdu_CounterIn_256R_D not defined since it is not enabled.*/


/* -------------------- Routing path: 1 Pdu_CounterOut_272T */
#if (defined PduRConf_PduRSrcPdu_Pdu_CounterOut_272T_S)
#error PduRConf_PduRSrcPdu_Pdu_CounterOut_272T_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Pdu_CounterOut_272T_S 0U /* SRC Com-UP-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Pdu_CounterOut_272T_S)
#error PduR_Pdu_CounterOut_272T_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Pdu_CounterOut_272T_S 0U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Pdu_CounterOut_272T_D)
#error PduRConf_PduRDestPdu_Pdu_CounterOut_272T_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Pdu_CounterOut_272T_D 0U /* DEST CanIf-LO-IF */


/* -------------------- Routing path: 2 Dcm_Pdu_UUDT_CAN_Tx_417133035T */
#if (defined PduRConf_PduRSrcPdu_Dcm_Pdu_UUDT_CAN_Tx_417133035T_S)
#error PduRConf_PduRSrcPdu_Dcm_Pdu_UUDT_CAN_Tx_417133035T_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Dcm_Pdu_UUDT_CAN_Tx_417133035T_S 0U /* SRC Dcm-UP-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Dcm_Pdu_UUDT_CAN_Tx_417133035T_S)
#error PduR_Dcm_Pdu_UUDT_CAN_Tx_417133035T_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Dcm_Pdu_UUDT_CAN_Tx_417133035T_S 0U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Dcm_Pdu_UUDT_CAN_Tx_417133035T_D)
#error PduRConf_PduRDestPdu_Dcm_Pdu_UUDT_CAN_Tx_417133035T_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Dcm_Pdu_UUDT_CAN_Tx_417133035T_D 1U /* DEST CanIf-LO-IF */


/* -------------------- Routing path: 3 Dcm_Pdu_UUDT_CAN_FD_Tx_417133291T */
#if (defined PduRConf_PduRSrcPdu_Dcm_Pdu_UUDT_CAN_FD_Tx_417133291T_S)
#error PduRConf_PduRSrcPdu_Dcm_Pdu_UUDT_CAN_FD_Tx_417133291T_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Dcm_Pdu_UUDT_CAN_FD_Tx_417133291T_S 1U /* SRC Dcm-UP-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Dcm_Pdu_UUDT_CAN_FD_Tx_417133291T_S)
#error PduR_Dcm_Pdu_UUDT_CAN_FD_Tx_417133291T_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Dcm_Pdu_UUDT_CAN_FD_Tx_417133291T_S 1U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Dcm_Pdu_UUDT_CAN_FD_Tx_417133291T_D)
#error PduRConf_PduRDestPdu_Dcm_Pdu_UUDT_CAN_FD_Tx_417133291T_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Dcm_Pdu_UUDT_CAN_FD_Tx_417133291T_D 2U /* DEST CanIf-LO-IF */


/* -------------------- Routing path: 4 Pdu_CounterIn_CAN_FD_257R */
#if (defined PduRConf_PduRSrcPdu_Pdu_CounterIn_CAN_FD_257R_S)
#error PduRConf_PduRSrcPdu_Pdu_CounterIn_CAN_FD_257R_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Pdu_CounterIn_CAN_FD_257R_S 1U /* SRC CanIf-LO-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Pdu_CounterIn_CAN_FD_257R_S)
#error PduR_Pdu_CounterIn_CAN_FD_257R_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Pdu_CounterIn_CAN_FD_257R_S 1U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* PduRConf_PduRDestPdu_Pdu_CounterIn_CAN_FD_257R_D not defined since it is not enabled.*/


/* -------------------- Routing path: 5 Pdu_CounterOut_CAN_FD_273T */
#if (defined PduRConf_PduRSrcPdu_Pdu_CounterOut_CAN_FD_273T_S)
#error PduRConf_PduRSrcPdu_Pdu_CounterOut_CAN_FD_273T_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Pdu_CounterOut_CAN_FD_273T_S 1U /* SRC Com-UP-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Pdu_CounterOut_CAN_FD_273T_S)
#error PduR_Pdu_CounterOut_CAN_FD_273T_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Pdu_CounterOut_CAN_FD_273T_S 1U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Pdu_CounterOut_CAN_FD_273T_D)
#error PduRConf_PduRDestPdu_Pdu_CounterOut_CAN_FD_273T_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Pdu_CounterOut_CAN_FD_273T_D 3U /* DEST CanIf-LO-IF */


/* -------------------- Routing path: 6 Pdu_SecuredIn_281R */
#if (defined PduRConf_PduRSrcPdu_Pdu_SecuredIn_281R_S)
#error PduRConf_PduRSrcPdu_Pdu_SecuredIn_281R_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Pdu_SecuredIn_281R_S 2U /* SRC CanIf-LO-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Pdu_SecuredIn_281R_S)
#error PduR_Pdu_SecuredIn_281R_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Pdu_SecuredIn_281R_S 2U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* PduRConf_PduRDestPdu_Pdu_SecuredIn_281R_D not defined since it is not enabled.*/


/* -------------------- Routing path: 7 Pdu_SecuredPayloadIn_281R */
#if (defined PduRConf_PduRSrcPdu_Pdu_SecuredPayloadIn_281R_S)
#error PduRConf_PduRSrcPdu_Pdu_SecuredPayloadIn_281R_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Pdu_SecuredPayloadIn_281R_S 0U /* SRC SecOC-LO-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Pdu_SecuredPayloadIn_281R_S)
#error PduR_Pdu_SecuredPayloadIn_281R_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Pdu_SecuredPayloadIn_281R_S 0U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* PduRConf_PduRDestPdu_Pdu_SecuredPayloadIn_281R_D not defined since it is not enabled.*/


/* -------------------- Routing path: 8 Pdu_SecuredOut_285T */
#if (defined PduRConf_PduRSrcPdu_Pdu_SecuredOut_285T_S)
#error PduRConf_PduRSrcPdu_Pdu_SecuredOut_285T_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Pdu_SecuredOut_285T_S 0U /* SRC SecOC-UP-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Pdu_SecuredOut_285T_S)
#error PduR_Pdu_SecuredOut_285T_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Pdu_SecuredOut_285T_S 0U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Pdu_SecuredOut_285T_D)
#error PduRConf_PduRDestPdu_Pdu_SecuredOut_285T_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Pdu_SecuredOut_285T_D 4U /* DEST CanIf-LO-IF */


/* -------------------- Routing path: 9 Pdu_SecuredPayloadOut_285T */
#if (defined PduRConf_PduRSrcPdu_Pdu_SecuredPayloadOut_285T_S)
#error PduRConf_PduRSrcPdu_Pdu_SecuredPayloadOut_285T_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Pdu_SecuredPayloadOut_285T_S 2U /* SRC Com-UP-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Pdu_SecuredPayloadOut_285T_S)
#error PduR_Pdu_SecuredPayloadOut_285T_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Pdu_SecuredPayloadOut_285T_S 2U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Pdu_SecuredPayloadOut_285T_D)
#error PduRConf_PduRDestPdu_Pdu_SecuredPayloadOut_285T_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Pdu_SecuredPayloadOut_285T_D 0U /* DEST SecOC-LO-IF */


/* -------------------- Routing path: 10 ISIP_E2EProt_DataIn_280R */
#if (defined PduRConf_PduRSrcPdu_ISIP_E2EProt_DataIn_280R_S)
#error PduRConf_PduRSrcPdu_ISIP_E2EProt_DataIn_280R_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_ISIP_E2EProt_DataIn_280R_S 3U /* SRC CanIf-LO-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_ISIP_E2EProt_DataIn_280R_S)
#error PduR_ISIP_E2EProt_DataIn_280R_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_ISIP_E2EProt_DataIn_280R_S 3U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* PduRConf_PduRDestPdu_ISIP_E2EProt_DataIn_280R_D not defined since it is not enabled.*/


/* -------------------- Routing path: 11 ISIP_E2EProt_DataOut_284T */
#if (defined PduRConf_PduRSrcPdu_ISIP_E2EProt_DataOut_284T_S)
#error PduRConf_PduRSrcPdu_ISIP_E2EProt_DataOut_284T_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_ISIP_E2EProt_DataOut_284T_S 3U /* SRC Com-UP-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_ISIP_E2EProt_DataOut_284T_S)
#error PduR_ISIP_E2EProt_DataOut_284T_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_ISIP_E2EProt_DataOut_284T_S 3U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_ISIP_E2EProt_DataOut_284T_D)
#error PduRConf_PduRDestPdu_ISIP_E2EProt_DataOut_284T_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_ISIP_E2EProt_DataOut_284T_D 5U /* DEST CanIf-LO-IF */


/* -------------------- Routing path: 12 Dcm_Pdu_UUDT_CAN_Tx_OBD_2024T */
#if (defined PduRConf_PduRSrcPdu_Dcm_Pdu_UUDT_CAN_Tx_OBD_2024T_S)
#error PduRConf_PduRSrcPdu_Dcm_Pdu_UUDT_CAN_Tx_OBD_2024T_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Dcm_Pdu_UUDT_CAN_Tx_OBD_2024T_S 2U /* SRC Dcm-UP-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Dcm_Pdu_UUDT_CAN_Tx_OBD_2024T_S)
#error PduR_Dcm_Pdu_UUDT_CAN_Tx_OBD_2024T_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Dcm_Pdu_UUDT_CAN_Tx_OBD_2024T_S 2U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Dcm_Pdu_UUDT_CAN_Tx_OBD_2024T_D)
#error PduRConf_PduRDestPdu_Dcm_Pdu_UUDT_CAN_Tx_OBD_2024T_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Dcm_Pdu_UUDT_CAN_Tx_OBD_2024T_D 6U /* DEST CanIf-LO-IF */


/* -------------------- Routing path: 13 Nm_Pdu_CanIn_NmComUserData_592R */
#if (defined PduRConf_PduRSrcPdu_Nm_Pdu_CanIn_NmComUserData_592R_S)
#error PduRConf_PduRSrcPdu_Nm_Pdu_CanIn_NmComUserData_592R_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Nm_Pdu_CanIn_NmComUserData_592R_S 0U /* SRC CanNm-LO-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Nm_Pdu_CanIn_NmComUserData_592R_S)
#error PduR_Nm_Pdu_CanIn_NmComUserData_592R_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Nm_Pdu_CanIn_NmComUserData_592R_S 0U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* PduRConf_PduRDestPdu_Nm_Pdu_CanIn_NmComUserData_592R_D not defined since it is not enabled.*/


/* -------------------- Routing path: 14 Nm_Pdu_CanOut_NmComUserData_593T */
#if (defined PduRConf_PduRSrcPdu_Nm_Pdu_CanOut_NmComUserData_593T_S)
#error PduRConf_PduRSrcPdu_Nm_Pdu_CanOut_NmComUserData_593T_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Nm_Pdu_CanOut_NmComUserData_593T_S 4U /* SRC Com-UP-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Nm_Pdu_CanOut_NmComUserData_593T_S)
#error PduR_Nm_Pdu_CanOut_NmComUserData_593T_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Nm_Pdu_CanOut_NmComUserData_593T_S 4U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Nm_Pdu_CanOut_NmComUserData_593T_D)
#error PduRConf_PduRDestPdu_Nm_Pdu_CanOut_NmComUserData_593T_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Nm_Pdu_CanOut_NmComUserData_593T_D 0U /* DEST CanNm-LO-IF */


/* -------------------- Routing path: 15 Dcm_Pdu_USDT_CAN_FD_Rx_Func */
#if (defined PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_FD_Rx_Func_S)
#error PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_FD_Rx_Func_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_FD_Rx_Func_S 0U /* SRC CanTp-LO-TP */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Dcm_Pdu_USDT_CAN_FD_Rx_Func_S)
#error PduR_Dcm_Pdu_USDT_CAN_FD_Rx_Func_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Dcm_Pdu_USDT_CAN_FD_Rx_Func_S 0U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_FD_Rx_Func_D)
#error PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_FD_Rx_Func_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_FD_Rx_Func_D 0U /* DEST Dcm-UP-TP */


/* -------------------- Routing path: 16 Dcm_Pdu_USDT_CAN_FD_Rx_Phys */
#if (defined PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_FD_Rx_Phys_S)
#error PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_FD_Rx_Phys_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_FD_Rx_Phys_S 1U /* SRC CanTp-LO-TP */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Dcm_Pdu_USDT_CAN_FD_Rx_Phys_S)
#error PduR_Dcm_Pdu_USDT_CAN_FD_Rx_Phys_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Dcm_Pdu_USDT_CAN_FD_Rx_Phys_S 1U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_FD_Rx_Phys_D)
#error PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_FD_Rx_Phys_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_FD_Rx_Phys_D 1U /* DEST Dcm-UP-TP */


/* -------------------- Routing path: 17 Dcm_Pdu_USDT_CAN_Rx_Func */
#if (defined PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Rx_Func_S)
#error PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Rx_Func_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Rx_Func_S 2U /* SRC CanTp-LO-TP */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Dcm_Pdu_USDT_CAN_Rx_Func_S)
#error PduR_Dcm_Pdu_USDT_CAN_Rx_Func_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Dcm_Pdu_USDT_CAN_Rx_Func_S 2U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Rx_Func_D)
#error PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Rx_Func_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Rx_Func_D 2U /* DEST Dcm-UP-TP */


/* -------------------- Routing path: 18 Dcm_Pdu_USDT_CAN_Rx_Func_OBD */
#if (defined PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Rx_Func_OBD_S)
#error PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Rx_Func_OBD_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Rx_Func_OBD_S 3U /* SRC CanTp-LO-TP */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Dcm_Pdu_USDT_CAN_Rx_Func_OBD_S)
#error PduR_Dcm_Pdu_USDT_CAN_Rx_Func_OBD_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Dcm_Pdu_USDT_CAN_Rx_Func_OBD_S 3U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Rx_Func_OBD_D)
#error PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Rx_Func_OBD_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Rx_Func_OBD_D 3U /* DEST Dcm-UP-TP */


/* -------------------- Routing path: 19 Dcm_Pdu_USDT_CAN_Rx_Phys */
#if (defined PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Rx_Phys_S)
#error PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Rx_Phys_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Rx_Phys_S 4U /* SRC CanTp-LO-TP */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Dcm_Pdu_USDT_CAN_Rx_Phys_S)
#error PduR_Dcm_Pdu_USDT_CAN_Rx_Phys_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Dcm_Pdu_USDT_CAN_Rx_Phys_S 4U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Rx_Phys_D)
#error PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Rx_Phys_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Rx_Phys_D 4U /* DEST Dcm-UP-TP */


/* -------------------- Routing path: 20 Dcm_Pdu_USDT_CAN_Rx_Phys_OBD */
#if (defined PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Rx_Phys_OBD_S)
#error PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Rx_Phys_OBD_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Rx_Phys_OBD_S 5U /* SRC CanTp-LO-TP */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Dcm_Pdu_USDT_CAN_Rx_Phys_OBD_S)
#error PduR_Dcm_Pdu_USDT_CAN_Rx_Phys_OBD_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Dcm_Pdu_USDT_CAN_Rx_Phys_OBD_S 5U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Rx_Phys_OBD_D)
#error PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Rx_Phys_OBD_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Rx_Phys_OBD_D 5U /* DEST Dcm-UP-TP */


/* -------------------- Routing path: 21 Dcm_Pdu_USDT_CAN_FD_Tx */
#if (defined PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_FD_Tx_S)
#error PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_FD_Tx_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_FD_Tx_S 0U /* SRC Dcm-UP-TP */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Dcm_Pdu_USDT_CAN_FD_Tx_S)
#error PduR_Dcm_Pdu_USDT_CAN_FD_Tx_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Dcm_Pdu_USDT_CAN_FD_Tx_S 0U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_FD_Tx_D)
#error PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_FD_Tx_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_FD_Tx_D 0U /* DEST CanTp-LO-TP */


/* -------------------- Routing path: 22 Dcm_Pdu_USDT_CAN_Tx */
#if (defined PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Tx_S)
#error PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Tx_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Tx_S 1U /* SRC Dcm-UP-TP */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Dcm_Pdu_USDT_CAN_Tx_S)
#error PduR_Dcm_Pdu_USDT_CAN_Tx_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Dcm_Pdu_USDT_CAN_Tx_S 1U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Tx_D)
#error PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Tx_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Tx_D 1U /* DEST CanTp-LO-TP */


/* -------------------- Routing path: 23 Dcm_Pdu_USDT_CAN_Tx_OBD */
#if (defined PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Tx_OBD_S)
#error PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Tx_OBD_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_Dcm_Pdu_USDT_CAN_Tx_OBD_S 2U /* SRC Dcm-UP-TP */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_Dcm_Pdu_USDT_CAN_Tx_OBD_S)
#error PduR_Dcm_Pdu_USDT_CAN_Tx_OBD_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_Dcm_Pdu_USDT_CAN_Tx_OBD_S 2U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Tx_OBD_D)
#error PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Tx_OBD_D is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRDestPdu_Dcm_Pdu_USDT_CAN_Tx_OBD_D 2U /* DEST CanTp-LO-TP */


/* -------------------- Routing path: 24 CanNmPnEiraRxNSdu */
#if (defined PduRConf_PduRSrcPdu_CanNmPnEiraRxNSdu_S)
#error PduRConf_PduRSrcPdu_CanNmPnEiraRxNSdu_S is already defined
#endif
/** \brief Export symbolic name value */
#define PduRConf_PduRSrcPdu_CanNmPnEiraRxNSdu_S 1U /* SRC CanNm-LO-IF */

#if (defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined PduR_CanNmPnEiraRxNSdu_S)
#error PduR_CanNmPnEiraRxNSdu_S is already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only (AUTOSAR 4.0 rev2 <= AUTOSAR version) */
#define PduR_CanNmPnEiraRxNSdu_S 1U
#endif /* defined PDUR_PROVIDE_LEGACY_SYMBOLIC_NAMES */

/* PduRConf_PduRDestPdu_CanNmPnEiraRxNSdu_D not defined since it is not enabled.*/



/* Define vendor specific destination PDU IDs of adjacent modules */
#if (defined PDUR_PROVIDE_ADJACENT_MODULE_VENDOR_SYMBOLIC_NAMES)

/* -------------------- Routing path: 0 Pdu_CounterIn_256R */
/* PDURSA_Pdu_CounterIn_256R   SRC CanIf-LO-IF  Not defined since the configuration does not supply this ID */
#define PDURDA_Pdu_CounterIn_256R 0U /* DEST Com-UP-IF */

/* -------------------- Routing path: 1 Pdu_CounterOut_272T */
#define PDURSA_Pdu_CounterOut_272T 0U /* SRC Com-UP-IF */
#define PDURDA_Pdu_CounterOut_272T 0U /* DEST CanIf-LO-IF DIRECT */

/* -------------------- Routing path: 2 Dcm_Pdu_UUDT_CAN_Tx_417133035T */
#define PDURSA_Dcm_Pdu_UUDT_CAN_Tx_417133035T 4U /* SRC Dcm-UP-IF */
#define PDURDA_Dcm_Pdu_UUDT_CAN_Tx_417133035T 3U /* DEST CanIf-LO-IF DIRECT */

/* -------------------- Routing path: 3 Dcm_Pdu_UUDT_CAN_FD_Tx_417133291T */
#define PDURSA_Dcm_Pdu_UUDT_CAN_FD_Tx_417133291T 5U /* SRC Dcm-UP-IF */
#define PDURDA_Dcm_Pdu_UUDT_CAN_FD_Tx_417133291T 6U /* DEST CanIf-LO-IF DIRECT */

/* -------------------- Routing path: 4 Pdu_CounterIn_CAN_FD_257R */
/* PDURSA_Pdu_CounterIn_CAN_FD_257R   SRC CanIf-LO-IF  Not defined since the configuration does not supply this ID */
#define PDURDA_Pdu_CounterIn_CAN_FD_257R 1U /* DEST Com-UP-IF */

/* -------------------- Routing path: 5 Pdu_CounterOut_CAN_FD_273T */
#define PDURSA_Pdu_CounterOut_CAN_FD_273T 1U /* SRC Com-UP-IF */
#define PDURDA_Pdu_CounterOut_CAN_FD_273T 7U /* DEST CanIf-LO-IF DIRECT */

/* -------------------- Routing path: 6 Pdu_SecuredIn_281R */
/* PDURSA_Pdu_SecuredIn_281R   SRC CanIf-LO-IF  Not defined since the configuration does not supply this ID */
#define PDURDA_Pdu_SecuredIn_281R 0U /* DEST SecOC-UP-IF */

/* -------------------- Routing path: 7 Pdu_SecuredPayloadIn_281R */
/* PDURSA_Pdu_SecuredPayloadIn_281R   SRC SecOC-LO-IF  Not defined since the configuration does not supply this ID */
#define PDURDA_Pdu_SecuredPayloadIn_281R 3U /* DEST Com-UP-IF */

/* -------------------- Routing path: 8 Pdu_SecuredOut_285T */
#define PDURSA_Pdu_SecuredOut_285T 0U /* SRC SecOC-UP-IF */
#define PDURDA_Pdu_SecuredOut_285T 9U /* DEST CanIf-LO-IF DIRECT */

/* -------------------- Routing path: 9 Pdu_SecuredPayloadOut_285T */
#define PDURSA_Pdu_SecuredPayloadOut_285T 3U /* SRC Com-UP-IF */
#define PDURDA_Pdu_SecuredPayloadOut_285T 0U /* DEST SecOC-LO-IF DIRECT */

/* -------------------- Routing path: 10 ISIP_E2EProt_DataIn_280R */
/* PDURSA_ISIP_E2EProt_DataIn_280R   SRC CanIf-LO-IF  Not defined since the configuration does not supply this ID */
#define PDURDA_ISIP_E2EProt_DataIn_280R 4U /* DEST Com-UP-IF */

/* -------------------- Routing path: 11 ISIP_E2EProt_DataOut_284T */
#define PDURSA_ISIP_E2EProt_DataOut_284T 2U /* SRC Com-UP-IF */
#define PDURDA_ISIP_E2EProt_DataOut_284T 10U /* DEST CanIf-LO-IF DIRECT */

/* -------------------- Routing path: 12 Dcm_Pdu_UUDT_CAN_Tx_OBD_2024T */
#define PDURSA_Dcm_Pdu_UUDT_CAN_Tx_OBD_2024T 3U /* SRC Dcm-UP-IF */
#define PDURDA_Dcm_Pdu_UUDT_CAN_Tx_OBD_2024T 13U /* DEST CanIf-LO-IF DIRECT */

/* -------------------- Routing path: 13 Nm_Pdu_CanIn_NmComUserData_592R */
/* PDURSA_Nm_Pdu_CanIn_NmComUserData_592R   SRC CanNm-LO-IF  Not defined since the configuration does not supply this ID */
#define PDURDA_Nm_Pdu_CanIn_NmComUserData_592R 2U /* DEST Com-UP-IF */

/* -------------------- Routing path: 14 Nm_Pdu_CanOut_NmComUserData_593T */
#define PDURSA_Nm_Pdu_CanOut_NmComUserData_593T 4U /* SRC Com-UP-IF */
#define PDURDA_Nm_Pdu_CanOut_NmComUserData_593T 0U /* DEST CanNm-LO-IF */

/* -------------------- Routing path: 15 Dcm_Pdu_USDT_CAN_FD_Rx_Func */
#define PDURSA_Dcm_Pdu_USDT_CAN_FD_Rx_Func 0U /* SRC CanTp-LO-TP */
#define PDURDA_Dcm_Pdu_USDT_CAN_FD_Rx_Func 2U /* DEST Dcm-UP-TP */

/* -------------------- Routing path: 16 Dcm_Pdu_USDT_CAN_FD_Rx_Phys */
#define PDURSA_Dcm_Pdu_USDT_CAN_FD_Rx_Phys 1U /* SRC CanTp-LO-TP */
#define PDURDA_Dcm_Pdu_USDT_CAN_FD_Rx_Phys 3U /* DEST Dcm-UP-TP */

/* -------------------- Routing path: 17 Dcm_Pdu_USDT_CAN_Rx_Func */
#define PDURSA_Dcm_Pdu_USDT_CAN_Rx_Func 2U /* SRC CanTp-LO-TP */
#define PDURDA_Dcm_Pdu_USDT_CAN_Rx_Func 4U /* DEST Dcm-UP-TP */

/* -------------------- Routing path: 18 Dcm_Pdu_USDT_CAN_Rx_Func_OBD */
#define PDURSA_Dcm_Pdu_USDT_CAN_Rx_Func_OBD 3U /* SRC CanTp-LO-TP */
#define PDURDA_Dcm_Pdu_USDT_CAN_Rx_Func_OBD 0U /* DEST Dcm-UP-TP */

/* -------------------- Routing path: 19 Dcm_Pdu_USDT_CAN_Rx_Phys */
#define PDURSA_Dcm_Pdu_USDT_CAN_Rx_Phys 4U /* SRC CanTp-LO-TP */
#define PDURDA_Dcm_Pdu_USDT_CAN_Rx_Phys 5U /* DEST Dcm-UP-TP */

/* -------------------- Routing path: 20 Dcm_Pdu_USDT_CAN_Rx_Phys_OBD */
#define PDURSA_Dcm_Pdu_USDT_CAN_Rx_Phys_OBD 5U /* SRC CanTp-LO-TP */
#define PDURDA_Dcm_Pdu_USDT_CAN_Rx_Phys_OBD 1U /* DEST Dcm-UP-TP */

/* -------------------- Routing path: 21 Dcm_Pdu_USDT_CAN_FD_Tx */
#define PDURSA_Dcm_Pdu_USDT_CAN_FD_Tx 1U /* SRC Dcm-UP-TP */
#define PDURDA_Dcm_Pdu_USDT_CAN_FD_Tx 0U /* DEST CanTp-LO-TP */

/* -------------------- Routing path: 22 Dcm_Pdu_USDT_CAN_Tx */
#define PDURSA_Dcm_Pdu_USDT_CAN_Tx 2U /* SRC Dcm-UP-TP */
#define PDURDA_Dcm_Pdu_USDT_CAN_Tx 1U /* DEST CanTp-LO-TP */

/* -------------------- Routing path: 23 Dcm_Pdu_USDT_CAN_Tx_OBD */
#define PDURSA_Dcm_Pdu_USDT_CAN_Tx_OBD 0U /* SRC Dcm-UP-TP */
#define PDURDA_Dcm_Pdu_USDT_CAN_Tx_OBD 2U /* DEST CanTp-LO-TP */

/* -------------------- Routing path: 24 CanNmPnEiraRxNSdu */
/* PDURSA_CanNmPnEiraRxNSdu   SRC CanNm-LO-IF  Not defined since the configuration does not supply this ID */
#define PDURDA_CanNmPnEiraRxNSdu 5U /* DEST Com-UP-IF */

#endif /* defined PDUR_PROVIDE_ADJACENT_MODULE_VENDOR_SYMBOLIC_NAMES */

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* ifndef PDUR_SYMBOLIC_NAMES_PBCFG_H  */
/*==================[end of file]===========================================*/
