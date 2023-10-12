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
 * on Thu Aug 31 18:00:56 CST 2023. !!!IGNORE-LINE!!!
 */

/*
 * \addtogroup Rte Runtime Environment
 * @{
 */

/* ==================[Includes]=============================================== */
#include <Rte_SWC_IoHwAbs.h>
#include <Dio_Cfg.h>
#include <Dio.h>
#include <ComM.h>

#include <Adc.h>
#include <Adc_Cfg.h>
#include <Adc_CfgDefines.h>

#include <Icu.h>
#include <Icu_Cfg.h>
#include <Mcl.h>


#define DIO_HIGH_VALUE 1U
#define DIO_LOW_VALUE 0U
#define ADC_NUM_RESULTS         (3u)

int flag = 1u;
int Count = 0u;
#define Dio_LevelType uint8
uint16 AdcGroupResult[ADC_NUM_RESULTS] = {0};

int icu_gloable_Status = 0u;
uint32 IcuCount = 0u;
int Icu_CMP_Count1 =0u;

int readData = 0U;
Icu_DutyCycleType icuDutyResult;


/* ==================[Definition of functions with external linkage]========== */
/* ------------------------[runnable entity skeletons]------------------------ */
#define SWC_IoHwAbs_START_SEC_CODE
#include <SWC_IoHwAbs_MemMap.h>
FUNC(void, RTE_CODE) Can_Receive (void)
{
  uint8 ret_DRead;

  ret_DRead = Rte_DRead_Rp_Can_Receive_Can();
  (void)ret_DRead;

  readData = ret_DRead;

} /* FUNC(void, RTE_CODE) Can_Receive (void) */

#define SWC_IoHwAbs_STOP_SEC_CODE
#include <SWC_IoHwAbs_MemMap.h>

#define SWC_IoHwAbs_START_SEC_CODE
#include <SWC_IoHwAbs_MemMap.h>
FUNC(void, RTE_CODE) Can_Send (void)
{


  uint8 arg_Write_data = Count;
  Std_ReturnType ret_Write;
  Std_ReturnType ret_Feedback;

  ret_Write = Rte_Write_Pp_Can_Send_Can(arg_Write_data);
  (void)ret_Write;
  ret_Feedback = Rte_Feedback_Pp_Can_Send_Can();
  (void)ret_Feedback;

  Count ++;
  

} /* FUNC(void, RTE_CODE) Can_Send (void) */

#define SWC_IoHwAbs_STOP_SEC_CODE
#include <SWC_IoHwAbs_MemMap.h>

#define SWC_IoHwAbs_START_SEC_CODE
#include <SWC_IoHwAbs_MemMap.h>
FUNC(void, RTE_CODE) Adc_ReadValue (void)
{
  
  Std_ReturnType ret_Write;

  Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcChannel_VER_G0,AdcGroupResult);
  Adc_StartGroupConversion(AdcConf_AdcGroup_AdcChannel_VER_G0);
  Adc_ReadGroup(AdcConf_AdcGroup_AdcChannel_VER_G0, AdcGroupResult);


  ret_Write = Rte_Write_Pp_AdcValue_ArgData(AdcGroupResult[0]);
  (void)ret_Write;

    /*Adc_StartGroupConversion(AdcConf_AdcGroup_AdcChannel_VER_G0);
  Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcChannel_VER_G0,AdcGroupResult);
  Adc_ReadGroup(AdcConf_AdcGroup_AdcChannel_VER_G0, AdcGroupResult);*/
  /*Adc_StopGroupConversion(AdcConf_AdcGroup_AdcChannel_VER_G0);*/

} /* FUNC(void, RTE_CODE) Adc_ReadValue (void) */
#define SWC_IoHwAbs_STOP_SEC_CODE
#include <SWC_IoHwAbs_MemMap.h>

