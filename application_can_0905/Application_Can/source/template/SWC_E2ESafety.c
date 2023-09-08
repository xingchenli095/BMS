/**
 * \file
 *
 * \brief AUTOSAR Application_Can
 *
 * This file contains the implementation of the AUTOSAR
 * module Application_Can.
 *
 * \version 1.0.10
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */



/* ==================[Includes]=============================================== */
#include <Rte_SWC_E2ESafety.h>

/* ==================[Definition of functions with external linkage]========== */
/* ------------------------[runnable entity skeletons]------------------------ */

uint8 E2E_Data_Safety = 0U;
 
FUNC(void, RTE_CODE) SWC_E2EProtSafe_Data_Received (void)
{
  E2EProt_Data arg_Receive_data;
  E2EProt_Data arg_IWrite_data = 
  {
    E2E_Data_Safety,
    0U,
    0U
  };
  if( Rte_Receive_R_E2E_SafeData_E2EProt_Data(&arg_Receive_data) == E_OK )
  {
	E2E_Data_Safety = arg_Receive_data.SafetyE2E_Data;
  }
  Rte_IWrite_UpdateE2EProtSafeData_P_E2E_SafeData_E2EProt_Data(&arg_IWrite_data);
  
} /* FUNC(void, RTE_CODE) SWC_E2EProtSafe_Data_Received (void) */
 
 
FUNC(void, RTE_CODE) SWC_E2EProtSafe_Data_Cyclic (void)
{
  E2EProt_Data arg_Send_data = 
  {
    E2E_Data_Safety += 1U,
    0U,
    0U
  };
  
  Rte_Send_P_E2E_SafeData_E2EProt_Data(&arg_Send_data);

} /* FUNC(void, RTE_CODE) SWC_E2EProtSafe_Data_Cyclic (void) */

/*
  ------------------------[runnable-independent API]-------------------------

  Copy and paste the following API to those runnable entity functions where
  you want to use them.

  ------------------------[port handle API]----------------------------------
  ------------------------[per instance memory API]--------------------------
 */

/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
