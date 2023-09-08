/**
 * \file
 *
 * \brief AUTOSAR GenericDemo
 *
 * This file contains the implementation of the AUTOSAR
 * module GenericDemo.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2016 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

#include <TSAutosar.h>     /* EB specific standard types, TS_PARAM_UNUSED() */
#include <Dcm.h>


#include <Eb_Intgr_BswM_Hooks.h>
#define VinSize 17

#define DCM_START_SEC_CONST_UNSPECIFIED
#include <MemMap.h>
CONST(uint8, DCM_APPL_CONST) DidF191_VIN_Data[VinSize]= {0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB};
#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include <MemMap.h>


#define NVM_START_SEC_CONFIG_DATA_8
#include <MemMap.h>
CONST(uint8, NVM_APPL_CONST) DidF190_DefaultData[VinSize]= {0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB};
#define NVM_STOP_SEC_CONFIG_DATA_8
#include <MemMap.h>

/* Variable which will be shared with Bootloader.
 * Booloader will check this Variable to verify if the Reset is
 * due to Diagnose Request in Application */
#define PROG_SIG  0x55AA55AAU

#define PROG_REPROG_FLAG_START_SEC_VAR_NO_INIT_8
#include <MemMap.h>
static uint32 m_ulProgSig;
#define PROG_REPROG_FLAG_STOP_SEC_VAR_NO_INIT_8
#include <MemMap.h>

/*======================== */

FUNC(uint8, DCM_APPL_CODE) Rte_DcmSecGetNumAtt
(
  Dcm_SecLevelType SecurityLevel
)
{
  TS_PARAM_UNUSED(SecurityLevel);

  return 0u;
}

FUNC(void, DCM_APPL_CODE) Rte_DcmSecSetNumAtt
(
  Dcm_SecLevelType SecurityLevel, uint8 NumAtt
)
{
  TS_PARAM_UNUSED(SecurityLevel);
  TS_PARAM_UNUSED(NumAtt);

}

FUNC(Std_ReturnType, DCM_APPL_CODE) Dcm_SetProgConditions
(
  P2VAR(Dcm_ProgConditionsType, AUTOMATIC, DCM_APPL_DATA) ProgConditions
)
{
  TS_PARAM_UNUSED(ProgConditions);
  /*write diag bootword (PROG_SIG  0x55AA55AAU) on shared init ram*/
  m_ulProgSig = PROG_SIG;
  return E_OK;
}

FUNC(Dcm_EcuStartModeType, DCM_APPL_CODE) Dcm_GetProgConditions
(
  P2VAR(Dcm_ProgConditionsType, AUTOMATIC, DCM_APPL_DATA) ProgConditions
)
{
  TS_PARAM_UNUSED(ProgConditions);

  return DCM_COLD_START;
}

FUNC(Std_ReturnType, DCM_APPL_CODE) Dcm_DcmDsdSidTabFnc
(
  Dcm_OpStatusType OpStatus,
  P2VAR(Dcm_MsgContextType, AUTOMATIC, DCM_APPL_DATA) pMsgContext
)
{
  TS_PARAM_UNUSED(OpStatus);
  TS_PARAM_UNUSED(pMsgContext);
  return E_NOT_OK;
}
/*Function for successfully flashing the Bootloader while Application is running */
FUNC(Std_ReturnType, DCM_APPL_CODE) PROG_ReqCheckProgPreCondition
(
  Dcm_OpStatusType OpStatus,
  P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR) ErrorCode
)
{
  TS_PARAM_UNUSED(OpStatus);
  TS_PARAM_UNUSED(ErrorCode);
  return E_OK;
}
/*Function for successfully flashing the Bootloader while Application is running as this is part of the Nominal Download Test Sequence */
FUNC(Std_ReturnType, DCM_APPL_CODE) PROG_ApplicationPresent
(
    P2VAR(uint8, AUTOMATIC, DCM_VAR) Data
)
{
    *Data = 0xEB;
    return E_OK;
}

