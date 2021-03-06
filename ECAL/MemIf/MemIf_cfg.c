/******************************************************
闂佸搫鍊稿ú锝呪枎閵忋倕瑙︾�广儱绻掔粣锟組emIf_cfg.c
闂佺顕х换妤呭醇椤忓牊鏅柨鐕傛嫹
Data			Vasion			author
2020/8/25		V1.0			liujian
*******************************************************/

/*******************************************************
description闂佹寧鍐婚幏绌抧clude the header file
*******************************************************/
#include "MemIf_cfg.h"

extern void AppInit_AfterBSW(void);
/*******************************************************
description闂佹寧鍐婚幏绌弆obal variable definitions
*******************************************************/
const EepromCfg_ConfStruct    CaEepromCfg_Conf[EE_OBJECT_NUM] = 
{
	
	{EepromCfg_InDflash,EE_OBD_DIAG_ADDR,EE_OBD_DIAG_LNG},
	{EepromCfg_InDflash,EE_APP_HASH_RESULT_ADDR,EE_APP_HASH_RESULT_LNG},
	{EepromCfg_InDflash,EE_HASH_INFO_ADDR,EE_HASH_INFO_LNG},
	{EepromCfg_InDflash,EE_WR_UPDDATE_FLAG_ADDR,EE_WR_UPDDATE_FLAG_LNG},
	{EepromCfg_InDflash,EE_WR_FINGERPRINT_ADDR,EE_WR_FINGERPRINT_LNG},
	{EepromCfg_InDflash,EE_WR_VIN_ADDR,EE_WR_VIN_LNG},
	{EepromCfg_InDflash,EE_WR_TOWMODE_ADDR,EE_WR_TOWMODE_LNG},
};


const EepromCfg_ccp_ConfStruct EepromCfg_ccp =
{//(dtLen + 16) & 0x7 == 0
	/*id            m_eeAddr        bk_eeAdr   dtLen    ramAddr                   ramAddrCpy      */
	0x0095F900,    0x00808000,   0x00810000,   (32704 -EEPROM_CCP_DATA_OFFSET),    (uint32_t)0x40000000,      0x40008000,
};


const EepromCfg_uds_ConfStruct EepromCfg_uds =
{//(dtLen + 16) & 0x7 == 0
	/*id            m_eeAddr        bk_eeAdr   dtLen    ramAddr                   ramAddrCpy      */
	0x0095F9AA,    0x00804000,   0x00810000,   (16304 -EEPROM_UDS_DATA_OFFSET),    (uint32_t)0x40010000,      0x40008000,
};
/*******************************************************
description闂佹寧鍐婚幏绌漷atic variable definitions
*******************************************************/


/*******************************************************
description闂佹寧鍐婚幏绌巙nction declaration
*******************************************************/
/*Global function declaration*/


/*Static function declaration*/



void MemIfCfg_FLASH_Unlock(void)
{
	//C55FMC.LOCK0.R = 0;
	//C55FMC.LOCK1.R = 0;
	//C55FMC.LOCK2.R = 0;
	//C55FMC.LOCK3.R = 0;
}

void MemIfCfg_FLASH_Lock(void)
{
	//C55FMC.LOCK0.R = 0xFFFFFFFF;
}

void MemIfCfg_FLASH_erase(uint8_t indx)
{
	switch(indx)
	{
		case 0:
		{
			flash_eraseBlockByStartAddr(EEPROM_MAIN_START_ADDR);
		}
		break;
		case 1:
		{
			flash_eraseBlockByStartAddr(EEPROM_MAIN_UDS_START_ADDR);
		}
		break;
		case 2:
		{
			flash_eraseBlockByStartAddr(EEPROM_MAIN_CCP_START_ADDR);
		}
		break;
		case 3:
		{
			flash_eraseBlockByStartAddr(EEPROM_BKUP_START_ADDR);
		}
		break;
		default:
		break;
	}
}


void MemIfCfg_FLASH_ProgramByte(uint32_t Address, uint8_t Data)
{
	C55FMC.MCR.B.PGM = 1;
	*(uint8_t*)Address = Data;
	C55FMC.MCR.B.EHV = 1;
	while(C55FMC.MCR.B.DONE == 0);
    while(C55FMC.MCR.B.PEG == 0)  /*  confirm PEG*/
	C55FMC.MCR.B.EHV = 0;
	C55FMC.MCR.B.PGM = 0;
}


uint8_t MemIfCfg_FLASH_ReadByte(uint32_t Le_u_Addr)
{
	return *((uint8_t*)Le_u_Addr);
}

uint8_t  MemIfCfg_FLASH_ProgramDWord(uint32_t Address, uint8_t *Data ,uint16_t len)
{
	return (flash_program(Address,Data,len));
}


uint32_t MemIfCfg_FLASH_ReadDWord(uint32_t Le_u_Addr)
{
	return *((uint32_t*)Le_u_Addr);
}

void MemIfCfg_recvStorageCb(void)
{
	AppInit_AfterBSW();
}


