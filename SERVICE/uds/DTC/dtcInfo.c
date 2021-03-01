/*
* Copyright (c) File ,SHENZHEN HANGSHENG NEW ENERGY Co.,Ltd.
* All Rights Reserved.
* Dept.: Software Department
* File:dtcInfo.c
* Description: This is a readonly file generated by HSNE tools and you shouldn't be modified manually.It includes DTC and its Snap did information. 
* REQ IDs: 
* History:
* 2017-11-07 08:41:23
*/

/* ---- Source switch on ------------------------------------------------------*/

/*------------------------------------------------------------------------------
 					Include files
------------------------------------------------------------------------------*/
#include "importTypes.h"
#include "hs_types.h"
#include "dtcInfo.h"


/*-----------------------------------------------------------------------------
                   		Module local defines and constants
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                                 Module local types
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                                Local data at RAM
------------------------------------------------------------------------------*/
hs_BOOL bcmChecksumErr_flt = FALSE;
hs_BOOL bcmNodelost_flt = FALSE;
hs_BOOL mpcChecksumErr_flt = FALSE;
hs_BOOL kl15Short2gnd_flt = FALSE;
hs_BOOL kl15Short2batt_flt = FALSE;
hs_BOOL vcuAndbcmIGOnErr_flt = FALSE;
hs_BOOL vcuAndbcmIGOnErr1_flt = FALSE;
hs_BOOL iviNodelost_flt = FALSE;
hs_BOOL icNodelost_flt = FALSE;
hs_BOOL epsNodelost_flt = FALSE;

hs_BOOL mpcNodelost_flt = FALSE;
hs_BOOL epsChecksumErr_flt = FALSE;
hs_BOOL tboxNodelost_flt = FALSE;
hs_BOOL acuNodelost_flt = FALSE;
hs_BOOL vehiCrash_flt = FALSE;
hs_BOOL acuChecksumErr_flt = FALSE;
hs_BOOL msrBrakeCyPressInvalid_flt = FALSE;
hs_BOOL bcuChecksumErr_flt = FALSE;
hs_BOOL bcuNodelost_flt = FALSE;
hs_BOOL escNodelost_flt = FALSE;

hs_BOOL escChecksumErr_flt = FALSE;
hs_BOOL fiNodelost_flt = FALSE;
hs_BOOL frontMcuFltLvl1_flt = FALSE;
hs_BOOL frontMcuFltLvl2_flt = FALSE;
hs_BOOL frontMcuFltLvl3_flt = FALSE;
hs_BOOL fiChecksumErr_flt = FALSE;
hs_BOOL riNodelost_flt = FALSE;
hs_BOOL rearMcuFltLvl1_flt = FALSE;
hs_BOOL rearMcuFltLvl2_flt = FALSE;
hs_BOOL rearMcuFltLvl3_flt = FALSE;

hs_BOOL dcdcChecksumErr_flt = FALSE;
hs_BOOL dcdcNodelost_flt = FALSE;
hs_BOOL bmsFltLvl1_flt = FALSE;
hs_BOOL bmsFltLvl2_flt = FALSE;
hs_BOOL bmsFltLvl3_flt = FALSE;
hs_BOOL bmsHVILErr_flt = FALSE;
hs_BOOL bmsInsulationErr__flt = FALSE;
hs_BOOL bmsChecksumErr_flt = FALSE;
hs_BOOL bmsNodelost_flt = FALSE;
hs_BOOL obcNodelost_flt = FALSE;

hs_BOOL powerCANBussoff_flt = FALSE;
hs_BOOL classCanBussoff_flt = FALSE;
hs_BOOL vcuLin7CommErr_flt = FALSE;
hs_BOOL vcuLin1CommErr_flt = FALSE;
hs_BOOL vcuMonitorProPerform_flt = FALSE;
hs_BOOL vcuMainProPerform_flt = FALSE;
hs_BOOL vcuRAMErr_flt = FALSE;
hs_BOOL vcuROMErr_flt = FALSE;
hs_BOOL vcuADProperform_flt = FALSE;
hs_BOOL ctrlModProcessor_flt = FALSE;

