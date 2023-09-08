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
#ifndef COMM_RTE_CFG_H
#define COMM_RTE_CFG_H

/*==================[inclusions]============================================*/
#include <ComStack_Types.h>  /* AUTOSAR Com Stack standard types */
#include <TSAutosar.h>       /* TS_PROD_* symbols */









#include <ComM_Cfg.h>       /* included precompile time configuration */

  


  







 



 

  
    
  
 
 

  


  
#include <Rte_ComM.h>       /* Include Symbols defined by RTE */  
   


/*==================[macros]================================================*/

/*==================[type definitions]======================================*/



  







 



 

  
    
  
 
 

  


 
#if (COMM_INCLUDE_RTE == STD_ON)

#if (COMM_NUM_USERS != 0U)
/** \brief Type for Rte mode switch callback functions */
typedef P2FUNC(Std_ReturnType, RTE_CODE, ComM_RteSwitchCbkType)(
  Rte_ModeType_ComMMode mode);
#endif



/** \brief Type for Rte data write callback functions */
typedef P2FUNC(Std_ReturnType, RTE_CODE, ComM_RteWriteCbkType)(
  P2CONST(ComM_UserHandleArrayType, AUTOMATIC, RTE_APPL_CONST) data);




#endif
 
/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/




  







 



 

  
    
  
 
 

  


 
#define COMM_START_SEC_CONST_UNSPECIFIED
#include <ComM_MemMap.h>

#if (COMM_INCLUDE_RTE == STD_ON)

#if (COMM_NUM_USERS != 0U)
/** \brief Rte switch mode callbacks for each user */
extern CONST(ComM_RteSwitchCbkType, COMM_CONST)
  ComM_RteSwitchCbk[USER_ARRAY_SIZE];
#endif


/** \brief Rte data write callbacks for each user */
extern CONST(ComM_RteWriteCbkType, COMM_CONST)
  ComM_RteWriteCbk[COMM_NUM_CHANNELS];




#endif

#define COMM_STOP_SEC_CONST_UNSPECIFIED
#include <ComM_MemMap.h>
 

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/




  







 



 

  
    
  
 
 

  


 
#if ((COMM_INCLUDE_RTE == STD_ON) && (COMM_NUM_USERS != 0U))

#define COMM_START_SEC_VAR_CLEARED_8
#include <ComM_MemMap.h>






/**
 * \brief Communication mode, which was last succeessuflly reported to each user via the default
 *        interface of the Rte.
 */
extern VAR(ComM_ASR40_ModeType, COMM_VAR) ComM_RteModeUser[USER_ARRAY_SIZE];


#define COMM_STOP_SEC_VAR_CLEARED_8
#include <ComM_MemMap.h>
#endif /* #if ((COMM_INCLUDE_RTE == STD_ON) && (COMM_NUM_USERS != 0U))*/

 

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* ifndef COMM_RTE_CFG_H */
/*==================[end of file]===========================================*/
