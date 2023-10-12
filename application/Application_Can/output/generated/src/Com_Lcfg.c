
/**
 * \file
 *
 * \brief AUTOSAR Com
 *
 * This file contains the implementation of the AUTOSAR
 * module Com.
 *
 * \version 6.3.53
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/* MISRA-C:2012 Deviation List
 *
 *
 * MISRAC2012-1) Deviated Rule: 11.5 (advisory)
 * A conversion should not be performed from pointer to
 * void into pointer to object.
 *
 * Reason:
 * The memory routines are optimized for dealing with aligned
 * memory sections.
 *
 *
 * MISRAC2012-2) Deviated Rule: 8.5 (Required)
 * An external object or function shall be declared once in one and only one file.
 *
 * Reason:
 * The callout and callback functions are declared within the file since
 * the header files which declare the functions are in general not known.
 *
 */

/*==================[inclusions]============================================*/

#include <Com_Lcfg.h>
#include <Com_Lcfg_Static.h>
#include <TSAutosar.h>

/* start data section declaration */
#define COM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <Com_MemMap.h>

/**
 * Internal memory statically allocated upon link-time. Size depends on
 * post build configuration. Memory requirements of post build configuration
 * must be smaller than COM_RAM_SIZE_MAX in order to avoid buffer
 * overflows. Memory is aligned to the most stringent alignment requirement
 * of any simple data type available on the respective platform, e.g. uint32.
 */
STATIC TS_DefMaxAlignedByteArray(Com_DataMem, COM, VAR_CLEARED, COM_DATA_MEM_SIZE);

/* stop data section declaration */
#define COM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <Com_MemMap.h>



/* start data section declaration */
#define COM_START_SEC_CONST_UNSPECIFIED
#include <Com_MemMap.h>

/**
 * Pointer to statically allocated RAM.
 */
/* Deviation MISRAC2012-1 <+3> */
CONSTP2VAR(uint8, COM_CONST, COM_VAR_CLEARED) Com_gDataMemPtr =
  (P2VAR(uint8, COM_CONST, COM_VAR_CLEARED))
  ((P2VAR(void, COM_CONST, COM_VAR_CLEARED)) Com_DataMem);

/* stop data section declaration */
#define COM_STOP_SEC_CONST_UNSPECIFIED
#include <Com_MemMap.h>



#define COM_START_SEC_CALLOUT_CODE
#include <Com_MemMap.h>

/* receive callouts */

/* send callouts */

/* TX acknowledge callbacks */
/* Deviation MISRAC2012-2 <+1> */
extern FUNC(void, COM_APPL_CODE) Rte_COMCbkTAck_SGPBSoCAbsolute_323T(void);

/* TX timeout callbacks */
/* extern FUNC(void, COM_APPL_CODE) Com_EB_TxDMDummyCbk(void); (extern declaration already generated)*/
/* Deviation MISRAC2012-2 <+1> */
extern FUNC(void, COM_APPL_CODE) Rte_COMCbkTxTOut_SGPBSoCAbsolute_323T(void);

/* TX error callbacks */
/* extern FUNC(void, COM_APPL_CODE) Com_EB_TxDMDummyCbk(void); (extern declaration already generated)*/
/* Deviation MISRAC2012-2 <+1> */
extern FUNC(void, COM_APPL_CODE) Rte_COMCbkTErr_SGPBSoCAbsolute_323T(void);

/* RX timeout callbacks */

/* RX acknowledge callbacks */

#define COM_STOP_SEC_CALLOUT_CODE
#include <Com_MemMap.h>

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include <Com_MemMap.h>


#if (COM_CALL_OUT_FUNC_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE)
#if (COM_TX_CALL_OUT_FUNC_PTR_ARRAY_SIZE > 0)
/* send callouts */
CONSTP2VAR(Com_TxCalloutType, AUTOMATIC, COM_APPL_CODE) Com_TxCallouts[COM_TX_CALL_OUT_FUNC_PTR_ARRAY_SIZE] =
{
};
#else /* (COM_CALL_OUT_FUNC_PTR_ARRAY_SIZE > 0) */
CONSTP2VAR(Com_TxCalloutType, AUTOMATIC, COM_APPL_CODE) Com_TxCallouts[1] =
{
    NULL_PTR
};
#endif /* (COM_CALL_OUT_FUNC_PTR_ARRAY_SIZE > 0) */


#if (COM_RX_CALL_OUT_FUNC_PTR_ARRAY_SIZE > 0)
/* receive callouts */
CONSTP2VAR(Com_RxCalloutType, AUTOMATIC, COM_APPL_CODE) Com_RxCallouts[COM_RX_CALL_OUT_FUNC_PTR_ARRAY_SIZE] =
{
};
#else /* (COM_RX_CALL_OUT_FUNC_PTR_ARRAY_SIZE > 0) */
CONSTP2VAR(Com_RxCalloutType, AUTOMATIC, COM_APPL_CODE) Com_RxCallouts[1] =
{
    NULL_PTR
};
#endif /* (COM_RX_CALL_OUT_FUNC_PTR_ARRAY_SIZE > 0) */
#endif /* (COM_CALL_OUT_FUNC_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE) */