hs_BOOL battPTCStopErr_flt = FALSE;
hs_BOOL battPTCHiVolt_flt = FALSE;
hs_BOOL battPTCExtPwrSupply_flt = FALSE;
hs_BOOL battPTCOverTemp_flt = FALSE;
hs_BOOL battPTCShort_flt = FALSE;
hs_BOOL battPTCHeaderLegs_flt = FALSE;
hs_BOOL battPTCCurrSensor_flt = FALSE;
hs_BOOL battPTCTempSensor_flt = FALSE;
hs_BOOL bhcLinMissMsg_flt = FALSE;
hs_BOOL battPTCLinRespErr_flt = FALSE;

hs_BOOL fan1CtrlCircuit_flt = FALSE;
hs_BOOL fan1CtrlCircuitHi_flt = FALSE;
hs_BOOL fan1CtrlCircuitLo_flt = FALSE;
hs_BOOL fan1CtrlModOverTemp_flt = FALSE;
hs_BOOL fan1CtrlModInter_flt = FALSE;
hs_BOOL fan1CtrlModSupplyOverVolt_flt = FALSE;
hs_BOOL fan1PerformStuckOff_flt = FALSE;
hs_BOOL vlv3LinMissMsg_flt = FALSE;
hs_BOOL way3ValActuatorMtrStop_flt = FALSE;
hs_BOOL way3ValOverCurr_flt = FALSE;

hs_BOOL way3ValVolt_flt = FALSE;
hs_BOOL way3ValOverTemp_flt = FALSE;
hs_BOOL way3ValCheckSum_flt = FALSE;
hs_BOOL way3ValCtrlCircuitHi_flt = FALSE;
hs_BOOL way3ValCtrlCircuitLo_flt = FALSE;
hs_BOOL way3ValCtrlCircuitOpen_flt = FALSE;
hs_BOOL vlv4LinMissMsg_flt = FALSE;
hs_BOOL way4ValActuator_flt = FALSE;
hs_BOOL way4ValOverCurr_flt = FALSE;
hs_BOOL way4ValVolt_flt = FALSE;

hs_BOOL way4ValOverTemp_flt = FALSE;
hs_BOOL way4ValChecksum_flt = FALSE;
hs_BOOL way4ValCtrlCircuitHi_flt = FALSE;
hs_BOOL way4ValCtrlCircuitLo_flt = FALSE;
hs_BOOL way4ValCtrlCircuitOpen_flt = FALSE;
hs_BOOL battOtCoPumpCtrlCirOpen_flt = FALSE;
hs_BOOL battOtCoPumpCtrlCirLo_flt = FALSE;
hs_BOOL battOtCoPumpCtrlCirHi_flt = FALSE;
hs_BOOL battOtCoPumpSlyVoltOpen_flt = FALSE;
hs_BOOL battOtCoPumpSlyVoltLo_flt = FALSE;

hs_BOOL battOtCoPumpSlyVoltHi_flt = FALSE;
hs_BOOL battOtCoPumpDryRun_flt = FALSE;
hs_BOOL battOtCoPumpStuckStall_flt = FALSE;
hs_BOOL battOtCoPumpCtrlCirDriTempHi_flt = FALSE;
hs_BOOL battOtCoPumpOverspeed_flt = FALSE;
hs_BOOL battItCoPumpCtrlCirOpen_flt = FALSE;
hs_BOOL battItCoPumpCtrlCirLo_flt = FALSE;
hs_BOOL battItCoPumpCtrlCirHi_flt = FALSE;
hs_BOOL battItCoPumpSlyVolt_flt = FALSE;
hs_BOOL battItCoPumpSlyVoltCirLo_flt = FALSE;

