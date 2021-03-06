/******************************************************
闂佸搫鍊稿ú锝呪枎閵忋倕瑙︾�广儱绻掔粣锟組emIf_cfg.h
闂佺顕х换妤呭醇椤忓牊鏅柨鐕傛嫹Data			  Vasion			author
2020/8/25		V1.0			liujian
*******************************************************/
#ifndef		MEMIF_CFG_H
#define		MEMIF_CFG_H
/*******************************************************
description?nclude the header file
*******************************************************/
#include "MPC5744P.h"
#include "flash.h"
#include "utils.h"
#include "global_var.h"
#include "mc33907.h"
/*******************************************************
description?acro definitions
*******************************************************/
/**********闁诲海鎳撶换鎰閹达箑绀傞柛鎰皺閺嗘澘鈽夐弮鎾村******/
#define EE_EXT_WATCHDOG_EN	1

/**********闁诲海鎳撶换鎰版偉閸洘鐓傞煫鍥ㄦ尵閺嗘澘鈽夐弮鎾村******/
/********************************************************/
#define EE_STRGOBJ_INDFLASH           1

#define EEPROM_MAIN_START_ADDR       0x00800000//
#define EEPROM_MAIN_UDS_START_ADDR   0x00804000//
#define EEPROM_MAIN_CCP_START_ADDR   0x00808000//
#define EEPROM_BKUP_START_ADDR       0x00810000//

#define EE_BKUP_BUF_LEN 16304

/********************************************************/

#define EE_OBJECT_TOTALBUF           512U

#define EE_CHECKSUM_LNG		4U

#define EE_OBD_DIAG_OFFSET     EE_CHECKSUM_LNG
#define EE_OBD_DIAG_LNG        15U
#define EE_OBD_DIAG_ADDR       (0 +EE_OBD_DIAG_OFFSET)


#define EE_APP_HASH_RESULT_OFFSET     		(EE_OBD_DIAG_OFFSET + EE_OBD_DIAG_LNG)
#define EE_APP_HASH_RESULT_LNG     			20U
#define EE_APP_HASH_RESULT_ADDR       		(0 +EE_APP_HASH_RESULT_OFFSET)

#define EE_HASH_INFO_OFFSET     (EE_APP_HASH_RESULT_OFFSET + EE_APP_HASH_RESULT_LNG)
#define EE_HASH_INFO_LNG     	20U
#define EE_HASH_INFO_ADDR       (0 +EE_HASH_INFO_OFFSET)

#define EE_WR_UPDDATE_FLAG_OFFSET     (EE_HASH_INFO_OFFSET + EE_HASH_INFO_LNG)
#define EE_WR_UPDDATE_FLAG_LNG     		8U
#define EE_WR_UPDDATE_FLAG_ADDR       (0 +EE_WR_UPDDATE_FLAG_OFFSET)

#define EE_WR_FINGERPRINT_OFFSET     (EE_WR_UPDDATE_FLAG_OFFSET + EE_WR_UPDDATE_FLAG_LNG)
#define EE_WR_FINGERPRINT_LNG     	10U
#define EE_WR_FINGERPRINT_ADDR       (0 +EE_WR_FINGERPRINT_OFFSET)

#define EE_WR_VIN_OFFSET     (EE_WR_FINGERPRINT_OFFSET + EE_WR_FINGERPRINT_LNG)
#define EE_WR_VIN_LNG     	17U
#define EE_WR_VIN_ADDR       (0 +EE_WR_VIN_OFFSET)

#define EE_WR_TOWMODE_OFFSET     (EE_WR_VIN_OFFSET + EE_WR_VIN_LNG)
#define EE_WR_TOWMODE_LNG     	1U
#define EE_WR_TOWMODE_ADDR       (0 +EE_WR_TOWMODE_OFFSET)


#define EEPROM_CCP_PRJ_VER_OFFSET       0//
#define EEPROM_CCP_PRJ_VER_LNG       	8//

