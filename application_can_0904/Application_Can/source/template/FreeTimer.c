/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       EB Module FreeTimer
*
*  Free running Timer for time measurement
*
*  \project     EB solutions for Essentials
*
*  \par         To be changed by user:
*               no
*
*  \copyright   Elektrobit Automotive GmbH 2021
*
*  \version     1.0.0
*
*  \remarks
*
*/
/*----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      MISRA-Deviations
-------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 19.1: including MemMap.h is necessary throughout the
   file according to memory abstraction */

/* MISRA-C:2004 Rule 19.6: #undef is necessary throughout the file according to
   memory abstraction */


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <Std_Types.h>                    /* AUTOSAR Standard Types            */
#include "FreeTimer_Cfg.h"
#include "FreeTimer.h"                    /* Own header file                   */
#include <Os.h>
#include <Os_config.h>
#include <Os_timestamp.h>


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/**
 * \brief Converts given ms to ticks, for the configured timer frequency
 */
#define FreeTimer_TimestampMsToTicks(ms) \
      ( ms * ((OS_TIMESTAMP_INPUT_FREQ_HZ >> FREETIMER_FREQ_SHIFT) / 1000U) )

/**
 * \brief Converts given ticks to ms, for the configured timer frequency
 */
#define FreeTimer_TimestampTicksToMs(ticks) \
   ( ticks / ((OS_TIMESTAMP_INPUT_FREQ_HZ >> FREETIMER_FREQ_SHIFT) / 1000U) )

/**
 * \brief Converts given ticks to ms, for the configured timer frequency
 */
#define FreeTimer_TimestampTicksToUs(ticks) ( ticks / (OS_TIMESTAMP_INPUT_FREQ_HZ /1000000))

/**
 * \brief Major version of the module
 */
#define EXPECTED_FREETIMER_MAJOR_VERSION (1u)

/**
 * \brief Minor version of the module
 */
#define EXPECTED_FREETIMER_MINOR_VERSION (0u)

/**
 * \brief Patch version of the module
 */
#define EXPECTED_FREETIMER_PATCH_VERSION (0u)

/* Version compare header and source file */
#if ( ( FREETIMER_MAJOR_VERSION != EXPECTED_FREETIMER_MAJOR_VERSION ) ||  \
      ( FREETIMER_MINOR_VERSION != EXPECTED_FREETIMER_MINOR_VERSION ) ||  \
      ( FREETIMER_PATCH_VERSION != EXPECTED_FREETIMER_PATCH_VERSION )     \
    )
   #error "The version of FreeTimer.h does not match to the version of FreeTimer.c"
#endif

/* Version compare config header and source file */
#if ( ( FREETIMER_CFG_MAJOR_VERSION != EXPECTED_FREETIMER_MAJOR_VERSION ) ||  \
      ( FREETIMER_CFG_MINOR_VERSION != EXPECTED_FREETIMER_MINOR_VERSION ) ||  \
      ( FREETIMER_CFG_PATCH_VERSION != EXPECTED_FREETIMER_PATCH_VERSION )     \
    )
   #error "The version of FreeTimer_Cfg.h does not match to the version of FreeTimer.c"
#endif


/*------------------------------------------------------------------------------
                      Global Variables
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Constants
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Data Types
-------------------------------------------------------------------------------*/

/* empty */

/*------------------------------------------------------------------------------
                      Local Variables
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Constants
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Functions Prototypes
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Functions
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Functions
-------------------------------------------------------------------------------*/

#define FreeTimer_START_SEC_CODE
#include "MemMap.h"

/*----------------------------------------------------------------------------*/
/**
 * \brief Get value of OsTimeStampTimer in ticks.
 *
 * This function gets the value of the hw-counter from the OsTimeStampTimer.
 *
 * \global none
 *
 * \retval FreeTimer_TimeInTicksType CounterValue
 *
 * \pre none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/

FUNC( FreeTimer_TimeInTicksType, FreeTimer_CODE ) FreeTimer_GetCurrentTimeInTicks
(
   void
)
{
   os_timestamp_t CounterValue;
   uint32 RetVal = 0U;
   
   /* get value from OsTimeStampTimer */
   OS_GetTimeStamp(&CounterValue);
   
   /* shift bits to scale the timer resolution down */
   RetVal |= ((OS_TimeGetHi(CounterValue)) << (32U - FREETIMER_FREQ_SHIFT));
   RetVal |= ((OS_TimeGetLo(CounterValue)) >> FREETIMER_FREQ_SHIFT);
   
   return RetVal;

} /* end of function FreeTimer_GetCurrentTimeInTicks */