hs_BOOL battItCoPumpSlyVoltCirHi_flt = FALSE;
hs_BOOL battItCoPumpDryRun_flt = FALSE;
hs_BOOL battItCoPumpStuckStall_flt = FALSE;
hs_BOOL battItCoPumpCtrlCirDriTempHi_flt = FALSE;
hs_BOOL battItCoPumpOverspeed_flt = FALSE;
hs_BOOL mtrWaterPumpCtrlCirOpen_flt = FALSE;
hs_BOOL mtrWaterPumpCtrlCirLo_flt = FALSE;
hs_BOOL mtrWaterPumpCtrlCirHi_flt = FALSE;
hs_BOOL mtrWaterPumpSlyVoltCirOpen_flt = FALSE;
hs_BOOL mtrWaterPumpSlyVoltCirLo_flt = FALSE;

hs_BOOL mtrWaterPumpSlyVoltCirHi_flt = FALSE;
hs_BOOL mtrWaterPumpDryRun_flt = FALSE;
hs_BOOL mtrWaterPumpStuckStall_flt = FALSE;
hs_BOOL mtrWaterPumpCtrlCirDriTempHi_flt = FALSE;
hs_BOOL mtrWaterPumpOverspeed_flt = FALSE;
hs_BOOL coolantLvlSensorShrtPwrErr_flt = FALSE;
hs_BOOL coolantLvlSensorShrtGndErr_flt = FALSE;
hs_BOOL coolantTankLvlSensorSlyVolt_flt = FALSE;
hs_BOOL accePedalPlausErr_flt = FALSE;
hs_BOOL accePedalInputSgn1ShrtPwr_flt = FALSE;

hs_BOOL accePedalInputSgn1ShrtGnd_flt = FALSE;
hs_BOOL accePedalInputSgn2ShrtPwr_flt = FALSE;
hs_BOOL accePedalInputSgn2ShrtGnd_flt = FALSE;
hs_BOOL confirmDoubElecErrAccePedal_flt = FALSE;
hs_BOOL aps1SupplyVolt_flt = FALSE;
hs_BOOL aps2SupplyVolt_flt = FALSE;
hs_BOOL brakeSwitchABCorr_flt = FALSE;
hs_BOOL systemVoltLo_flt = FALSE;
hs_BOOL systemVoltHi_flt = FALSE;
hs_BOOL gsmSensorErr_flt = FALSE;

hs_BOOL gsmGearErr_flt = FALSE;
hs_BOOL gsmNodelost_flt = FALSE;
hs_BOOL gsmChecksumErr_flt = FALSE;
hs_BOOL vehiGroundSpeedErrLvl2_flt = FALSE;
hs_BOOL vhiGroundSpeedErrLvl3_flt = FALSE;
hs_BOOL airSuspensionErrLvl3_flt = FALSE;
hs_BOOL ascNodelost_flt = FALSE;
hs_BOOL swmNodelost_flt = FALSE;
hs_BOOL swmChecksumErr_flt = FALSE;
hs_BOOL swmSignInvalid_flt = FALSE;

hs_BOOL mrrNodelost_flt = FALSE;
hs_BOOL hvacNodelost_flt = FALSE;

/*------------------------------------------------------------------------------
                                Global data at RAM
------------------------------------------------------------------------------*/
dtcSnapShot_t __attribute__ ((section(".eeDiagDtAddr"))) dtcSnapShotDt[m_dtcInfoCnt];
obdDiagDt_t __attribute__ ((section(".eeDiagDtAddr"))) obdDiagDtGrp[m_dtcInfoCnt];
hs_u2_t __attribute__ ((section(".eeDiagDtAddr"))) obdFFOrder[m_dtcInfoCnt];
obdFFDt_t __attribute__ ((section(".eeDiagDtAddr"))) obdFFDtGrp[m_dtcInfoCnt];


/*------------------------------------------------------------------------------
                         Declaration of local functions
------------------------------------------------------------------------------*/



