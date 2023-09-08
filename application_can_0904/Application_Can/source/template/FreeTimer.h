/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       EB Module FreeTimer
*
*  Public interface for the FreeTimer
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
*  \remarks     ---
*
*/
/*----------------------------------------------------------------------------*/

#ifndef FREETIMER_H
#define FREETIMER_H

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <Std_Types.h>                      /* AUTOSAR Standard Types         */
#include "Dcm_Types.h"                      /* AUTOSAR DCM Types              */
#include "FreeTimer_Cfg.h"


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/**
 * \brief Major version of the module
 */
#define FREETIMER_MAJOR_VERSION  (1u)

/**
 * \brief Minor version of the module
 */
#define FREETIMER_MINOR_VERSION  (0u)

/**
 * \brief Patch version of the module
 */
#define FREETIMER_PATCH_VERSION  (0u)


/*------------------------------------------------------------------------------
                      Data Types
-------------------------------------------------------------------------------*/

typedef uint32 FreeTimer_TimeInTicksType;                /* Time in ticks type */
typedef uint32 FreeTimer_TimeInMsType;                           /* Time in mS */
typedef uint32 FreeTimer_TimeInUsType;       /* Time in µS */


/*------------------------------------------------------------------------------
                      Global Variables
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Constants
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Function Declarations
-------------------------------------------------------------------------------*/

#define FreeTimer_START_SEC_CODE
#include "MemMap.h"

extern FUNC( void, FreeTimer_CODE ) FreeTimer_Init
(
   void
);

extern FUNC( FreeTimer_TimeInTicksType, FreeTimer_CODE ) FreeTimer_GetCurrentTimeInTicks
(
   void
);

extern FUNC( void, FreeTimer_CODE ) FreeTimer_StartTimeMeasurement
(
   P2VAR(FreeTimer_TimeInTicksType, AUTOMATIC, FreeTimer_APPL_DATA) initialTimeInTicks
);

extern FUNC( FreeTimer_TimeInTicksType, FreeTimer_CODE ) FreeTimer_GetTimeInTicks
(
   FreeTimer_TimeInTicksType initialTimeInTicks
);

extern FUNC( FreeTimer_TimeInTicksType, FreeTimer_CODE ) FreeTimer_ConvertMs2Ticks
(
   CONST ( FreeTimer_TimeInMsType, FreeTimer_CONST ) timeInMs
);

extern FUNC( FreeTimer_TimeInMsType, FreeTimer_CODE ) FreeTimer_ConvertTicks2Ms
(
   CONST ( FreeTimer_TimeInTicksType, FreeTimer_CONST ) timeInTicks
);

extern FUNC( FreeTimer_TimeInUsType, FreeTimer_CODE ) FreeTimer_ConvertTicks2Us
(
   CONST ( FreeTimer_TimeInTicksType, FreeTimer_CONST ) timeInTicks
);


#define FreeTimer_STOP_SEC_CODE
#include "MemMap.h"

               
#endif /* FREETIMER_H */
/*--- End of file ------------------------------------------------------------*/

