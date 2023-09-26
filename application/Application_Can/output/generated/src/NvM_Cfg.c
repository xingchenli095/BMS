/**
 * \file
 *
 * \brief AUTOSAR NvM
 *
 * This file contains the implementation of the AUTOSAR
 * module NvM.
 *
 * \version 6.17.26
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */




/*  MISRA-C:2012 Deviation List
 *
 *  MISRAC2012-1) Deviated Rule: 11.1 (required)
 *           "Conversions shall not be performed between a pointer to a function
 *           and any type other than an integral type."
 *
 *           Reason:
 *           The cast is necessary in order to avoid compiler warnings when mixing
 *           ports for mirror operations of different AUTOSAR versions.
 *
 *  MISRAC2012-2) Deviated Rule: 20.10 (advisory)
 *           "The # and ## preprocessor operators should not be used."
 *
 *           Reason:
 *           Concatenation(##) operator is used by pre compile time parameter. It doesn't
 *           have any negative impact on code.
 *
 */

/*==================[inclusions]=============================================*/
#if (defined NVM_INTERNAL_USE)
#error NVM_INTERNAL_USE already defined
#endif
/* prevent redundant declarations of RTE types */
#define NVM_INTERNAL_USE

#include <TSAutosar.h>

/* !LINKSTO SWS_NvM_00554,2 */
#include <NvM.h>
#include <NvM_FunctionIntern.h> /* for initialization of NvM_CalcCrc */
#include <NvM_DataIntern.h>   /* extern definition of NvM_ConfigurationId */
#include <NvM_CalcCrc.h>      /* Extern definitions of unit 'CalcCrc'. */
#include <NvM_UsrHdr.h>

#if (NVM_INCLUDE_RTE == STD_ON)
# include <Rte_NvM.h>
# include <Rte_NvMData.h>
#endif

/*==================[macros]================================================*/

#if (defined NVM_JOIN)
#error NVM_JOIN is already defined
#endif
/** \brief Concatenate the arguments X and Y after they are expanded by the
 ** preprocessor.
 **
 ** These are just helper macros used in the definition of NVM_ASSERT_STC().
 **/
#define NVM_JOIN(X,Y)  NVM_JOIN1(X,Y)

#if (defined NVM_JOIN1)
#error NVM_JOIN1 is already defined
#endif
/* Deviation MISRAC2012-2 */
#define NVM_JOIN1(X,Y) X##Y

/** \brief Check static assertion at compile time
 **
 ** \param expr logical expression to be evaluated at compile time
 **
 ** If \a expr evaluates to FALSE the compiler will abort with an error
 ** because array with a negative number of elements are forbidden in C.  If
 ** \a expr is TRUE the macro expands to a legal typedef.
 **
 ** The usage of this macro does \e not lead to additional resource usage in
 ** the resulting binary code.
 **
 ** The macro should be used were preprocessor #if directives cannot evaluate
 ** expressions but where these expressions can still be evaluated before
 ** runtime. E.g. expressions containig sizeof() functions used on types may
 ** be checked: NVM_ASSERT_STC(sizeof(Mod_SomeType) < 16U)
 **
 ** \note Macro may only be used at places in the code where typedefs are
 ** allowed.
 **/

