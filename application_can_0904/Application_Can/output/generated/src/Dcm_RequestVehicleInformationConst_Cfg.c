/* --------{ EB Automotive C Source File }-------- */
/*==================[inclusions]=================================================================*/
#include <Dcm_Int.h>
#include <Dcm_API_Cfg.h>
#include <Dcm_RequestVehicleInformation_Cfg.h>

#if (DCM_INCLUDE_RTE == STD_ON)
#include <Rte_Dcm.h>
#endif
/*==================[macros]=====================================================================*/

/*==================[type definitions]===========================================================*/

/*==================[external function declarations]=============================================*/

/*==================[internal function declarations]=============================================*/

/*==================[internal constants]=========================================================*/

/*==================[internal data]==============================================================*/

/*==================[external constants]=========================================================*/
#define DCM_START_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

CONST(Dcm_DspVehInfoType,DCM_CONST) Dcm_DspVehInfo[DCM_DSP_VEHINFO_NUM] =
{
  /* VehInfo DcmDspVehInfo_0 */
  {
    /*index of first VehInfoDataConfig*/
    0U,
    /*count of VehInfoDataConfig*/
    1U,
    /*VehInfoInfoType*/
    0x1U,
  },
  /* VehInfo DcmDspVehInfo_1 */
  {
    /*index of first VehInfoDataConfig*/
    1U,
    /*count of VehInfoDataConfig*/
    1U,
    /*VehInfoInfoType*/
    0x2U,
  },
};

CONST(Dcm_DspVehInfoDataType,DCM_CONST) Dcm_DspVehInfoData[DCM_DSP_VEHINFODATA_NUM] =
{
  /* VehInfo DcmDspVehInfo_0 - VehInfoData Service09_VinMessageCount */
  {
    /* Rte GetInfotypeValueData operation pointer */
    &Rte_Call_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData,
    /*DataSize*/
    1U,
  },
  /* VehInfo DcmDspVehInfo_1 - VehInfoData Service09_VehicleIdentificationNumber */
  {
    /* Rte GetInfotypeValueData operation pointer */
    &Rte_Call_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData,
    /*DataSize*/
    17U,
  },
};

#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

#define DCM_START_SEC_CALIB_8
#include <Dcm_MemMap.h>

CONST(uint8,DCM_CONST) Dcm_DspVehInfoUsed[DCM_DSP_VEHINFO_USED_ARRAY_SIZE] =
{
  3U,
};

#define DCM_STOP_SEC_CALIB_8
#include <Dcm_MemMap.h>

/*==================[external data]==============================================================*/

/*==================[external function definitions]==============================================*/

/*==================[internal function definitions]==============================================*/

/*==================[end of file]================================================================*/