/*------------------------------------------------------------------------------
                                Local data at ROM
------------------------------------------------------------------------------*/
#if 0
static const hs_u2_t BCMCANCheckSumErr_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,4,5,6,7};
static const hs_u2_t BodyCANNodeTimeout_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,5,6,7};
static const hs_u2_t KL15Short2Batt_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,6,7};
static const hs_u2_t KL15Short2Gnd_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,7};
static const hs_u2_t IVINodeTimeout_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6};
static const hs_u2_t ICNodeTimeout_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
static const hs_u2_t BMSNodeTimeout_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
static const hs_u2_t MPCNodeTimeout_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
static const hs_u2_t EPSCANCheckSumErr_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
static const hs_u2_t ACUNodeTimeout_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
static const hs_u2_t TboxNodeTimeout_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
static const hs_u2_t VehiCrashFault_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
static const hs_u2_t ACUCANCheckSumErr_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
static const hs_u2_t msrBrakePressNotValid_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
static const hs_u2_t BCUCANCheckSumErr_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
static const hs_u2_t BCUNodeTimeout_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
static const hs_u2_t ESCNodeTimeout_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
static const hs_u2_t ESCCANCheckSumErr_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
static const hs_u2_t FINodeTimeout_snapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7};
#else
static const hs_u2_t dtcsnapDidIndxBuf[UDS_SNAP_CNT]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
#endif
/*------------------------------------------------------------------------------
                             Local data at EEPROM
------------------------------------------------------------------------------*/



