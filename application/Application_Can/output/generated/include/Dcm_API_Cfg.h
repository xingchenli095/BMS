/**
 * \file
 *
 * \brief AUTOSAR Dcm
 *
 * This file contains the implementation of the AUTOSAR
 * module Dcm.
 *
 * \version 5.0.13
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#ifndef DCM_API_CFG_H
#define DCM_API_CFG_H

/*==================[includes]===================================================================*/

#include <Dcm_Types.h>

/*==================[macros]=====================================================================*/



/*==================[type definitions]===========================================================*/

/*==================[external function declarations]=============================================*/

#define DCM_START_SEC_CALLOUT_CODE
#include <Dcm_MemMap.h>

/* !LINKSTO Dcm.ReadDataById.ReadData.SyncAPI,1 */
extern FUNC(Std_ReturnType, DCM_APPL_CODE) Dcm_Internalf186Readout(
    P2VAR(uint8, AUTOMATIC, DCM_VAR) Data);

/* !LINKSTO Dcm.ReadDataById.ReadData.SyncAPI,1 */
extern FUNC(Std_ReturnType, DCM_APPL_CODE) Dcm_Internalf191Readout(
    P2VAR(uint8, AUTOMATIC, DCM_VAR) Data);


extern Std_ReturnType PROG_ReqCheckProgPreCondition(
    Dcm_OpStatusType OpStatus,
    P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR) ErrorCode);
/* !LINKSTO Dcm.ReadData.DcmDspPid.SyncFnc,1 */
/** Extern DcmDspPidDataReadFnc Dem_DcmReadDataOfPID01 */
extern FUNC(Std_ReturnType, DCM_APPL_CODE) Dem_DcmReadDataOfPID01(
    P2VAR(uint8, AUTOMATIC, DCM_VAR) Data);

/** Extern DcmDspPidDataReadFnc Dem_DcmReadDataOfPID41 */
extern FUNC(Std_ReturnType, DCM_APPL_CODE) Dem_DcmReadDataOfPID41(
    P2VAR(uint8, AUTOMATIC, DCM_VAR) Data);

#define DCM_STOP_SEC_CALLOUT_CODE
#include <Dcm_MemMap.h>
/*==================[internal function declarations]=============================================*/

/*==================[external constants]=========================================================*/

/*==================[internal data]==============================================================*/

/*==================[external function definitions]==============================================*/

/*==================[internal function definitions]==============================================*/

#endif /* ifndef DCM_API_CFG_H */
/*==================[end of file]================================================================*/
