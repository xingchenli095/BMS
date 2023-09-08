/**
 * \file
 *
 * \brief AUTOSAR SecOC
 *
 * This file contains the implementation of the AUTOSAR
 * module SecOC.
 *
 * \version 2.8.1
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

  
#ifndef SECOC_SYMBOLICNAMES_PBCFG_H
#define SECOC_SYMBOLICNAMES_PBCFG_H

/*==================[includes]===============================================*/

/*==================[macros]=================================================*/

#if (defined SECOC_PB_PDU_MEM_SIZE)
#error SECOC_PB_PDU_MEM_SIZE already defined
#endif
#define SECOC_PB_PDU_MEM_SIZE       SECOC_PBCFG_PDU_MEM_SIZE

#if (defined SECOC_PB_INT_MEM_SIZE)
#error SECOC_PB_INT_MEM_SIZE already defined
#endif
#define SECOC_PB_INT_MEM_SIZE       SECOC_PBCFG_INT_MEM_SIZE

/*------------------[symbolic name values]----------------------------------*/


/** \brief Export symbolic name values for Rx Secured Layer PDU IDs */

/** \brief Export symbolic name value for Rx Secured Layer, the Secured PDU ID 0 of Pdu_SecuredIn_281R_
 */
#if (defined SecOCConf_SecOCRxSecuredLayerPduId_Pdu_SecuredIn_281R_)
#error SecOCConf_SecOCRxSecuredLayerPduId_Pdu_SecuredIn_281R_ already defined
#endif
#define SecOCConf_SecOCRxSecuredLayerPduId_Pdu_SecuredIn_281R_ 0U


/** \brief Export symbolic name values for Tx Secured Layer PDUs */

/** \brief Export symbolic name value for Tx secured Layer PDU Id 0 of Pdu_SecuredOut_285T_
 */
#if (defined SecOCConf_SecOCTxSecuredLayerPduId_Pdu_SecuredOut_285T_)
#error SecOCConf_SecOCTxSecuredLayerPduId_Pdu_SecuredOut_285T_ already defined
#endif
#define SecOCConf_SecOCTxSecuredLayerPduId_Pdu_SecuredOut_285T_ 0U
/** \brief Export symbolic name value for Tx authentic Layer PDU Id 0 of Pdu_SecuredOut_285T_
 */
#if (defined SecOCConf_SecOCTxAuthenticLayerPduId_Pdu_SecuredOut_285T_)
#error SecOCConf_SecOCTxAuthenticLayerPduId_Pdu_SecuredOut_285T_ already defined
#endif
#define SecOCConf_SecOCTxAuthenticLayerPduId_Pdu_SecuredOut_285T_ 0U



/** \brief Export symbolic name values for Rx Freshness Value IDs */

/** \brief Export symbolic name value for freshness value ID 0 of Pdu_SecuredIn_281R_
 */
#if (defined SecOCConf_SecOCFreshnessValueId_Pdu_SecuredIn_281R)
#error SecOCConf_SecOCFreshnessValueId_Pdu_SecuredIn_281R_ already defined
#endif
#define SecOCConf_SecOCFreshnessValueId_Pdu_SecuredIn_281R_ 0U



/** \brief Export symbolic name values for Tx Freshness Value IDs */

/** \brief Export symbolic name value for freshness value ID 1 of Pdu_SecuredOut_285T_
 */
#if (defined SecOCConf_SecOCFreshnessValueId_Pdu_SecuredOut_285T_)
#error SecOCConf_SecOCFreshnessValueId_Pdu_SecuredOut_285T_ already defined
#endif
#define SecOCConf_SecOCFreshnessValueId_Pdu_SecuredOut_285T_ 1U



/*==================[type definitions]=======================================*/

/*==================[external function declarations]=========================*/

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/
#endif /* ifndef SECOC_SYMBOLICNAMES_PBCFG_H */
/*==================[end of file]============================================*/