#define EEPROM_CCP_ID_OFFSET       	(EEPROM_CCP_PRJ_VER_OFFSET + EEPROM_CCP_PRJ_VER_LNG)//
#define EEPROM_CCP_ID_LNG       	4//

#define EEPROM_CCP_CHECKSUM_OFFSET       	(EEPROM_CCP_ID_OFFSET + EEPROM_CCP_ID_LNG)//
#define EEPROM_CCP_CHECKSUM_LNG       	4//

#define EEPROM_CCP_DATA_OFFSET		(EEPROM_CCP_CHECKSUM_OFFSET + EEPROM_CCP_CHECKSUM_LNG)//


#define EEPROM_UDS_PRJ_VER_OFFSET       0//
#define EEPROM_UDS_PRJ_VER_LNG       	4//BSW version

#define EEPROM_UDS_ID_OFFSET       	(EEPROM_UDS_PRJ_VER_OFFSET + EEPROM_UDS_PRJ_VER_LNG)//
#define EEPROM_UDS_ID_LNG       	4//

#define EEPROM_UDS_CHECKSUM_OFFSET       	(EEPROM_UDS_ID_OFFSET + EEPROM_UDS_ID_LNG)//
#define EEPROM_UDS_CHECKSUM_LNG       	4//

#define EEPROM_UDS_DATA_OFFSET		(EEPROM_UDS_CHECKSUM_OFFSET + EEPROM_UDS_CHECKSUM_LNG)//



/***********闁诲海鎳撶换鎰板吹闁秴鏋侀柨鐕傛嫹*******/

/*******************************************************
description?truct definitions
*******************************************************/

/*******************************************************
description?ypedef definitions
*******************************************************/
/*****struct definitions*****/
typedef struct
{
	uint8_t  Space;
	uint32_t Addr;
	uint8_t  Lng;
	//uint8_t  Mask;
}EepromCfg_ConfStruct;

/******enum definitions******/
typedef enum 
{
	EepromCfg_obdDiag = 0U,
	EepromCfg_appHashRet,
	EepromCfg_hashInfo,
	EepromCfg_wrUpdtFlag,
	EepromCfg_fingerPrint,
	EepromCfg_VIN,
	EepromCfg_vcutowmode,
	EE_OBJECT_NUM
}EepromCfg_StrgObject;

typedef enum 
{
	EepromCfg_IntEE = 0U,
	EepromCfg_ExtEE,
	EepromCfg_InDflash
}EepromCfg_EE_Index;
/******union definitions*****/

typedef struct
{
    uint32_t id;
    uint32_t m_eeAddr;
    uint32_t bk_eeAddr;
    uint32_t dtLen;
    uint32_t ramAddr;
    uint32_t ramAddrCpy;

}EepromCfg_ccp_ConfStruct;


typedef struct
{
    uint32_t id;
    uint32_t m_eeAddr;
    uint32_t bk_eeAddr;
    uint32_t dtLen;
    uint32_t ramAddr;
    uint32_t ramAddrCpy;

}EepromCfg_uds_ConfStruct;


/*******************************************************
description?ariable External declaration
*******************************************************/
extern const EepromCfg_ConfStruct    CaEepromCfg_Conf[EE_OBJECT_NUM];

extern const EepromCfg_ccp_ConfStruct EepromCfg_ccp;
extern const EepromCfg_uds_ConfStruct EepromCfg_uds;
/*******************************************************
description?unction External declaration
*******************************************************/
extern void  MemIfCfg_FLASH_Unlock(void);
extern void  MemIfCfg_FLASH_Lock(void);
extern void MemIfCfg_FLASH_erase(uint8_t indx);
extern void  MemIfCfg_FLASH_ProgramByte(uint32_t Address, uint8_t Data);
extern uint8_t MemIfCfg_FLASH_ReadByte(uint32_t Le_u_Addr);
extern uint8_t MemIfCfg_FLASH_ProgramDWord(uint32_t Address, uint8_t * Data ,uint16_t len);
extern uint32_t MemIfCfg_FLASH_ReadDWord(uint32_t Le_u_Addr);
extern void MemIfCfg_recvStorageCb(void);
#endif

