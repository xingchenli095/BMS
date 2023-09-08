/**
 * \file
 *
 * \brief AUTOSAR WdgM
 *
 * This file contains the implementation of the AUTOSAR
 * module WdgM.
 *
 * \version 6.1.42
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
/*
 * Misra-C:2012 Deviations:
 *
 * MISRAC2012-1) Deviated Rule: 8.3 (required)
 * All declarations of an object or function shall use the same names and type qualifiers.
 *
 * Reason:
 * AUTOSAR provides the specification of a PortDefinedArgumentValue via
 * a RunnableEntityArgument only till version 4.0.3. In older versions,
 * this specification was not possible leading to the generation
 * of vendor-specific argument names which may differ to the argument names
 * defined in the BSW.
 */


/* Avoid empty translation unit according to ISO C90 */
typedef void TSPreventEmptyTranslationUnit_WdgMRteLcfg_Type;

/*==================[end of file]================================================================*/
