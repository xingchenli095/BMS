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

#ifndef DCM_COMMUNICATIONCONTROL_CFG_H
#define DCM_COMMUNICATIONCONTROL_CFG_H

/* !LINKSTO Dcm.Dsn.File.CommunicationControl.ConfigH,1 */

/*==================[includes]===================================================================*/

#include <Std_Types.h>
#include <Dcm_Int.h>                                   /* Definition of Dcm_ModeRuleFunctionType */

/*==================[macros]=====================================================================*/

/** \brief Support for resetting of channel state on failure of the
 **        DcmDspComControlCommunicationReEnableModeRuleRef mode rule check */
#if (defined DCM_DSP_COMMUNICATIONCONTROL_REENABLE_MODE_RULE_SUPPORT)
  #error "DCM_DSP_COMMUNICATIONCONTROL_REENABLE_MODE_RULE_SUPPORT is already defined"
#endif
#define DCM_DSP_COMMUNICATIONCONTROL_REENABLE_MODE_RULE_SUPPORT            STD_OFF

#if (defined DCM_0X28_0X00_SSVC_ENABLED ) /* To prevent double declaration */
#error DCM_0X28_0X00_SSVC_ENABLED  already defined
#endif /* if (defined DCM_0X28_0X00_SSVC_ENABLED ) */

/** \brief Subservice 0x00 for 0x28 enabled or not */
#define DCM_0X28_0X00_SSVC_ENABLED                                         STD_ON

#if (defined DCM_0X28_0X01_SSVC_ENABLED ) /* To prevent double declaration */
#error DCM_0X28_0X01_SSVC_ENABLED  already defined
#endif /* if (defined DCM_0X28_0X01_SSVC_ENABLED ) */

/** \brief Subservice 0x01 for 0x28 enabled or not */
#define DCM_0X28_0X01_SSVC_ENABLED                                         STD_ON

#if (defined DCM_0X28_0X02_SSVC_ENABLED ) /* To prevent double declaration */
#error DCM_0X28_0X02_SSVC_ENABLED  already defined
#endif /* if (defined DCM_0X28_0X02_SSVC_ENABLED ) */

/** \brief Subservice 0x02 for 0x28 enabled or not */
#define DCM_0X28_0X02_SSVC_ENABLED                                         STD_ON

#if (defined DCM_0X28_0X03_SSVC_ENABLED ) /* To prevent double declaration */
#error DCM_0X28_0X03_SSVC_ENABLED  already defined
#endif /* if (defined DCM_0X28_0X03_SSVC_ENABLED ) */

/** \brief Subservice 0x03 for 0x28 enabled or not */
#define DCM_0X28_0X03_SSVC_ENABLED                                         STD_ON

#if (defined DCM_0X28_0X04_SSVC_ENABLED ) /* To prevent double declaration */
#error DCM_0X28_0X04_SSVC_ENABLED  already defined
#endif /* if (defined DCM_0X28_0X04_SSVC_ENABLED ) */

/** \brief Subservice 0x04 for 0x28 enabled or not */
#define DCM_0X28_0X04_SSVC_ENABLED                                         STD_OFF

#if (defined DCM_0X28_0X05_SSVC_ENABLED ) /* To prevent double declaration */
#error DCM_0X28_0X05_SSVC_ENABLED  already defined
#endif /* if (defined DCM_0X28_0X05_SSVC_ENABLED ) */

/** \brief Subservice 0x05 for 0x28 enabled or not */
#define DCM_0X28_0X05_SSVC_ENABLED                                         STD_OFF
#if (defined DCM_NUM_COMMUNICATIONCONTROL_ALL_CHANNEL) /* To prevent double declaration */
#error DCM_NUM_COMMUNICATIONCONTROL_ALL_CHANNEL already defined
#endif /* if (defined DCM_NUM_COMMUNICATIONCONTROL_ALL_CHANNEL) */

/** \brief Number of Communication Control All channels */
#define DCM_NUM_COMMUNICATIONCONTROL_ALL_CHANNEL                           1U

#if (defined DCM_NUM_COMMUNICATIONCONTROL_SPECIFIC_CHANNEL) /* To prevent double declaration */
#error DCM_NUM_COMMUNICATIONCONTROL_SPECIFIC_CHANNEL already defined
#endif /* if (defined DCM_NUM_COMMUNICATIONCONTROL_SPECIFIC_CHANNEL) */

/** \brief Number of Communication Control Specific channels */
#define DCM_NUM_COMMUNICATIONCONTROL_SPECIFIC_CHANNEL                      0U

#if (defined DCM_NUM_COMMUNICATIONCONTROL_SUBNODE_CHANNEL) /* To prevent double declaration */
#error DCM_NUM_COMMUNICATIONCONTROL_SUBNODE_CHANNEL already defined
#endif /* if (defined DCM_NUM_COMMUNICATIONCONTROL_SUBNODE_CHANNEL) */

/** \brief Number of Communication Control SubNode channels */
#define DCM_NUM_COMMUNICATIONCONTROL_SUBNODE_CHANNEL                       0U

#if (defined DCM_COMMUNICATIONCONTROL_LOOKUP_SIZE) /* To prevent double declaration */
#error DCM_COMMUNICATIONCONTROL_LOOKUP_SIZE already defined
#endif /* if (defined DCM_COMMUNICATIONCONTROL_LOOKUP_SIZE) */