/*------------------------------------------------------------------------------
                                Global data at ROM
------------------------------------------------------------------------------*/
const dtcInfoCfg_t dtcInfoCfgGrp[m_dtcInfoCnt] =
{
    {0xC42286,&bcmChecksumErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[0].dtcsnapBuf},
    {0xC14087,&bcmNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[1].dtcsnapBuf},
    {0xD20286,&mpcChecksumErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[2].dtcsnapBuf},
    {0x400AF0,&kl15Short2gnd_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[3].dtcsnapBuf},
    {0x400AF1,&kl15Short2batt_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[4].dtcsnapBuf},
    {0x400AF2,&vcuAndbcmIGOnErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[5].dtcsnapBuf},
    {0x400AF3,&vcuAndbcmIGOnErr1_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[6].dtcsnapBuf},
    {0xC15687,&iviNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[7].dtcsnapBuf},
    {0xC15587,&icNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[8].dtcsnapBuf},
    {0xC13187,&epsNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[9].dtcsnapBuf},

    {0xD20287,&mpcNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[10].dtcsnapBuf},
    {0xC42086,&epsChecksumErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[11].dtcsnapBuf},
    {0xC19887,&tboxNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[12].dtcsnapBuf},
    {0xC15187,&acuNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[13].dtcsnapBuf},
    {0x100007,&vehiCrash_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[14].dtcsnapBuf},
    {0xC45286,&acuChecksumErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[15].dtcsnapBuf},
    {0x404409,&msrBrakeCyPressInvalid_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[16].dtcsnapBuf},
    {0xC41886,&bcuChecksumErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[17].dtcsnapBuf},
	{0xC25387,&bcuNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[18].dtcsnapBuf},
	{0xC12287,&escNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[19].dtcsnapBuf},

	{0xC41686,&escChecksumErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[20].dtcsnapBuf},
    {0xC29287,&fiNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[21].dtcsnapBuf},
    {0x0A1BF0,&frontMcuFltLvl1_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[22].dtcsnapBuf},
    {0x0A1BF1,&frontMcuFltLvl2_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[23].dtcsnapBuf},
    {0x0A1BF2,&frontMcuFltLvl3_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[24].dtcsnapBuf},
    {0xC41186,&fiChecksumErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[25].dtcsnapBuf},
    {0xC11087,&riNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[26].dtcsnapBuf},
    {0x0A1CF0,&rearMcuFltLvl1_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[27].dtcsnapBuf},
    {0x0A1CF1,&rearMcuFltLvl2_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[28].dtcsnapBuf},
    {0x0A1CF2,&rearMcuFltLvl3_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[29].dtcsnapBuf},

    {0xC59986,&dcdcChecksumErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[30].dtcsnapBuf},
	{0xC29887,&dcdcNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[31].dtcsnapBuf},
    {0x0A1FF0,&bmsFltLvl1_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[32].dtcsnapBuf},
    {0x0A1FF1,&bmsFltLvl2_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[33].dtcsnapBuf},
    {0x0A1FF2,&bmsFltLvl3_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[34].dtcsnapBuf},
	{0x0A0B01,&bmsHVILErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[35].dtcsnapBuf},
	{0x0A1FF3,&bmsInsulationErr__flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[36].dtcsnapBuf},
	{0xC41286,&bmsChecksumErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[37].dtcsnapBuf},
	{0xC11187,&bmsNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[38].dtcsnapBuf},
	{0xC1CB87,&obcNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[39].dtcsnapBuf},

	{0xC07788,&powerCANBussoff_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[40].dtcsnapBuf},
	{0xC07488,&classCanBussoff_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[41].dtcsnapBuf},
	{0xD000F0,&vcuLin7CommErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[42].dtcsnapBuf},
	{0xD000F1,&vcuLin1CommErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[43].dtcsnapBuf},
	{0x060A00,&vcuMonitorProPerform_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[44].dtcsnapBuf},
	{0x060C00,&vcuMainProPerform_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[45].dtcsnapBuf},
	{0x060400,&vcuRAMErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[46].dtcsnapBuf},
	{0x060500,&vcuROMErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[47].dtcsnapBuf},
	{0x060B00,&vcuADProperform_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[48].dtcsnapBuf},
	{0x060600,&ctrlModProcessor_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[49].dtcsnapBuf},

	{0x100CF7,&battPTCStopErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[50].dtcsnapBuf},
	{0x100CF1,&battPTCHiVolt_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[51].dtcsnapBuf},
	{0x100CF4,&battPTCExtPwrSupply_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[52].dtcsnapBuf},
	{0x100CF3,&battPTCOverTemp_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[53].dtcsnapBuf},
	{0x100CF5,&battPTCShort_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[54].dtcsnapBuf},
	{0x100CF0,&battPTCHeaderLegs_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[55].dtcsnapBuf},
	{0x100CF6,&battPTCCurrSensor_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[56].dtcsnapBuf},
	{0x100CF2,&battPTCTempSensor_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[57].dtcsnapBuf},
	{0xC2A987,&bhcLinMissMsg_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[58].dtcsnapBuf},
	{0x100C86,&battPTCLinRespErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[59].dtcsnapBuf},

	{0x048000,&fan1CtrlCircuit_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[60].dtcsnapBuf},
	{0x069200,&fan1CtrlCircuitHi_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[61].dtcsnapBuf},
	{0x069100,&fan1CtrlCircuitLo_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[62].dtcsnapBuf},
	{0x2D8700,&fan1CtrlModOverTemp_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[63].dtcsnapBuf},
    {0x2D8800,&fan1CtrlModInter_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[64].dtcsnapBuf},
	{0x2D8900,&fan1CtrlModSupplyOverVolt_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[65].dtcsnapBuf},
	{0x2B2F00,&fan1PerformStuckOff_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[66].dtcsnapBuf},
	{0xC2AB87,&vlv3LinMissMsg_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[67].dtcsnapBuf},
	{0x1006F4,&way3ValActuatorMtrStop_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[68].dtcsnapBuf},
	{0x1006F0,&way3ValOverCurr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[69].dtcsnapBuf},

	{0x1006F2,&way3ValVolt_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[70].dtcsnapBuf},
	{0x1006F1,&way3ValOverTemp_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[71].dtcsnapBuf},
	{0x1006F5,&way3ValCheckSum_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[72].dtcsnapBuf},
	{0x0D1E00,&way3ValCtrlCircuitHi_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[73].dtcsnapBuf},
	{0x0D1D00,&way3ValCtrlCircuitLo_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[74].dtcsnapBuf},
	{0x0D1A00,&way3ValCtrlCircuitOpen_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[75].dtcsnapBuf},
	{0xC2AC87,&vlv4LinMissMsg_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[76].dtcsnapBuf},
	{0x1007F4,&way4ValActuator_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[77].dtcsnapBuf},
	{0x1007F0,&way4ValOverCurr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[78].dtcsnapBuf},
	{0x1007F2,&way4ValVolt_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[79].dtcsnapBuf},

	{0x1007F1,&way4ValOverTemp_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[80].dtcsnapBuf},
	{0x1007F5,&way4ValChecksum_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[81].dtcsnapBuf},
	{0x0CE300,&way4ValCtrlCircuitHi_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[82].dtcsnapBuf},
	{0x0CE200,&way4ValCtrlCircuitLo_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[83].dtcsnapBuf},
	{0x0CDF00,&way4ValCtrlCircuitOpen_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[84].dtcsnapBuf},
	{0x0C4700,&battOtCoPumpCtrlCirOpen_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[85].dtcsnapBuf},
	{0x0C4800,&battOtCoPumpCtrlCirLo_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[86].dtcsnapBuf},
	{0x0C4900,&battOtCoPumpCtrlCirHi_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[87].dtcsnapBuf},
	{0x0C4B00,&battOtCoPumpSlyVoltOpen_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[88].dtcsnapBuf},
	{0x0C4C00,&battOtCoPumpSlyVoltLo_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[89].dtcsnapBuf},

	{0x0C4D00,&battOtCoPumpSlyVoltHi_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[90].dtcsnapBuf},
	{0x2B2900,&battOtCoPumpDryRun_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[91].dtcsnapBuf},
	{0x0CFF00,&battOtCoPumpStuckStall_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[92].dtcsnapBuf},
	{0x0E1F00,&battOtCoPumpCtrlCirDriTempHi_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[93].dtcsnapBuf},
	{0x2B2800,&battOtCoPumpOverspeed_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[94].dtcsnapBuf},
	{0x0B3800,&battItCoPumpCtrlCirOpen_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[95].dtcsnapBuf},
	{0x0B3900,&battItCoPumpCtrlCirLo_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[96].dtcsnapBuf},
	{0x0B3A00,&battItCoPumpCtrlCirHi_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[97].dtcsnapBuf},
	{0x2D0800,&battItCoPumpSlyVolt_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[98].dtcsnapBuf},
	{0x2D0A00,&battItCoPumpSlyVoltCirLo_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[99].dtcsnapBuf},

	{0x2D0B00,&battItCoPumpSlyVoltCirHi_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[100].dtcsnapBuf},
	{0x2D0600,&battItCoPumpDryRun_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[101].dtcsnapBuf},
	{0x2D0500,&battItCoPumpStuckStall_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[102].dtcsnapBuf},
	{0x2D0900,&battItCoPumpCtrlCirDriTempHi_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[103].dtcsnapBuf},
	{0x0C7400,&battItCoPumpOverspeed_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[104].dtcsnapBuf},
	{0x0A0500,&mtrWaterPumpCtrlCirOpen_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[105].dtcsnapBuf},
	{0x0A0600,&mtrWaterPumpCtrlCirLo_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[106].dtcsnapBuf},
	{0x0A0700,&mtrWaterPumpCtrlCirHi_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[107].dtcsnapBuf},
	{0x2D0C00,&mtrWaterPumpSlyVoltCirOpen_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[108].dtcsnapBuf},
	{0x2D0200,&mtrWaterPumpSlyVoltCirLo_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[109].dtcsnapBuf},

	{0x2D0300,&mtrWaterPumpSlyVoltCirHi_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[110].dtcsnapBuf},
	{0x2D0100,&mtrWaterPumpDryRun_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[111].dtcsnapBuf},
	{0x2D0000,&mtrWaterPumpStuckStall_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[112].dtcsnapBuf},
	{0x2D0400,&mtrWaterPumpCtrlCirDriTempHi_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[113].dtcsnapBuf},
	{0x0C7300,&mtrWaterPumpOverspeed_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[114].dtcsnapBuf},
	{0x100BF1,&coolantLvlSensorShrtPwrErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[115].dtcsnapBuf},
	{0x100BF2,&coolantLvlSensorShrtGndErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[116].dtcsnapBuf},
	{0x069700,&coolantTankLvlSensorSlyVolt_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[117].dtcsnapBuf},
	{0x213800,&accePedalPlausErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[118].dtcsnapBuf},
	{0x212300,&accePedalInputSgn1ShrtPwr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[119].dtcsnapBuf},

	{0x212200,&accePedalInputSgn1ShrtGnd_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[120].dtcsnapBuf},
	{0x212800,&accePedalInputSgn2ShrtPwr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[121].dtcsnapBuf},
	{0x212700,&accePedalInputSgn2ShrtGnd_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[122].dtcsnapBuf},
	{0x160D09,&confirmDoubElecErrAccePedal_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[123].dtcsnapBuf},
	{0x064100,&aps1SupplyVolt_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[124].dtcsnapBuf},
	{0x065100,&aps2SupplyVolt_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[125].dtcsnapBuf},
	{0x050400,&brakeSwitchABCorr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[126].dtcsnapBuf},
	{0x056200,&systemVoltLo_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[127].dtcsnapBuf},
	{0x056300,&systemVoltHi_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[128].dtcsnapBuf},
	{0x082001,&gsmSensorErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[129].dtcsnapBuf},

	{0x085DF0,&gsmGearErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[130].dtcsnapBuf},
	{0xC10387,&gsmNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[131].dtcsnapBuf},
	{0xC40486,&gsmChecksumErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[132].dtcsnapBuf},
	{0x4037F1,&vehiGroundSpeedErrLvl2_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[133].dtcsnapBuf},
	{0x4037F2,&vhiGroundSpeedErrLvl3_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[134].dtcsnapBuf},
	{0x5005F2,&airSuspensionErrLvl3_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[135].dtcsnapBuf},
	{0x413287,&ascNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[136].dtcsnapBuf},
	{0x410487,&swmNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[137].dtcsnapBuf},
	{0x440586,&swmChecksumErr_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[138].dtcsnapBuf},
	{0x4D86F1,&swmSignInvalid_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[139].dtcsnapBuf},

	{0x444E87,&mrrNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[140].dtcsnapBuf},
	{0x416487,&hvacNodelost_flt,NULL,1,3,12,40,3,1,m_dtcPrio_high,UDS_SNAP_CNT,dtcsnapDidIndxBuf,UDS_SNAP_TOTAL_LNG,dtcSnapShotDt[141].dtcsnapBuf},

};
const hs_u2_t dtcItemCnt = m_dtcInfoCnt;
const hs_u2_t dtcFreezeFrameCnt = m_dtcInfoCnt;


/*------------------------------------------------------------------------------
                             Global data at EEPROM
------------------------------------------------------------------------------*/



/*------------------------------------------------------------------------------
                      Implementation of global functions
------------------------------------------------------------------------------*/
void dtcInfo_Init(void)
{
	int i;
	for(i = 0;i < m_dtcInfoCnt;i++)
	{
		obdDiagDtGrp[i].isStored = 0;
	}

}

/*------------------------------------------------------------------------------
                      Implementation of local functions
------------------------------------------------------------------------------*/


/* ---- Source switch off ---------------------------------------------------- */

/*--- End of file ------------------------------------------------------------*/