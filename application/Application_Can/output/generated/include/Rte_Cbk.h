#ifndef RTE_CBK_H
#define RTE_CBK_H
/**
 * \file
 *
 * \brief AUTOSAR Rte
 *
 * This file contains the implementation of the AUTOSAR
 * module Rte.
 *
 * \version 6.8.4
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*
 * This file contains Rte callback declarations
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Wed Oct 11 14:59:36 CST 2023. !!!IGNORE-LINE!!!
 */

/*
 * \addtogroup Rte Runtime Environment
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ==================[Declaration of functions with external linkage]========= */
/* ------------------[COM callbacks]------------------------------------------ */
extern FUNC(void, RTE_CODE) Rte_COMCbkTAck_SGPBSoCAbsolute_323T (void);
extern FUNC(void, RTE_CODE) Rte_COMCbkTErr_SGPBSoCAbsolute_323T (void);
extern FUNC(void, RTE_CODE) Rte_COMCbkTxTOut_SGPBSoCAbsolute_323T (void);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
