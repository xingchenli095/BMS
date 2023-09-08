/*
*   (c) Copyright 2020 NXP
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be used strictly
*   in accordance with the applicable license terms.  By expressly accepting
*   such terms or by downloading, installing, activating and/or otherwise using
*   the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms.  If you do not agree to
*   be bound by the applicable license terms, then you may not retain,
*   install, activate or otherwise use the software.
*
*   This file contains sample code only. It is not part of the production code deliverables.
*/
/**/
#include "Can.h"
#include "Port.h"
#include "SchM_Can.h"
#include "Det.h"

Can_PduType Can_PduInfo;
uint8 Can_au8Sdu8bytes[8U] = {0x01U, 0x02U, 0x03U, 0x04U, 0x05U, 0x06U, 0x07U, 0x08};
uint8 Can_au8SduSpoofingCommand[6U] = {0U};
uint8 u8TimeOut = 100U;
Can_HwHandleType currentHwMBIndex;
uint8 Can_au8SduLeavingConfigurationCommand[8U] = {0x0U, 0x0U, 0x03U, 0x04U, 0x05U, 0x06U, 0x07U, 0x08};
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

#define T_CAN_EXTENDED_ID                       0x80000000U
#define T_CAN_FD_STANDARD_ID                    0x40000000U
#define T_CAN_FD_EXTENDED_ID                    0xC0000000U

#define TJA1153_ID                              0x18DA00F1
#define TJA1153_FET_STANDARD_ID_FILTER          0x0
#define TJA1153_SFC_CLASSIC_FILTER                  0x2
#define TJA1153_TPL_DO_NOT_ADD_TO_TRANMISSION_PASSLIST  0x0
#define TJA1153_TPL_ADD_TO_TRANMISSION_PASSLIST     0x1
#define TJA1153_BBL_DO_NOT_ADD_TO_BUS_BLOCKLIST     0x0
#define TJA1153_FET_EXTENDED_ID_FILTER              0x1
#define TJA1153_EFC_INTERPRET_EFID_AS_MASK          0x0
#define TJA1153_EFC_TRANSMISSION_PASSLIST_ENABLED   0x2

void Can_DummyDelay(uint32 loops)
{
    VAR( volatile uint32, CAN_VAR) data = 0xAA55AA55;
    VAR( volatile uint32, CAN_VAR) contor1 = 0;
    VAR( volatile uint32, CAN_VAR) contor2 = loops;

    do
    {
        for (contor1 = 0; contor1 < 0x2FF; contor1++)
        {
            data ^= (1 << contor1) | (0xAAAAAA | contor2);
        }
        contor2--;
    } while( contor2 > 0);
}

Can_PduType Can_CreatePduInfo(Can_IdType id, PduIdType swPduHandle, uint8 length, uint8* sdu)
{
    Can_PduType PduInfo;
    
    PduInfo.id = id;
    PduInfo.swPduHandle = swPduHandle;
    PduInfo.length = length;
    PduInfo.sdu = sdu;
    
    return PduInfo;
}

Std_ReturnType Can_SendFrameAndWaitACK(void)
{
    u8TimeOut = 9;
	/*1U from Can_Write represent the HOH_1_EcuTestNode*/
    if(Can_Write(14U, &Can_PduInfo) == E_OK)
    {
        while((u8TimeOut != 0U))
        {
            Can_DummyDelay(10U);
            u8TimeOut--;
        }
        return E_OK;
    }
    else
    {
        return E_NOT_OK;
    }
}

Std_ReturnType TJA1153_EnterConfigurationMode(void)
{

    /* Send auto baud-rate detection request frame - StandardID: 0x555 */
    Can_PduInfo = Can_CreatePduInfo(0x555, 0U, 8U, Can_au8Sdu8bytes);

    return Can_SendFrameAndWaitACK();
}


