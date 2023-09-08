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
#ifndef DCM_TYPES_CFG_H
#define DCM_TYPES_CFG_H

/*==================[includes]===================================================================*/
/*==================[macros]=====================================================================*/

/* !LINKSTO Dcm.EB.SesCtrlType.RteUsageFalse,1 */
#if (DCM_INCLUDE_RTE == STD_OFF)
/*------------------[definitions of session levels]----------------------------------------------*/
#if (defined DcmConf_DcmDspSession_Default)
#error DcmConf_DcmDspSession_Default already defined
#endif
/** \brief Export symbolic name value */
#define DcmConf_DcmDspSession_Default 1U

#if (defined DCM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dcm_Default)
#error Dcm_Default already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only
 **        (AUTOSAR version <= AUTOSAR 4.0 rev2) */
#define Dcm_Default 1U
#endif /* defined DCM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined DcmConf_DcmDspSession_Programming)
#error DcmConf_DcmDspSession_Programming already defined
#endif
/** \brief Export symbolic name value */
#define DcmConf_DcmDspSession_Programming 2U

#if (defined DCM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dcm_Programming)
#error Dcm_Programming already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only
 **        (AUTOSAR version <= AUTOSAR 4.0 rev2) */
#define Dcm_Programming 2U
#endif /* defined DCM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#if (defined DcmConf_DcmDspSession_Extended)
#error DcmConf_DcmDspSession_Extended already defined
#endif
/** \brief Export symbolic name value */
#define DcmConf_DcmDspSession_Extended 3U

#if (defined DCM_PROVIDE_LEGACY_SYMBOLIC_NAMES)
#if (defined Dcm_Extended)
#error Dcm_Extended already defined
#endif
/** \brief Export symbolic name value with module abbreviation as prefix only
 **        (AUTOSAR version <= AUTOSAR 4.0 rev2) */
#define Dcm_Extended 3U
#endif /* defined DCM_PROVIDE_LEGACY_SYMBOLIC_NAMES */

#endif /* #if (DCM_INCLUDE_RTE == STD_OFF) */

/*==================[type definitions]===========================================================*/
/*==================[external function declarations]=============================================*/
/*==================[internal function declarations]=============================================*/
/*==================[external constants]=========================================================*/
/*==================[internal data]==============================================================*/
/*==================[external function definitions]==============================================*/
/*==================[internal function definitions]==============================================*/

#endif /* ifndef DCM_TYPES_CFG_H */
/*==================[end of file]================================================================*/
