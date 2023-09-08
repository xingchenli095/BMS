/**
 * \file
 *
 * \brief AUTOSAR ComXf
 *
 * This file contains the implementation of the AUTOSAR
 * module ComXf.
 *
 * \version 1.0.40
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/* MISRA-C:2012 Deviation List
 *
 * MISRAC2012-1) Deviated Rule: 11.3 (required)
 * A cast shall not be performed between a pointer to
 * object type and a pointer to a different object type.
 *
 * Reason:
 * In order to keep up the IEEE754 memory encoding the
 * used E2E float32 or float64 un-/packing macros are
 * mapping onto the E2E uint32 or uint64 un-/packing
 * macros. Those macros implement a pointer cast to uint32
 * or uint64 and a dereferenced pointer of the float data.
 * Otherwise the float would be casted explicit to uint32
 * or uint64 which leads to truncation of the float value.
 *
 * MISRAC2012-2) Deviated Rule: 10.8 (required)
 * The value of a composite expression shall not be cast to
 * a different essential type category.
 *
 * Reason:
 * The E2E un-/packing macros for signed data types implementing
 * an explicit unsigned cast of the same type. This is done
 * because the E2E macros using a right shift for the serialization.
 * A right shift performed on objects with a signed data type leads to
 * implementation specific behavior.
 *
 */

/*==================[includes]==============================================*/

#include <ComXf_S_PartitionApi.h>        /* Generated module API */

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

#define COMXF_START_SEC_CODE
#include <ComXf_MemMap.h>

/* Deviation MISRAC2012-1, MISRAC2012-2 <START> */

/*------------- C O M   b a s e d   s e r i a l i z a t i o n --------------*/
COMXF_S_DEF_FUNC_XF_START(ComXf_9D7FDE5D5F414438C76F1B9E84FCBFC8, E2EProt_Data, 4U, 0U)
COMXF_S_PACKSIG(dataElement->SafetyE2E_Data, 24U, 8U, E2E_LE_U8, 1U);
COMXF_S_PACKSIG(dataElement->SafetyE2E_Data_CRC, 0U, 16U, E2E_LE_U16, 2U);
COMXF_S_PACKSIG(dataElement->SafetyE2E_Data_SQC_Counter, 16U, 8U, E2E_LE_U8, 1U);
COMXF_S_DEF_FUNC_XF_STOP


/*----------- C O M   b a s e d   d e s e r i a l i z a t i o n ------------*/

COMXF_S_DEF_FUNC_INVXF_START(ComXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A, E2EProt_Data, 4U)
COMXF_S_UNPACKSIG(dataElement->SafetyE2E_Data, 24U, 8U, E2E_LE_U8, 1U);
COMXF_S_UNPACKSIG(dataElement->SafetyE2E_Data_CRC, 0U, 16U, E2E_LE_U16, 2U);
COMXF_S_UNPACKSIG(dataElement->SafetyE2E_Data_SQC_Counter, 16U, 8U, E2E_LE_U8, 1U);
COMXF_S_DEF_FUNC_INVXF_STOP


/* Deviation MISRAC2012-1, MISRAC2012-2 <STOP> */

#define COMXF_STOP_SEC_CODE
#include <ComXf_MemMap.h>

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