#if (defined NVM_ASSERT_STC)
#error NVM_ASSERT_STC is already defined
#endif
/* Deviation MISRAC2012-2 <+2> */
#define NVM_ASSERT_STC(expr)\
 typedef uint8 NVM_JOIN(AssertFailedInLine,__LINE__)[(expr)?1:-1]

                    /* BlockIdentifier: 3 - RamBlockDataAddress: &Dcm_Dsl_RoeServices_Persistent_Data */
        /* Length = 16U (Block length) */
        NVM_ASSERT_STC(16U == sizeof(Dcm_Dsl_RoeServices_Persistent_Data));
  
                    /* BlockIdentifier: 4 - RamBlockDataAddress: &Dem_NvData */
        /* Length = 40U (Block length) */
        NVM_ASSERT_STC(40U == sizeof(Dem_NvData));
  
                    /* BlockIdentifier: 5 - RamBlockDataAddress: &Dem_NvGateEntryPrimaryData */
        /* Length = 56U (Block length) */
        NVM_ASSERT_STC(56U == sizeof(Dem_NvGateEntryPrimaryData));
  
                    /* BlockIdentifier: 9 - RamBlockDataAddress: &NvM_Ram_voltage */
        /* Length = 2U (Block length) */
        NVM_ASSERT_STC(2U == sizeof(NvM_Ram_voltage));
        /* BlockIdentifier: 9 - RomBlockDataAddress: &NvM_Rom_voltage */
    /* Length = 2U */
    NVM_ASSERT_STC(2U == sizeof(NvM_Rom_voltage));
  


/*==================[type definitions]=======================================*/

/*==================[external function declarations]=========================*/

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