#define SWC_IoHwAbs_START_SEC_CODE
#include <SWC_IoHwAbs_MemMap.h>
FUNC(void, RTE_CODE) LedControl_IO (void)
{
  
  ComM_RequestComMode(ComMConf_ComMUser_ComMUser_0,COMM_FULL_COMMUNICATION);
  
  if(Dio_ReadChannel(DioConf_DioChannel_MY_LED_CYCLIC) == DIO_LOW_VALUE)
  {
    Dio_WriteChannel(DioConf_DioChannel_MY_LED_CYCLIC, (Dio_LevelType) DIO_HIGH_VALUE);
  }
  else if(Dio_ReadChannel(DioConf_DioChannel_MY_LED_CYCLIC) == DIO_HIGH_VALUE)
  {
    Dio_WriteChannel(DioConf_DioChannel_MY_LED_CYCLIC, (Dio_LevelType) DIO_LOW_VALUE);
  }
  

/*
  if(flag)
  {
    Dio_WriteChannel(DioConf_DioChannel_MY_LED_CYCLIC, (Dio_LevelType) DIO_HIGH_VALUE);
  }
  else
  {
    Dio_WriteChannel(DioConf_DioChannel_MY_LED_CYCLIC, (Dio_LevelType) DIO_LOW_VALUE);
  }

  if(Count == 2)
  {
    flag = !flag;
	  Count= 0;
  }
  Count++;
  */
  
  if (icu_gloable_Status == 0)
  {
        icu_gloable_Status = 1;

        icuDutyResult.ActiveTime = 0;
        icuDutyResult.PeriodTime = 0;
        
        //Icu_EnableEdgeDetection(IcuChannel_0);
        //&Dcm_Dsl_RoeServices_Persistent_DataIcu_EnableNotification(IcuChannel_0); 

      
        Icu_EnableEdgeDetection(IcuChannel_CMP_PTE8);
        Icu_EnableNotification(IcuChannel_CMP_PTE8); 

        /*Icu_StartSignalMeasurement(IcuChannel_0);*/
        Icu_EnableEdgeCount(IcuChannel_0);
  }

        
        IcuCount = Icu_GetEdgeNumbers(IcuChannel_0);
        Icu_ResetEdgeCount(IcuChannel_0);

} /* FUNC(void, RTE_CODE) LedControl_IO (void) */

void IcuSignalEdgeDetection_SIUL(void)
{
  IcuCount = Icu_GetEdgeNumbers(IcuChannel_0);
}

void IcuSignalEdageDetection_Notification(void)
{
 IcuCount = 0;
}

void IcuSignalEdageDetection_CMP_Notification(void)
{
 Icu_CMP_Count1 ++;
  if (Icu_CMP_Count1 == 10)
  {
    Icu_CMP_Count1 = 0;
  }
}

#define SWC_IoHwAbs_STOP_SEC_CODE
#include <SWC_IoHwAbs_MemMap.h>

#define SWC_IoHwAbs_START_SEC_CODE
#include <SWC_IoHwAbs_MemMap.h>
FUNC(void, RTE_CODE) SWC_IoHwAbs_SetDiscreteValue (uint32 pdav0, uint32 value)
{
  /* suppress compiler warnings about unused arguments */
  (void)pdav0;
  (void)value;

} /* FUNC(void, RTE_CODE) SWC_IoHwAbs_SetDiscreteValue (uint32 pdav0, uint32 value) */

#define SWC_IoHwAbs_STOP_SEC_CODE
#include <SWC_IoHwAbs_MemMap.h>


FUNC(void, CANSM_CODE) User_CanIfConfirmPnAvailabilityDummy (
  uint8 TransceiverId
){
  
}


  //------------------------[runnable-independent API]-------------------------

  /*Copy and paste the following API to those runnable entity functions where
  you want to use them.*/

  //------------------------[port handle API]----------------------------------
  void CanSleepToNomail(void)
  {
    Dio_WriteChannel(DioConf_DioChannel_CAN_1463_EN, (Dio_LevelType) DIO_HIGH_VALUE);
    Dio_WriteChannel(DioConf_DioChannel_CAN_1463_NSTB, (Dio_LevelType) DIO_HIGH_VALUE);
  }
  
  //------------------------[per instance memory API]--------------------------
 

/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