FUNC(Std_ReturnType, DCM_APPL_CODE) Dcm_Internalf191Readout
(
    P2VAR(uint8, AUTOMATIC, DCM_VAR) Data
)
{	
    uint8 DataPosition;
	
	for (DataPosition = 0; DataPosition< VinSize; DataPosition++)
  	{
  		Data[DataPosition] = DidF191_VIN_Data[DataPosition];
  	}  	
	
	return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData (Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DataValueBuffer)
{ 
   Std_ReturnType ReturnValue = 0U;
   uint8 DataPosition;

   if(DCM_INITIAL == OpStatus)
  {
     ReturnValue = DCM_E_PENDING;
  }
  else if (DCM_PENDING == OpStatus)
  {
    ReturnValue = RTE_E_OK;
	for (DataPosition = 0; DataPosition< VinSize; DataPosition++)
    {
     DataValueBuffer[DataPosition] = DidF191_VIN_Data[DataPosition];
    }  	
  }	
	return ReturnValue;
} /* FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData (Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DataValueBuffer) */

/* Available function pointers for Time_Stamp_Hook_OnStartupTwoA */
/* ReadData sync function */
FUNC(Std_ReturnType, DCM_APPL_CODE) Read_Time_Stamp_Hook_OnStartupTwoA
(
    P2VAR(uint8, AUTOMATIC, DCM_VAR) Data
)
{	
   	Data[0]=(uint8)(TimeStamp.Time_Stamp_Hook_OnStartupTwoA >> 0);
	Data[1]=(uint8)(TimeStamp.Time_Stamp_Hook_OnStartupTwoA >> 8);
	Data[2]=(uint8)(TimeStamp.Time_Stamp_Hook_OnStartupTwoA >> 16);
	Data[3]=(uint8)(TimeStamp.Time_Stamp_Hook_OnStartupTwoA >> 24);

	return E_OK;
}
/* Available function pointers for Time_Stamp_Hook_OnStartupTwoB */
/* ReadData sync function */
FUNC(Std_ReturnType, DCM_APPL_CODE) Read_Time_Stamp_Hook_OnStartupTwoB
(
    P2VAR(uint8, AUTOMATIC, DCM_VAR) Data
)
{	
   	Data[0]=(uint8)(TimeStamp.Time_Stamp_Hook_OnStartupTwoB >> 0);
	Data[1]=(uint8)(TimeStamp.Time_Stamp_Hook_OnStartupTwoB >> 8);
	Data[2]=(uint8)(TimeStamp.Time_Stamp_Hook_OnStartupTwoB >> 16);
	Data[3]=(uint8)(TimeStamp.Time_Stamp_Hook_OnStartupTwoB >> 24);
	return E_OK;
}
/* Available function pointers for Time_Stamp_Hook_OnRunTwo */
/* ReadData sync function */
FUNC(Std_ReturnType, DCM_APPL_CODE) Read_Time_Stamp_Hook_OnRunTwo
(
    P2VAR(uint8, AUTOMATIC, DCM_VAR) Data
)
{	
   	Data[0]=(uint8)(TimeStamp.Time_Stamp_Hook_OnRunTwo >> 0);
	Data[1]=(uint8)(TimeStamp.Time_Stamp_Hook_OnRunTwo >> 8);
	Data[2]=(uint8)(TimeStamp.Time_Stamp_Hook_OnRunTwo >> 16);
	Data[3]=(uint8)(TimeStamp.Time_Stamp_Hook_OnRunTwo >> 24);
	return E_OK;
}
/* Available function pointers for Time_Stamp_Hook_OnPostRun*/
/* ReadData sync function */
FUNC(Std_ReturnType, DCM_APPL_CODE) Read_Time_Stamp_Hook_OnPostRun
(
    P2VAR(uint8, AUTOMATIC, DCM_VAR) Data
)
{	
   	Data[0]=(uint8)(TimeStamp.Time_Stamp_Hook_OnPostRun >> 0);
	Data[1]=(uint8)(TimeStamp.Time_Stamp_Hook_OnPostRun >> 8);
	Data[2]=(uint8)(TimeStamp.Time_Stamp_Hook_OnPostRun >> 16);
	Data[3]=(uint8)(TimeStamp.Time_Stamp_Hook_OnPostRun >> 24);
	return E_OK;
}
/* Available function pointers for Time_Stamp_Hook_OnPrpShutdown */
/* ReadData sync function */
FUNC(Std_ReturnType, DCM_APPL_CODE) Read_Time_Stamp_Hook_OnPrpShutdown
(
    P2VAR(uint8, AUTOMATIC, DCM_VAR) Data
)
{	
   	Data[0]=(uint8)(TimeStamp.Time_Stamp_Hook_OnPrpShutdown >> 0);
	Data[1]=(uint8)(TimeStamp.Time_Stamp_Hook_OnPrpShutdown >> 8);
	Data[2]=(uint8)(TimeStamp.Time_Stamp_Hook_OnPrpShutdown >> 16);
	Data[3]=(uint8)(TimeStamp.Time_Stamp_Hook_OnPrpShutdown >> 24);
	return E_OK;
}
/* Available function pointers for Time_Stamp_Hook_OnGoOffOneA */
/* ReadData sync function */
FUNC(Std_ReturnType, DCM_APPL_CODE) Read_Time_Stamp_Hook_OnGoOffOneA
(
    P2VAR(uint8, AUTOMATIC, DCM_VAR) Data
)
{	
   	Data[0]=(uint8)(TimeStamp.Time_Stamp_Hook_OnGoOffOneA >> 0);
	Data[1]=(uint8)(TimeStamp.Time_Stamp_Hook_OnGoOffOneA >> 8);
	Data[2]=(uint8)(TimeStamp.Time_Stamp_Hook_OnGoOffOneA >> 16);
	Data[3]=(uint8)(TimeStamp.Time_Stamp_Hook_OnGoOffOneA >> 24);
	return E_OK;
}
/* Available function pointers for Time_Stamp_Hook_OnGoOffOneB */
/* ReadData sync function */
FUNC(Std_ReturnType, DCM_APPL_CODE) Read_Time_Stamp_Hook_OnGoOffOneB
(
    P2VAR(uint8, AUTOMATIC, DCM_VAR) Data
)
{	
   	Data[0]=(uint8)(TimeStamp.Time_Stamp_Hook_OnGoOffOneB >> 0);
	Data[1]=(uint8)(TimeStamp.Time_Stamp_Hook_OnGoOffOneB >> 8);
	Data[2]=(uint8)(TimeStamp.Time_Stamp_Hook_OnGoOffOneB >> 16);
	Data[3]=(uint8)(TimeStamp.Time_Stamp_Hook_OnGoOffOneB >> 24);
	return E_OK;
}  


  