/*----------------------------------------------------------------------------*/
/**
 * \brief Initialize the FreeTimer
 *
 * This function initialize and starts the free running timer.
 *
 * \global none
 *
 * \retval none
 *
 * \pre none
 *
 * \post none
 *
 * \remarks none
 */
/*----------------------------------------------------------------------------*/

FUNC( void, FreeTimer_CODE ) FreeTimer_Init
(
   void
)
{
  /* currently nothing to initialize */

} /* end of function FreeTimer_Init */



/*----------------------------------------------------------------------------*/
/**
 * \brief Start FreeTimer
 *
 * Saves the current value of the timer register.
 *
 * \global none
 *
 * \param[out] initialTimeInTicks Initial Time in ticks
 *
 * \pre none
 *
 * \post none
 *
 * \remarks none
 */
/*----------------------------------------------------------------------------*/

FUNC( void, FreeTimer_CODE ) FreeTimer_StartTimeMeasurement
(
   P2VAR(FreeTimer_TimeInTicksType, AUTOMATIC, FreeTimer_APPL_DATA) initialTimeInTicks
)
{
   *initialTimeInTicks = FreeTimer_GetCurrentTimeInTicks();
} /* end of function FreeTimer_StartTimeMeasurement */



/*----------------------------------------------------------------------------*/
/**
 * \brief Difference time
 *
 * Returns the elapsed time since the last call of FreeTimer_StartTimeMeasurement.
 *
 * \global none
 *
 * \param[in] initialTimeInTicks Initial Time in ticks given by FreeTimer_StartTimeMeasurement()
 *
 * \retval Time in ticks
 *
 * \pre none
 *
 * \post none
 *
 * \remarks none
 */
/*----------------------------------------------------------------------------*/

FUNC( FreeTimer_TimeInTicksType, FreeTimer_CODE ) FreeTimer_GetTimeInTicks
(
   FreeTimer_TimeInTicksType initialTimeInTicks
)
{
   const FreeTimer_TimeInTicksType elapsedTimeInTicks = FreeTimer_GetCurrentTimeInTicks();

   return ( (FreeTimer_TimeInTicksType)
              ( elapsedTimeInTicks - initialTimeInTicks )
          );
} /* end of function FreeTimer_GetTimeInTicks */



/*----------------------------------------------------------------------------*/
/**
 * \brief Converts time from milliseconds to ticks
 *
 * \global none
 *
 * \param[in] Ticks   Time in milliseconds
 *
 * \retval Time in ticks
 *
 * \pre none
 *
 * \post none
 *
 * \remarks none
 */
/*----------------------------------------------------------------------------*/


FUNC( FreeTimer_TimeInTicksType, FreeTimer_CODE ) FreeTimer_ConvertMs2Ticks
(
   CONST ( FreeTimer_TimeInMsType, FreeTimer_CONST ) timeInMs
)
{
   return ( FreeTimer_TimestampMsToTicks( timeInMs ) );
} /* end of function FreeTimer_ConvertMs2Ticks */



/*----------------------------------------------------------------------------*/
/**
 * \brief Converts ticks to milliseconds
 *
 * \global none
 *
 * \param[in] Ticks   Time in ticks
 *
 * \retval Time in milliseconds
 *
 * \pre none
 *
 * \post none
 *
 * \remarks none
 */
/*----------------------------------------------------------------------------*/

FUNC( FreeTimer_TimeInMsType, FreeTimer_CODE ) FreeTimer_ConvertTicks2Ms
(
   CONST ( FreeTimer_TimeInTicksType, FreeTimer_CONST ) timeInTicks
)
{
   return ( FreeTimer_TimestampTicksToMs(timeInTicks) );
} /* end of function FreeTimer_ConvertTicks2Ms */


/*----------------------------------------------------------------------------*/
/**
 * \brief Converts ticks to microseconds
 *
 * \global none
 *
 * \param[in] Ticks   Time in ticks
 *
 * \retval Time in microseconds
 *
 * \pre none
 *
 * \post none
 *
 * \remarks none
 */
/*----------------------------------------------------------------------------*/
FUNC( FreeTimer_TimeInUsType, FreeTimer_CODE ) FreeTimer_ConvertTicks2Us
(
   CONST ( FreeTimer_TimeInTicksType, FreeTimer_CONST ) timeInTicks
)
{
   return ( FreeTimer_TimestampTicksToUs(timeInTicks) );
} /* end of function FreeTimer_ConvertTicks2Us */

#define FreeTimer_STOP_SEC_CODE
#include "MemMap.h"

/*--- End of file ------------------------------------------------------------*/