#if ( defined(NVM_MULTICORE_ENABLED) )
#define NVM_START_SEC_CONFIG_DATA_MC_SHARED_UNSPECIFIED
#include <NvM_MemMap.h>
#else
#define NVM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include <NvM_MemMap.h>
#endif
/* !LINKSTO NVM138,1, NVM143,1, NVM443,1, NVM321,1 ,NVM140,1 */
CONST(NvM_BlockDescriptorType,NVM_CONST) NvM_BlockDescriptorTable[NVM_TOTAL_NUMBER_OF_NVRAM_BLOCKS]=
{
  /** \brief  block 0:  NvM internal block, used to manage multi block requests. */
  {
    NULL_PTR,    /* initBlockCallback */
    NULL_PTR,    /* singleBlockCallback */
    NULL_PTR,    /* readRamFromNvCallback */
    NULL_PTR,    /* writeRamToNvCallback */
    NULL_PTR,    /* romBlockDataAddress */
    NULL_PTR,    /* ramBlockDataAddress */
    0U,  /* blockDesc */
    0U,  /* nvBlockLength */
    0U,  /* BlockBaseNumber */
    0U,  /* nvBlockIdentifier*/
    0xFFFFU,  /* ramBlockCrcIndex */
    0U,  /* nvBlockNum */
    0U,  /* romBlockNum */
    0U,  /* blockJobPriority */
    0U,  /* writeRetryLimit */
  },

  /* NVM_BLOCK_NvMBlock_ConfigID */
  {
    NULL_PTR, /* initBlockCallback */
    NULL_PTR, /* singleBlockCallback */
    NULL_PTR, /* readRamFromNvCallback */
    NULL_PTR, /* writeRamToNvCallback */
    &NvM_CompiledConfigurationId, /* romBlockDataAddress */
    &NvM_ConfigurationId, /* ramBlockDataAddress */
    0x0050208aU,  /* blockDesc */
    2U,  /* nvBlockLength */
    
    
    16U,  /* nvBlockBaseNumber */
    1U,   /* nvBlockIdentifier*/
    0U, /* ramBlockCrcIndex */
    2U, /* nvBlockNum */
    1U, /* romBlockNum */
    1U, /* blockJobPriority */
    3U,  /* writeRetryLimit */
  },

  /* NVM_BLOCK_NVM_BLOCK_DCM_NvM_Dummy */
  {
    NULL_PTR, /* initBlockCallback */
    NULL_PTR, /* singleBlockCallback */
    NULL_PTR, /* readRamFromNvCallback */
    NULL_PTR, /* writeRamToNvCallback */
    &DidF190_DefaultData, /* romBlockDataAddress */
    NULL_PTR, /* ramBlockDataAddress */
    0x00400000U,  /* blockDesc */
    17U,  /* nvBlockLength */
    
    
    48U,  /* nvBlockBaseNumber */
    2U,   /* nvBlockIdentifier*/
    0xFFFFU, /* ramBlockCrcIndex */
    1U, /* nvBlockNum */
    1U, /* romBlockNum */
    1U, /* blockJobPriority */
    3U,  /* writeRetryLimit */
  },

  /* NVM_BLOCK_NVM_BLOCK_DCM_ROE */
  {
    NULL_PTR, /* initBlockCallback */
    NULL_PTR, /* singleBlockCallback */
    NULL_PTR, /* readRamFromNvCallback */
    NULL_PTR, /* writeRamToNvCallback */
    NULL_PTR, /* romBlockDataAddress */
    &Dcm_Dsl_RoeServices_Persistent_Data, /* ramBlockDataAddress */
    0x00440200U,  /* blockDesc */
    16U,  /* nvBlockLength */
    
    
    64U,  /* nvBlockBaseNumber */
    3U,   /* nvBlockIdentifier*/
    0xFFFFU, /* ramBlockCrcIndex */
    1U, /* nvBlockNum */
    0U, /* romBlockNum */
    1U, /* blockJobPriority */
    3U,  /* writeRetryLimit */
  },

  /* NVM_BLOCK_NVM_BLOCK_DEM_DEFAULT */
  {
    NULL_PTR, /* initBlockCallback */
    &Dem_NvMEventStatusBlockCallback, /* singleBlockCallback */
    &Dem_NvMReadCopyEventStatusBlock, /* readRamFromNvCallback */
    &Dem_NvMWriteCopyEventStatusBlock, /* writeRamToNvCallback */
    NULL_PTR, /* romBlockDataAddress */
    &Dem_NvData, /* ramBlockDataAddress */
    0x00460200U,  /* blockDesc */
    40U,  /* nvBlockLength */
    
    
    80U,  /* nvBlockBaseNumber */
    4U,   /* nvBlockIdentifier*/
    0xFFFFU, /* ramBlockCrcIndex */
    1U, /* nvBlockNum */
    0U, /* romBlockNum */
    64U, /* blockJobPriority */
    3U,  /* writeRetryLimit */
  },

  /* NVM_BLOCK_NVM_BLOCK_DEM_PRIMARY */
  {
    NULL_PTR, /* initBlockCallback */
    &Dem_NvMGateEntryPrimaryBlockCallback, /* singleBlockCallback */
    NULL_PTR, /* readRamFromNvCallback */
    NULL_PTR, /* writeRamToNvCallback */
    NULL_PTR, /* romBlockDataAddress */
    &Dem_NvGateEntryPrimaryData, /* ramBlockDataAddress */
    0x00402103U,  /* blockDesc */
    56U,  /* nvBlockLength */
    
    
    96U,  /* nvBlockBaseNumber */
    5U,   /* nvBlockIdentifier*/
    0xFFFFU, /* ramBlockCrcIndex */
    2U, /* nvBlockNum */
    0U, /* romBlockNum */
    1U, /* blockJobPriority */
    3U,  /* writeRetryLimit */
  },

  /* NVM_BLOCK_NVM_BLOCK_DEM_SECONDARY */
  {
    NULL_PTR, /* initBlockCallback */
    &Dem_NvMGateEntrySecondaryBlockCallback, /* singleBlockCallback */
    NULL_PTR, /* readRamFromNvCallback */
    NULL_PTR, /* writeRamToNvCallback */
    NULL_PTR, /* romBlockDataAddress */
    &Dem_NvGateEntrySecondaryData, /* ramBlockDataAddress */
    0x00402103U,  /* blockDesc */
    20U,  /* nvBlockLength */
    
    
    112U,  /* nvBlockBaseNumber */
    6U,   /* nvBlockIdentifier*/
    0xFFFFU, /* ramBlockCrcIndex */
    2U, /* nvBlockNum */
    0U, /* romBlockNum */
    1U, /* blockJobPriority */
    3U,  /* writeRetryLimit */
  },

  /* NVM_BLOCK_PersistentCounterValue */
  {
    NULL_PTR, /* initBlockCallback */
    NULL_PTR, /* singleBlockCallback */
    NULL_PTR, /* readRamFromNvCallback */
    NULL_PTR, /* writeRamToNvCallback */
    &Demo_CyclicCounter_Rom_Block, /* romBlockDataAddress */
    &Demo_CyclicCounter_Ram_Block, /* ramBlockDataAddress */
    0x00440200U,  /* blockDesc */
    1U,  /* nvBlockLength */
    
    
    32U,  /* nvBlockBaseNumber */
    7U,   /* nvBlockIdentifier*/
    0xFFFFU, /* ramBlockCrcIndex */
    1U, /* nvBlockNum */
    1U, /* romBlockNum */
    64U, /* blockJobPriority */
    3U,  /* writeRetryLimit */
  },

  /* NVM_BLOCK_NVM_BLOCK_DEM_PERMANENT */
  {
    NULL_PTR, /* initBlockCallback */
    &Dem_NvMWriteFinishedPermanentMemory, /* singleBlockCallback */
    &Dem_NvMReadCopyPermanentMemory, /* readRamFromNvCallback */
    &Dem_NvMWriteCopyPermanentMemory, /* writeRamToNvCallback */
    NULL_PTR, /* romBlockDataAddress */
    NULL_PTR, /* ramBlockDataAddress */
    0x00422203U,  /* blockDesc */
    8U,  /* nvBlockLength */
    
    
    128U,  /* nvBlockBaseNumber */
    8U,   /* nvBlockIdentifier*/
    0xFFFFU, /* ramBlockCrcIndex */
    1U, /* nvBlockNum */
    0U, /* romBlockNum */
    1U, /* blockJobPriority */
    3U,  /* writeRetryLimit */
  },

  /* NVM_BLOCK_NvM_BLOCK_voltage */
  {
    NULL_PTR, /* initBlockCallback */
    NULL_PTR, /* singleBlockCallback */
    NULL_PTR, /* readRamFromNvCallback */
    NULL_PTR, /* writeRamToNvCallback */
    &NvM_Rom_voltage, /* romBlockDataAddress */
    &NvM_Ram_voltage, /* ramBlockDataAddress */
    0x00442242U,  /* blockDesc */
    2U,  /* nvBlockLength */
    
    
    144U,  /* nvBlockBaseNumber */
    9U,   /* nvBlockIdentifier*/
    0xFFFFU, /* ramBlockCrcIndex */
    1U, /* nvBlockNum */
    1U, /* romBlockNum */
    64U, /* blockJobPriority */
    1U,  /* writeRetryLimit */
  }
}; /* NvM_BlockDescriptorTable */