/** \brief Size of array Dcm_CommunicationControlLookUpTable[] and
 **        Dcm_CommunicationControlLookUpTableComMode[].
 **
 ** If mode declaration is enabled than the DCM_COMMUNICATIONCONTROL_LOOKUP_SIZE will be equal with
 ** the number of channels referenced from RxConnections + number of channels from DcmDspComControl.
 ** If mode declaration is disable then the DCM_COMMUNICATIONCONTROL_LOOKUP_SIZE will be equal with
 ** the number of channels referenced from RxConnections.
 */
#define DCM_COMMUNICATIONCONTROL_LOOKUP_SIZE                               1U

/*==================[type definitions]===========================================================*/

/** \brief Type of SchM Switch function for DcmCommunicationControl */
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_SchMSwitchCommunicationControlFunctionType)
                                                                                       (uint8 mode);

/** \brief ComMChannel Id type for DcmDspComControlAllChannel */
typedef uint8 Dcm_CommunicationControlAllChannelType;

typedef struct
{
  /** \brief Network Id */
  uint8 ComMChannelId;

  /** \brief Subnet Number which controls the specific ComMChannel */
  uint8 SubnetNumber;
}
Dcm_CommunicationControlSpecificChannelType;

typedef struct
{
  /** \brief pointer to SchM Switch for DcmCommunicationControl */
  Dcm_SchMSwitchCommunicationControlFunctionType SchMSwitchCommunicationControl;

  /** \brief Network Id */
  uint8 ComMChannelId;
}
Dcm_CommunicationControlLookupType;

typedef struct
{
  /** \brief SubNode Id */
  uint16 SubNodeId;

  /** \brief Network Id */
  uint8 ComMChannelId;
}
Dcm_CommunicationControlSubNodeChannelType;

/*==================[external function declarations]=============================================*/

/*==================[internal function declarations]=============================================*/

/*==================[internal constants]=========================================================*/

/*==================[internal data]==============================================================*/

/*==================[external constants]=========================================================*/

#if(DCM_NUM_COMMUNICATIONCONTROL_ALL_CHANNEL > 0U)

#define DCM_START_SEC_CONST_8
#include <Dcm_MemMap.h>

/** \brief Global Array of configuration information for Communication Control All Channels.
 **        This array is used in case of a CommunicationControl request with the subnet parameter
 **        of the request equal to 0x00, for all channels the ID is taken from this array to can be
 **        found in the Dcm_CommunicationControlLookUpTable[] array.
 */
extern CONST(Dcm_CommunicationControlAllChannelType, DCM_CONST)
  Dcm_CommunicationControlAllChannel[DCM_NUM_COMMUNICATIONCONTROL_ALL_CHANNEL];

#define DCM_STOP_SEC_CONST_8
#include <Dcm_MemMap.h>
#endif

#define DCM_START_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>

#if(DCM_NUM_COMMUNICATIONCONTROL_SPECIFIC_CHANNEL > 0U)
/** \brief Global array of configuration information for Communication Control Specific Channels.
 **        This array is used in case of a CommunicationControl request with subnet parameter
 **        between 0x01 and 0x0E, the requested channel ID is taken from this array to can be found
 **        in the Dcm_CommunicationControlLookUpTable[] array.
 */
extern CONST(Dcm_CommunicationControlSpecificChannelType, DCM_CONST)
  Dcm_CommunicationControlSpecificChannel[DCM_NUM_COMMUNICATIONCONTROL_SPECIFIC_CHANNEL];
#endif

#if (DCM_NUM_COMMUNICATIONCONTROL_SUBNODE_CHANNEL > 0U)
/** \brief Global array of configuration information for Communication Control SubNode Channels.
 **        This array is used in case of a CommunicationControl request with sub-function
 **        enableRxAndDisableTxWithEnhancedAddressInformation(0x04) or
 **        enableRxAndTxWithEnhancedAddressInformation(0x05), the channel ID is taken from this
 **        array to can be found in the Dcm_CommunicationControlLookUpTable[] array according with
 **        requested SubNodeId.
 */
extern CONST(Dcm_CommunicationControlSubNodeChannelType, DCM_CONST)
                         Dcm_CommunicationControlSubNodeChannel[DCM_NUM_COMMUNICATIONCONTROL_SUBNODE_CHANNEL];
#endif

#if(DCM_COMMUNICATIONCONTROL_LOOKUP_SIZE > 0U)
/** \brief Global array holding the ComM channels ID referenced from RxConnections and from
 **        DcmDspComControl(SpecificChannels/AllChannels/SubNodeChannels).
 **        This array is used to search the requested channel. Always when the communication
 **        mode is changed(0x28 request or communication control mode rule fail or session change)
 **        the channel is searched in this array and the same index on which it is found is changed
 **        with the request communication mode in the Dcm_CommunicationControl_CommunicationMode[]
 **        array.
 */
extern CONST(Dcm_CommunicationControlLookupType, DCM_CONST)
                          Dcm_CommunicationControlLookUpTable[DCM_COMMUNICATIONCONTROL_LOOKUP_SIZE];
#endif


#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h>


/*==================[external data]==============================================================*/

/*==================[external function definitions]==============================================*/

/*==================[internal function definitions]==============================================*/

#endif /* ifndef DCM_COMMUNICATIONCONTROL_CFG_H */
/*==================[end of file]================================================================*/
