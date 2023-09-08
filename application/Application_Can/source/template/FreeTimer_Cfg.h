/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       EB Module FreeTimer
*
*  Configuration file for the FreeTimer
*
*  \project     EB solutions for Essentials
*
*  \par         To be changed by user:
*               yes
*
*  \copyright   Elektrobit Automotive GmbH 2021
*
*  \version     1.0.0
*
*  \remarks     ---
*
*/
/*----------------------------------------------------------------------------*/

#ifndef FREETIMER_CFG_H
#define FREETIMER_CFG_H

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <Std_Types.h>   /* AUTOSAR Standard Types       */

/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/*
 * \brief Major version of the module
 */
#define FREETIMER_CFG_MAJOR_VERSION  (1u)

/**
 * \brief Minor version of the module
 */
#define FREETIMER_CFG_MINOR_VERSION  (0u)

/*
 * \brief Patch version of the module
 */
#define FREETIMER_CFG_PATCH_VERSION  (0u)

/*
 * \brief Timer clock frequency of the used timer source in Hz
 */
#define OS_TIMESTAMP_INPUT_FREQ_HZ  50000000U /* 50 MHz */

/*
 * \brief Shift value for timer value
 */
#define FREETIMER_FREQ_SHIFT   0U

/**
 * \brief Timer Counter has 32Bits
 */
#define MAX_RELOAD_TIME            (0xFFFFFFFFu)


/*------------------------------------------------------------------------------
                      Data Types
-------------------------------------------------------------------------------*/

/* empty */

#endif /* FREETIMER_CFG_H */
/*--- End of file ------------------------------------------------------------*/

