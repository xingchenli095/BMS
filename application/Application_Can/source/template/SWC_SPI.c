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
 * on Tue Sep 19 18:38:20 CST 2023. !!!IGNORE-LINE!!!
 */

/*
 * \addtogroup Rte Runtime Environment
 * @{
 */

/* ==================[Includes]=============================================== */
#include <Rte_SWC_SPI.h>
#include <Com.h>
#include <Com_SymbolicNames_PBcfg.h>

int counter = 2u;
uint8 NvmFlag = 0;
uint8 NvmCount = 0;
  static uint16 ReadBlock[1] = {0};
  static uint16 WriteBlock[1];

//uint16 signalId = ComConf_ComGroupSignal_PB2FETStatus_172T;
//static   PB1FETStatus_value = 0U;  
/* ==================[Definition of functions with external linkage]========== */
/* ------------------------[runnable entity skeletons]------------------------ */
#define SWC_SPI_START_SEC_CODE
#include <SWC_SPI_MemMap.h>
FUNC(void, RTE_CODE) NvM_Cyclic (void)
{

  uint16 arg_Read_data;
  Std_ReturnType ret_Read;
  NvM_DstPtrType arg_Call_DstPtr = NULL_PTR;
  Std_ReturnType ret_Call;
  NvM_SrcPtrType arg_Call_SrcPtr;
  Std_ReturnType ret_Call_0;
  

  ret_Read = Rte_Read_Rp_AdcValue_ArgData(WriteBlock);
  (void)ret_Read;
  //WriteBlock = arg_Read_data;
  if(NvmCount == 0)
  {
    if(NvmFlag)
    {
      ret_Call = Rte_Call_PS_NvM_Block_voltage_ReadBlock(ReadBlock);
      (void)ret_Call;
    }
    if(!NvmFlag)
    {
      ret_Call_0 = Rte_Call_PS_NvM_Block_voltage_WriteBlock(WriteBlock);
      (void)ret_Call_0;
    }
  }
  NvmCount++;
  if(NvmCount == 20)
  {
    NvmCount = 0;
    NvmFlag = !NvmFlag;
  }

/*不需要手动写在runnble里面，而是SWC工具自动根据DBC生成runnable

  //1s send onece signal
  if (counter%10 == 1)
  {
      Com_SendSignal(signalId, &PB1FETStatus_value);
      PB1FETStatus_value += 1;
      if (PB1FETStatus_value > 4)
      {
        PB1FETStatus_value = 0;
      }
      //Com_ReceiveSignal(Signame,&value);
  }
    counter ++;
    if (counter == 100)
    {
      counter = 2;
    }
    
*/

} /* FUNC(void, RTE_CODE) NvM_Cyclic (void) */

#define SWC_SPI_STOP_SEC_CODE
#include <SWC_SPI_MemMap.h>

#define SWC_SPI_START_SEC_CODE
#include <SWC_SPI_MemMap.h>
FUNC(void, RTE_CODE) SPI_cyclic (void)
{
  
} /* FUNC(void, RTE_CODE) SPI_cyclic (void) */

#define SWC_SPI_STOP_SEC_CODE
#include <SWC_SPI_MemMap.h>

/*
  ------------------------[runnable-independent API]-------------------------

  Copy and paste the following API to those runnable entity functions where
  you want to use them.

  ------------------------[port handle API]----------------------------------
  ------------------------[per instance memory API]--------------------------
 */

/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
