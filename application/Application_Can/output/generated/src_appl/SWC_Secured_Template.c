/**
 * \file
 *
 * \brief AUTOSAR Rte
 *
 * This file contains the implementation of the AUTOSAR
 * module Rte.
 *
 * \version 6.8.4
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*
 * This file contains an Rte component template / example code
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Tue Aug 29 10:19:27 CST 2023. !!!IGNORE-LINE!!!
 */

/*
 * \addtogroup Rte Runtime Environment
 * @{
 */

/* ==================[Includes]=============================================== */
#include <Rte_SWC_Secured.h>

/* ==================[Definition of functions with external linkage]========== */
/* ------------------------[runnable entity skeletons]------------------------ */
#define SWC_Secured_START_SEC_CODE
#include <SWC_Secured_MemMap.h>
FUNC(void, RTE_CODE) SWC_Secured_Data_Received (void)
{
  uint8 arg_Read_data;
  Std_ReturnType ret_Read;
  uint8 arg_IWrite_data = 0U;
  P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) ret_IWriteRef;

  ret_Read = Rte_Read_R_SecuredData_CounterValue(&arg_Read_data);
  (void)ret_Read;
  Rte_IWrite_UpdateSecureData_P_SecuredData_CounterValue(arg_IWrite_data);
  ret_IWriteRef = Rte_IWriteRef_UpdateSecureData_P_SecuredData_CounterValue();
  (void)ret_IWriteRef;

} /* FUNC(void, RTE_CODE) SWC_Secured_Data_Received (void) */

#define SWC_Secured_STOP_SEC_CODE
#include <SWC_Secured_MemMap.h>

/*
  ------------------------[runnable-independent API]-------------------------

  Copy and paste the following API to those runnable entity functions where
  you want to use them.

  ------------------------[port handle API]----------------------------------
  ------------------------[per instance memory API]--------------------------
 */

/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
