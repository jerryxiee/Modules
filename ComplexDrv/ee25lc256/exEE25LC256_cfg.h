/*
* Copyright (c) File 2016-08-11,SHENZHEN HANGSHENG NEW ENERGY Co.,Ltd.
* All Rights Reserved.
* Dept.: Software Department
* File:exEE25LC256.h
* Description:
* REQ IDs:
* History:
* 2016-10-06,Jimmy Draft version
*/

/* ---- Source switch on ------------------------------------------------------*/
#ifndef EXEE_25LC256_CFG_H_
#define EXEE_25LC256_CFG_H_


/*------------------------------------------------------------------------------
 					Include files
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                             Defines and constants
------------------------------------------------------------------------------*/
#define m_ee256_spiModule			m_spi_module3
#define m_ee256_readSize			(0u)			/*0 means read all one-time*/
#define m_ee256_writePageSize		(64u)

#define m_ee256_readAllOneTime		(m_ee256_readSize <= 0)

#define m_ee256_handleFreqTimes		1

/*------------------------------------------------------------------------------
                                   Data types
------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
                      External declaration of global RAM-Variables
------------------------------------------------------------------------------*/




/*------------------------------------------------------------------------------
                      External declaration of global ROM-Variables
------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
                    External declaration of global EEPROM-Variables
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                              Declaration of global functions
------------------------------------------------------------------------------*/


#endif





