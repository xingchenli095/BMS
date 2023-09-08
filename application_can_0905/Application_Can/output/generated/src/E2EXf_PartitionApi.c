/**
 * \file
 *
 * \brief AUTOSAR E2EXf
 *
 * This file contains the implementation of the AUTOSAR
 * module E2EXf.
 *
 * \version 1.0.37
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*==================[includes]==============================================*/

#include <E2E_SM.h>              /* E2E State Machine */
#include <E2E_P05.h>             /* E2E Profile P05 */
#include <E2E_E2EXf_Stc.h>           /* Static definitions of constants and types */
#include <E2EXf_PartitionApi.h>       /* Generated partition API */

/*==================[macros]================================================*/

#if (defined E2EXF_EB_PARTITION_INITFUNC_NAME) /* to prevent double declaration */
#error E2EXF_EB_PARTITION_INITFUNC_NAME already defined
#endif /* if (defined E2EXF_EB_PARTITION_INITFUNC_NAME) */

#define E2EXF_EB_PARTITION_INITFUNC_NAME E2EXf_PartitionInit

#if (defined E2EXF_EB_PARTITION_DEINITFUNC_NAME) /* to prevent double declaration */
#error E2EXF_EB_PARTITION_DEINITFUNC_NAME already defined
#endif /* if (defined E2EXF_EB_PARTITION_DEINITFUNC_NAME) */

#define E2EXF_EB_PARTITION_DEINITFUNC_NAME E2EXf_PartitionDeInit

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

#define E2EXF_START_SEC_VAR_CLEARED_ASIL_D_UNSPECIFIED
#include <E2EXf_MemMap.h>

/** \brief Define state variable for in-place transformer */
E2EXF_DEF_XFSTATEVAR_XF_P05_INPLACE(E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8);

/** \brief Define state variable for in-place inverse transformer */
E2EXF_DEF_XFSTATEVAR_INVXF_P05_INPLACE(E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A);

#define E2EXF_STOP_SEC_VAR_CLEARED_ASIL_D_UNSPECIFIED
#include <E2EXf_MemMap.h>

#define E2EXF_START_SEC_VAR_INIT_ASIL_D_8
#include <E2EXf_MemMap.h>

/** \brief Define variable holding the initialization state of a dedicated partition */
E2EXF_DEF_VAR_PARTITIONINITSTATE;

#define E2EXF_STOP_SEC_VAR_INIT_ASIL_D_8
#include <E2EXf_MemMap.h>

#define E2EXF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include <E2EXf_MemMap.h>

/** \brief Define configuration data for in-place transformer */
E2EXF_DEF_CFG_XF_P05_INPLACE(E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8) =
{
    { /* E2E_P05Config */
        0U, /* Offset */
        32U, /* DataLength */
        284U, /* DataID */
        3U /* MaxDeltaCounter */
    },
    { /* E2E_PXXConfig */
        0U, /* UpperHeaderBitsToShift */
        0U, /* HeaderLength */
        TRUE /* unused value of ProfileBehavior */
    }
};

/** \brief Define configuration data for in-place inverse transformer */
E2EXF_DEF_CFG_INVXF_P05_INPLACE(E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A) =
{
    { /* E2E_P05Config */
        0U, /* Offset */
        32U, /* DataLength */
        280U, /* DataID */
        3U /* MaxDeltaCounter */
    },
    { /* E2E_SMConfig */
        10U, /* WindowSize */
        1U, /* MinOkStateInit */
        0U, /* MaxErrorStateInit */
        1U, /* MinOkStateValid */
        0U, /* MaxErrorStateValid */
        1U, /* MinOkStateInvalid */
        0U /* MaxErrorStateInvalid */
    },
    { /* E2E_PXXConfig */
        0U, /* UpperHeaderBitsToShift */
        0U, /* HeaderLength */
        TRUE /* unused value of ProfileBehavior */
    }
};

#define E2EXF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include <E2EXf_MemMap.h>

/*==================[external function definitions]=========================*/

#define E2EXF_START_SEC_CODE
#include <E2EXf_MemMap.h>

/** \brief Define initialization function for all transformers of this partition */
E2EXF_DEF_FUNC_PARTITIONINIT_START
E2EXF_INIT_XFSTATEVAR_XF_P05_INPLACE(E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8);
E2EXF_INIT_XFSTATEVAR_INVXF_P05_INPLACE(E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A);
E2EXF_DEF_FUNC_PARTITIONINIT_STOP

/** \brief Define de-initialization function for all transformers of this partition */
E2EXF_DEF_FUNC_PARTITIONDEINIT

/** \brief Define transformer function for in-place transformer */
E2EXF_DEF_FUNC_XF_P05_INPLACE(E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8)

/** \brief Define transformer function for in-place inverse transformer */
E2EXF_DEF_FUNC_INVXF_P05_INPLACE(E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A)

#define E2EXF_STOP_SEC_CODE
#include <E2EXf_MemMap.h>

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
