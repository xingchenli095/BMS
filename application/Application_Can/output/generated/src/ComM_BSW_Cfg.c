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



/** \brief Number of Tx EIRA Com Signals mapped to ComMPnc_16 */
#if (defined COMM_NUM_TX_PNC_16)
#error COMM_NUM_TX_PNC_16 already defined
#endif
#define COMM_NUM_TX_PNC_16  1

/** \brief Number of Tx EIRA Com Signals mapped to ComMPnc_17 */
#if (defined COMM_NUM_TX_PNC_17)
#error COMM_NUM_TX_PNC_17 already defined
#endif
#define COMM_NUM_TX_PNC_17  1



/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[internal constants]====================================*/

#define COMM_START_SEC_CONST_8
#include <ComM_MemMap.h>


/*---------------[Partial Network Cluster (PNC)]-----------------*/







 





/** \brief Array of Rx Eira Com signal masks for Com Signal SGCanNmPnEiraRxNSdu */
STATIC CONST(uint8, COMM_CONST) ComM_PncRxEiraMask_SGCanNmPnEiraRxNSdu[COMM_PN_INFO_LENGTH] =
{
  /* 6 2 1.0 */
  0x3U,
    0x00u,
  0x00u,
  0x00u,
  0x00u,
  0x00u,
};




/** \brief Array of Tx Eira Com signal masks for Com Signal SGCanNetworkNmPnIraTxNSdu */
STATIC CONST(uint8, COMM_CONST) ComM_PncTxMask_SGCanNetworkNmPnIraTxNSdu[COMM_PN_INFO_LENGTH] =
{
  0x3U,
    0x00u,
  0x00u,
  0x00u,
  0x00u,
  0x00u,
};


/** \brief List of Tx Eira Com signals mapped to ComMPnc_16 */
STATIC CONST(uint8, COMM_CONST) ComM_TxSig_Pnc_16[COMM_NUM_TX_PNC_16] =
{
  0, /* SGCanNetworkNmPnIraTxNSdu */
};
/** \brief List of Tx Eira Com signals mapped to ComMPnc_17 */
STATIC CONST(uint8, COMM_CONST) ComM_TxSig_Pnc_17[COMM_NUM_TX_PNC_17] =
{
  0, /* SGCanNetworkNmPnIraTxNSdu */
};

/* !LINKSTO ECUC_ComM_00892,1 */

#define COMM_STOP_SEC_CONST_8
#include <ComM_MemMap.h>

/*==================[external constants]====================================*/

#define COMM_START_SEC_CONST_8
#include <ComM_MemMap.h>




CONST(boolean, COMM_CONST)
  ComM_PncNmRequest[COMM_NUM_CHANNELS] =
{
 FALSE,
};


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
  0xFFU, /* channel with real bus NM support, value never used */
};
#endif

#if (COMM_NM_VARIANT_LIGHT_NEEDED == STD_ON)
/* Timeout after which state "ready sleep" is left in ComMNmVariant=LIGHT */
CONST(uint16, COMM_CONST) ComM_ReadySleepNoNmTimeoutMs[COMM_NUM_CHANNELS] =
{
  /* for channel CanNetwork */
  0xFFU, /* channel with real bus NM support, value never used */
};
#endif


/** \brief List of Pnc Ids */
CONST(PNCHandleType, COMM_CONST) ComM_PncID[COMM_NUM_PNC] =
{
  16, /* for PNC ComMPnc_16 */
  17, /* for PNC ComMPnc_17 */
};


#define COMM_STOP_SEC_CONST_16
#include <ComM_MemMap.h>





  




  




 



 

  
    
  
 
 

  

 
#define COMM_START_SEC_CONST_16
#include <ComM_MemMap.h>

CONST(ComM_RxSignal_Struct_Type, COMM_CONST) ComM_RxComSignalEiraCfg[COMM_NUM_RX_EIRA_SIGNALS] =
{
      {
    4,  /* SGCanNmPnEiraRxNSdu */
  },
};

 
#define COMM_STOP_SEC_CONST_16
#include <ComM_MemMap.h>
 





  




  




 



 

  
    
  
 
 

  

 
#if (COMM_NUM_TX_SIGNALS > 0U)
#define COMM_START_SEC_CONST_UNSPECIFIED
#include <ComM_MemMap.h>
CONST(ComM_TxSignal_Struct_Type, COMM_CONST) ComM_TxComSignalCfg[COMM_NUM_TX_SIGNALS] =
{
  {
    3, /* SGCanNetworkNmPnIraTxNSdu */
    COMM_EIRA_ERA_ACTIVE  },
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
#include <ComM_MemMap.h>
#endif /* (COMM_NUM_TX_SIGNALS > 0U) */
 
 

#define COMM_START_SEC_CONST_UNSPECIFIED
#include <ComM_MemMap.h>





#if (COMM_NUM_TX_SIGNALS > 0U)
CONST(ComM_PncTxSigMapType, COMM_CONST) ComM_PncTxSignalMap[COMM_NUM_PNC] =
{
  /* ComMPnc_16 */
  {
    ComM_TxSig_Pnc_16,      /* TxSignalList */
    COMM_NUM_TX_PNC_16     /* NumTxSignal */
  },
  /* ComMPnc_17 */
  {
    ComM_TxSig_Pnc_17,      /* TxSignalList */
    COMM_NUM_TX_PNC_17     /* NumTxSignal */
  },
};
#endif /* (COMM_NUM_TX_SIGNALS > 0U) */

CONSTP2CONST(uint8, COMM_CONST, COMM_CONST) ComM_PncRxEiraMask[COMM_NUM_RX_EIRA_SIGNALS] =
{
  /* Com Signal: SGCanNmPnEiraRxNSdu */
  ComM_PncRxEiraMask_SGCanNmPnEiraRxNSdu,
};


#if (COMM_NUM_TX_SIGNALS > 0U)
CONSTP2CONST(uint8, COMM_CONST, COMM_CONST) ComM_PncTxMask[COMM_NUM_TX_SIGNALS] =
{
  /* Com Signal: SGCanNetworkNmPnIraTxNSdu */
  ComM_PncTxMask_SGCanNetworkNmPnIraTxNSdu,
};
#endif /* (COMM_NUM_TX_SIGNALS > 0U) */


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