Std_ReturnType TJA1153_ConfigureStandardFilterAndMask(uint32 StandardFilter, uint32 StandardMask)
{
    Can_au8SduSpoofingCommand[0] = 0x10;    /* Byte 0: command ID - spoofing configuration */
    Can_au8SduSpoofingCommand[1] = 0x00;    /* Byte 1: filter element ID #0 */
    Can_au8SduSpoofingCommand[2] = (TJA1153_FET_STANDARD_ID_FILTER << 7 | \
                                    TJA1153_SFC_CLASSIC_FILTER << 5 | \
                                    TJA1153_TPL_ADD_TO_TRANMISSION_PASSLIST << 4 |
                                    TJA1153_BBL_DO_NOT_ADD_TO_BUS_BLOCKLIST << 3 |
                                    ((uint8)(StandardFilter >> 8)) );
    Can_au8SduSpoofingCommand[3] = (uint8)(StandardFilter & 0xFF);
    Can_au8SduSpoofingCommand[4] = (TJA1153_TPL_DO_NOT_ADD_TO_TRANMISSION_PASSLIST << 4 |
                                    TJA1153_BBL_DO_NOT_ADD_TO_BUS_BLOCKLIST << 3 |
                                    ((uint8)(StandardMask >> 8)) );
    Can_au8SduSpoofingCommand[5] = (uint8)(StandardMask & 0xFF);

    Can_PduInfo = Can_CreatePduInfo(TJA1153_ID | T_CAN_EXTENDED_ID, 0U, 6U, Can_au8SduSpoofingCommand);

    return Can_SendFrameAndWaitACK();
}

Std_ReturnType TJA1153_ConfigureExtendedFilterAndMask(uint32 ExtendedFilter, uint32 ExtendedMask)
{
    Std_ReturnType eStatus;

    Can_au8SduSpoofingCommand[0] = 0x10;    /* Byte 0: command ID - spoofing configuration */
    Can_au8SduSpoofingCommand[1] = 0x01;    /* Byte 1: filter element ID #1 */
    Can_au8SduSpoofingCommand[2] = (TJA1153_FET_EXTENDED_ID_FILTER << 7 | \
                                    TJA1153_EFC_INTERPRET_EFID_AS_MASK << 5 | \
                                    ((uint8)(ExtendedMask >> 24)) );
    Can_au8SduSpoofingCommand[3] = (uint8)((ExtendedMask & 0xFF0000) >> 16);
    Can_au8SduSpoofingCommand[4] = (uint8)((ExtendedMask & 0x00FF00) >> 8);
    Can_au8SduSpoofingCommand[5] = (uint8)(ExtendedMask & 0xFF);

    Can_PduInfo = Can_CreatePduInfo(TJA1153_ID | T_CAN_EXTENDED_ID, 0U, 6U, Can_au8SduSpoofingCommand);

    eStatus = Can_SendFrameAndWaitACK();

    Can_au8SduSpoofingCommand[0] = 0x10;    /* Byte 0: command ID - spoofing configuration */
    Can_au8SduSpoofingCommand[1] = 0x02;    /* Byte 1: filter element ID #2 */
    Can_au8SduSpoofingCommand[2] = (TJA1153_FET_EXTENDED_ID_FILTER << 7 | \
                                    TJA1153_EFC_TRANSMISSION_PASSLIST_ENABLED << 5 | \
                                    ((uint8)(ExtendedFilter >> 24)) );
    Can_au8SduSpoofingCommand[3] = (uint8)((ExtendedFilter & 0xFF0000) >> 16);
    Can_au8SduSpoofingCommand[4] = (uint8)((ExtendedFilter & 0x00FF00) >> 8);
    Can_au8SduSpoofingCommand[5] = (uint8)(ExtendedFilter & 0xFF);

    Can_PduInfo = Can_CreatePduInfo(TJA1153_ID | T_CAN_EXTENDED_ID, 0U, 6U, Can_au8SduSpoofingCommand);

    eStatus |= Can_SendFrameAndWaitACK();

    return eStatus;
}

Std_ReturnType TJA1153_ExitConfigurationlMode(void)
{
    Can_au8SduLeavingConfigurationCommand[0] = 0x71;    /* Byte 0: command ID - configuration written to volatile only */
    Can_au8SduLeavingConfigurationCommand[1] = 0x02;    /* Byte 1: CONFIG_EN_FLAG - config enable timer running */

    Can_PduInfo = Can_CreatePduInfo(TJA1153_ID | T_CAN_EXTENDED_ID, 0U, 8U, Can_au8SduLeavingConfigurationCommand);

    return Can_SendFrameAndWaitACK();
}

void Eb_Intgr_CanTrcv_Device_Init(void)
{
    /*config for TJA1153 connect to controller 0*/
    IP_SIUL2->GPDO84 = 0x0;
    TJA1153_EnterConfigurationMode();
    TJA1153_ConfigureStandardFilterAndMask(0x0, 0x7FF);
    TJA1153_ConfigureExtendedFilterAndMask(0x0, 0x1FFFFFFF);
    TJA1153_ExitConfigurationlMode();
    IP_SIUL2->GPDO84 = 0x1;

}