#if (COM_CBK_TX_ACK_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE)
#if (COM_CBK_TX_ACK_PTR_ARRAY_SIZE > 0)
CONSTP2VAR(Com_CbkTxAck_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkTxAck_Array[COM_CBK_TX_ACK_PTR_ARRAY_SIZE] =
{
     &Rte_COMCbkTAck_SGPBSoCAbsolute_323T
};
#else /* (COM_CBK_TX_ACK_PTR_ARRAY_SIZE > 0) */
CONSTP2VAR(Com_CbkTxAck_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkTxAck_Array[1] =
{
    NULL_PTR
};
#endif /* (COM_CBK_TX_ACK_PTR_ARRAY_SIZE > 0) */
#endif /* (COM_CBK_TX_ACK_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE) */


#if (COM_CBK_TX_T_OUT_ARRAY_SIZE_MAX != COM_INDEX_NONE)
#if (COM_CBK_TX_T_OUT_ARRAY_SIZE > 0)
CONSTP2VAR(Com_CbkTxTOut_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkTxTOut_Array[COM_CBK_TX_T_OUT_ARRAY_SIZE] =
{
     &Com_EB_TxDMDummyCbk
    ,&Rte_COMCbkTxTOut_SGPBSoCAbsolute_323T
};
#else /* (COM_CBK_TX_T_OUT_ARRAY_SIZE > 0) */
CONSTP2VAR(Com_CbkTxTOut_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkTxTOut_Array[1] =
{
    NULL_PTR
};
#endif /* (COM_CBK_TX_T_OUT_ARRAY_SIZE > 0) */
#endif /* (COM_CBK_TX_T_OUT_ARRAY_SIZE_MAX != COM_INDEX_NONE) */


#if (COM_CBK_TX_ERR_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE)
#if (COM_CBK_TX_ERR_PTR_ARRAY_SIZE > 0)
CONSTP2VAR(Com_CbkTxErr_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkTxErr_Array[COM_CBK_TX_ERR_PTR_ARRAY_SIZE] =
{
     &Com_EB_TxDMDummyCbk
    ,&Rte_COMCbkTErr_SGPBSoCAbsolute_323T
};
#else /* (COM_CBK_TX_ERR_PTR_ARRAY_SIZE > 0) */
CONSTP2VAR(Com_CbkTxErr_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkTxErr_Array[1] =
{
    NULL_PTR
};
#endif /* (COM_CBK_TX_ERR_PTR_ARRAY_SIZE > 0) */
#endif /* (COM_CBK_TX_ERR_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE) */


#if (COM_CBK_RX_ACK_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE)
#if (COM_CBK_RX_ACK_PTR_ARRAY_SIZE > 0)
CONSTP2VAR(Com_CbkRxAck_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkRxAck_Array[COM_CBK_RX_ACK_PTR_ARRAY_SIZE] =
{
};
#else /* (COM_CBK_RX_ACK_PTR_ARRAY_SIZE > 0)) */
CONSTP2VAR(Com_CbkRxAck_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkRxAck_Array[1] =
{
    NULL_PTR
};
#endif /* (COM_CBK_RX_ACK_PTR_ARRAY_SIZE > 0)) */
#endif /* (COM_CBK_RX_ACK_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE) */


#if (COM_CBK_RX_T_OUT_ARRAY_SIZE_MAX != COM_INDEX_NONE)
#if (COM_CBK_RX_T_OUT_ARRAY_SIZE > 0)
CONSTP2VAR(Com_CbkRxTOut_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkRxTOut_Array[COM_CBK_RX_T_OUT_ARRAY_SIZE] =
{
};
#else /* (COM_CBK_RX_T_OUT_ARRAY_SIZE > 0) */
CONSTP2VAR(Com_CbkRxTOut_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkRxTOut_Array[1] =
{
    NULL_PTR
};
#endif /* (COM_CBK_RX_T_OUT_ARRAY_SIZE > 0) */
#endif /* (COM_CBK_RX_T_OUT_ARRAY_SIZE_MAX != COM_INDEX_NONE) */


#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include <Com_MemMap.h>


/* start data section declaration */
#define COM_START_SEC_CONST_32
#include <Com_MemMap.h>

/**
 * Variable holding link-time configuration
 */
CONST(uint32, COM_CONST) Com_LcfgSignature = COM_LCFG_SIGNATURE;

/* stop data section declaration */
#define COM_STOP_SEC_CONST_32
#include <Com_MemMap.h>

/** @} doxygen end group definition */
/*==================[end of file]===========================================*/
