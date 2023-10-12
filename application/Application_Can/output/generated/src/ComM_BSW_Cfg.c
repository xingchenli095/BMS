/**
 * \file
 *
 * \brief AUTOSAR ComM
 *
 * This file contains the implementation of the AUTOSAR
 * module ComM.
 *
 * \version 5.21.1
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/* !LINKSTO ComM503_Refine,1 */

/*==================[inclusions]============================================*/










  




  




 



 

  
    
  
 
 

  

 

/* prevent RTE symbols defined in ComM.h to be visible for ComM's .c files */
#if (defined COMM_INTERNAL_USAGE)
#error COMM_INTERNAL_USAGE already defined
#endif
#define COMM_INTERNAL_USAGE

#include <ComM_BSW.h>                   /* public API symbols */
#include <ComM_BSW_Cfg.h>               /* internal BSW config dependent header */

#if (COMM_CANSM_ACCESS_NEEDED == STD_ON)
#include <CanSM_ComM.h>                 /* Can state manager */
#endif

#if (COMM_FRSM_ACCESS_NEEDED == STD_ON)
#include <FrSM.h>                       /* Flexray state manager */
#endif

#if (COMM_LINSM_ACCESS_NEEDED == STD_ON)
#include <LinSM.h>                      /* Lin state manager */
#endif

#include <ComM_Int.h>
/*==================[macros]================================================*/



/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[internal constants]====================================*/

#define COMM_START_SEC_CONST_8
#include <ComM_MemMap.h>


/*---------------[Partial Network Cluster (PNC)]-----------------*/





/* !LINKSTO ECUC_ComM_00892,1 */

#define COMM_STOP_SEC_CONST_8
#include <ComM_MemMap.h>

/*==================[external constants]====================================*/

#define COMM_START_SEC_CONST_8
#include <ComM_MemMap.h>




#define COMM_STOP_SEC_CONST_8
#include <ComM_MemMap.h>

#define COMM_START_SEC_CONST_16
#include <ComM_MemMap.h>

#if ((COMM_NM_VARIANT_LIGHT_NEEDED == STD_ON)      \
     || (COMM_NM_VARIANT_NONE_NEEDED == STD_ON))
/* Timeout after which state "NetReqNoNm" is left when ComMNmVariant='LIGHT' or
 * 'NONE' */
CONST(uint16, COMM_CONST) ComM_NetReqNoNmTimeoutMs[COMM_NUM_CHANNELS] =
{
  /* for channel CanNetwork */
  2500U, /* Nm variant 'LIGHT' or 'NONE' */
};
#endif

#if (COMM_NM_VARIANT_LIGHT_NEEDED == STD_ON)
/* Timeout after which state "ready sleep" is left in ComMNmVariant=LIGHT */
CONST(uint16, COMM_CONST) ComM_ReadySleepNoNmTimeoutMs[COMM_NUM_CHANNELS] =
{
  /* for channel CanNetwork */
  0U,    /* Nm variant NONE, "ready sleep" state is instantly left */
};
#endif


#define COMM_STOP_SEC_CONST_16
#include <ComM_MemMap.h>





  




  




 



 

  
    
  
 
 

  

 
 


 

#define COMM_START_SEC_CONST_UNSPECIFIED
#include <ComM_MemMap.h>





#define COMM_STOP_SEC_CONST_UNSPECIFIED
#include <ComM_MemMap.h>




/*==================[internal data]=========================================*/

#if(COMM_VLAN_SUPPORT)

#define COMM_START_SEC_CONST_UNSPECIFIED
#include <ComM_MemMap.h>
CONST(ComM_VlanTableStructType, COMM_CONST) ComM_VlanConfigTable[COMM_VLAN_MANAGED_CH_NB] =
{
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
#include <ComM_MemMap.h>
#endif

 


/*==================[external data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