#if ( defined(NVM_MULTICORE_ENABLED) )
#define NVM_STOP_SEC_CONFIG_DATA_MC_SHARED_UNSPECIFIED
#include <NvM_MemMap.h>
#else
#define NVM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include <NvM_MemMap.h>
#endif /*MULTICORE ENABLED*/



#define NVM_START_SEC_CONFIG_DATA_8
#include <NvM_MemMap.h>

#if (NVM_CANCEL_INTERNAL_JOB == STD_ON)
CONST(uint8,NVM_CONST) NvM_UsedDeviceIds[NVM_NUM_USED_DEVICES]=
{
0U,
};/*NvM_UsedDeviceIds*/
#endif /* NVM_CANCEL_INTERNAL_JOB == STD_ON */

#define NVM_STOP_SEC_CONFIG_DATA_8
#include <NvM_MemMap.h>


#define NVM_START_SEC_VAR_INIT_32
#include <NvM_MemMap.h>
 
VAR(uint32,NVM_APPL_DATA) NvM_CalcCrc_CalcBuffer = (uint32)0U;

#define NVM_STOP_SEC_VAR_INIT_32
#include <NvM_MemMap.h>



#define NVM_START_SEC_CONFIG_DATA_16
#include <NvM_MemMap.h>
/* !LINKSTO NVM034,1 */
CONST(uint16,NVM_CONST) NvM_CompiledConfigurationId = 0x1U;
#define NVM_STOP_SEC_CONFIG_DATA_16
#include <NvM_MemMap.h>



/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/

/*==================[end of file]============================================*/
