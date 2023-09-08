#ifndef RTE_SERVICESWCOMPONENTDEM_H
#define RTE_SERVICESWCOMPONENTDEM_H
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
 * This file contains Rte component declarations for component type ServiceSwComponentDem
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Tue Aug 29 10:19:28 CST 2023. !!!IGNORE-LINE!!!
 */

/*
 * \addtogroup Rte Runtime Environment
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ==================[Includes]=============================================== */
#include <TSMem.h>
#include <Rte_ServiceSwComponentDem_Type.h>
#include <Rte_ServiceSwComponentDem_Hook.h>
#include <Rte_Components_Shared.h>

/* ==================[Macros]================================================= */
#ifndef RTE_CORE /* if included by software component */
#ifndef RTE_APPLICATION_HEADER_FILE_H /* prevent double inclusion */
#define RTE_APPLICATION_HEADER_FILE_H
#else
#error Multiple application header files included.
#endif
#if (!defined(RTE_RUNNABLEAPI_Runnable_CBReadData_DemExternalCSDataElementClass_Session_922F0552F856FF32289CE769C88CFC68)) && (!defined(RTE_RUNNABLEAPI_Runnable_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_E3772ED4B9F02DB583EC5F65B2C620FF)) && (!defined(RTE_RUNNABLEAPI_Runnable_SetClearDTC_master_32BA196F218C476EBF9AFBFACCD52A0B))
#define RTE_RUNNABLEAPI_Runnable_CBReadData_DemExternalCSDataElementClass_Session_922F0552F856FF32289CE769C88CFC68
#define RTE_RUNNABLEAPI_Runnable_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_E3772ED4B9F02DB583EC5F65B2C620FF
#define RTE_RUNNABLEAPI_Runnable_SetClearDTC_master_32BA196F218C476EBF9AFBFACCD52A0B
#endif
#endif
/* ------------------[API mapping]-------------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#endif

/* ------------------[port handle API mapping]-------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#endif

#define RTE_E_DataServices_DemExternalCSDataElementClass_Session_E_NOT_OK 1U
#define RTE_E_DataServices_DemExternalCSDataElementClass_ExtDataRec_0x01_E_NOT_OK 1U
#define RTE_E_SetClearDTC_E_NOT_OK 1U
#ifndef RTE_CORE /* if included by software component */
#endif

/* ==================[Types]================================================== */
#ifndef RTE_CORE /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_ServiceSwComponentDem, TYPEDEF, RTE_CONST) Rte_Instance;
#endif

/* ==================[Definition of variables with external linkage]========== */
#define RTE_START_SEC_CONST_8
#include <Rte_MemMap.h>
extern CONST(Rte_CDS_ServiceSwComponentDem, RTE_CONST) Rte_Instance_ServiceSwComponentDem;
#define RTE_STOP_SEC_CONST_8
#include <Rte_MemMap.h>
#define RTE_START_SEC_CONST_32
#include <Rte_MemMap.h>
extern CONSTP2CONST(Rte_CDS_ServiceSwComponentDem, RTE_CONST, RTE_CONST) Rte_Inst_ServiceSwComponentDem;
#define RTE_STOP_SEC_CONST_32
#include <Rte_MemMap.h>

/* ==================[Declaration of functions with external linkage]========= */
/* ------------------[declaration of runnable entities]----------------------- */
#define ServiceSwComponentDem_START_SEC_CODE
#include <ServiceSwComponentDem_MemMap.h>
#ifdef RTE_PTR2ARRAYTYPE_PASSING
extern FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_Session_ReadData (P2VAR(DataArrayType_DemExternalCSDataElementClass_Session, AUTOMATIC, RTE_APPL_DATA) Data);
#else
extern FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_Session_ReadData (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Data);
#endif

#ifdef RTE_PTR2ARRAYTYPE_PASSING
extern FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData (P2VAR(DataArrayType_DemExternalCSDataElementClass_ExtDataRec_0x01, AUTOMATIC, RTE_APPL_DATA) Data);
#else
extern FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Data);
#endif

extern FUNC(Std_ReturnType, RTE_CODE) ServiceSwComponentDem_SetClearDTC_master_SetClearDTC (uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin);

#define ServiceSwComponentDem_STOP_SEC_CODE
#include <ServiceSwComponentDem_MemMap.h>

/* ------------------[declaration of API functions provided by Rte]----------- */
#define RTE_START_SEC_CODE
#include <Rte_MemMap.h>

#define RTE_STOP_SEC_CODE
#include <Rte_MemMap.h>

/* ------------------[declaration of API functions provided by other Appl]---- */

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */