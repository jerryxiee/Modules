/*
* Copyright (c) File,SHENZHEN HANGSHENG NEW ENERGY Co.,Ltd.
* All Rights Reserved.
* Dept.: Software Department
* File:nvmBlockInfo.h
* Description: This is a readonly file generated by HSNE tools and can't be modified manually for NVM Block module. 
* REQ IDs: 
* History:
* Time:2020-03-23 19:10:39
* User:Devon
*/

/* ---- Source switch on ------------------------------------------------------*/
#ifndef NVM_BLOCK_INFO_H_
#define NVM_BLOCK_INFO_H_

/*------------------------------------------------------------------------------
 					Include files
------------------------------------------------------------------------------*/
#include "hs_types.h"

/*------------------------------------------------------------------------------
                             Defines and constants
------------------------------------------------------------------------------*/
#define m_DNTC_APP_VARS (0)
#define m_UDS_DID_DATA (1)
#define m_CCP_DATA (2)
#define m_DNTC_FUN_CFG (3)
#define m_RTC_TIMELAST (4)
#define m_DNTC_APP_VARS_bkUp (5)
#define m_UDS_DID_DATA_bkUp (6)

#define m_DNTC_PERIOD_DATA (7)
#define m_DNTC_PERIOD_DATA_bkUp (8)
#define m_DNTC_IMME_DATA_DTC (9)
#define m_DNTC_IMME_DATA_DTC_bkUp (10)
#define m_nvmBlockCnt (11)
#define m_ramCopyAddr (0x40000400)



               
/*------------------------------------------------------------------------------
                                   Data types
------------------------------------------------------------------------------*/
typedef struct
{
    hs_u4_t id;
    hs_u4_t eeAddr;
    hs_u4_t dtLen;
    hs_u4_t ramAddr;
    hs_u4_t ramAddrCpy;
    hs_u1_t bkUpBlock;
    hs_BOOL imdt;
    hs_BOOL major;
    hs_BOOL backUp;
}nvmBlockInfo_t;


/*------------------------------------------------------------------------------
                      External declaration of global RAM-Variables
------------------------------------------------------------------------------*/
extern hs_u1_t RTC_OffTimeLast[8];
extern hs_BOOL nvmBlockDirty[m_nvmBlockCnt];


/*------------------------------------------------------------------------------
                      External declaration of global ROM-Variables
------------------------------------------------------------------------------*/
extern const nvmBlockInfo_t nvmBlockInfoGrp[m_nvmBlockCnt];
extern const hs_u1_t nvmBlockCnt;




/*------------------------------------------------------------------------------
                    External declaration of global EEPROM-Variables
------------------------------------------------------------------------------*/



/*------------------------------------------------------------------------------
                              Declaration of global functions
------------------------------------------------------------------------------*/
extern void anv_defDtInit(void);
extern hs_u1_t eeh_getBlkSt(hs_u1_t block);
extern void anv_modifyReq(hs_u1_t block);


#endif
