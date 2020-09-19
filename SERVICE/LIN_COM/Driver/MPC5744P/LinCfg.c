


/*------------------------------------------------------------------------------
 					Include files
------------------------------------------------------------------------------*/
#include "LinCfg.h"
/*-----------------------------------------------------------------------------
                   		Module local defines and constants
------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
                                 Module local types
------------------------------------------------------------------------------*/



/*------------------------------------------------------------------------------
                                Local data at RAM
------------------------------------------------------------------------------*/



/*------------------------------------------------------------------------------
                                Local data at ROM
------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
                             Local data at EEPROM
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                                Global data at RAM
------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
                                Global data at ROM
------------------------------------------------------------------------------*/
const linCfg_conf_t	linCfg_conf[e_lin_max] =
{	/*module*/ /*isen*/	/*module tag*/  /*master*/ /*c_checksum*/ /*baud*/
	{0,			1,		&LINFlexD_0,		1,		1,				19200},
	{1,			1,		&LINFlexD_1,		1,		0,				19200},
};


/*------------------------------------------------------------------------------
                             Global data at EEPROM
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                         Declaration of local functions
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      Implementation of global functions
------------------------------------------------------------------------------*/
void linCfg_pinsInit(void)
{
	if(linCfg_conf[0].isen)
	{
		SIUL2.MSCR[SIUL_PB2].R = 0x33030001;
		SIUL2.GPDO[SIUL_PB2].R = 1;
		SIUL2.MSCR[SIUL_PB2].B.ODE = 0;

		SIUL2.MSCR[SIUL_PB3].B.IBE = 1;    		/* Pad PB3: Enable pad for input - LIN0_RXD */
		SIUL2.MSCR[SIUL_PB3].B.ODE = 1;
		SIUL2.IMCR[SIUL_PB3].B.SSS = 1;   	/* LIN0_RXD: connected to pad PB3 */
	}


	if(linCfg_conf[1].isen)
	{
		SIUL2.MSCR[SIUL_PD9].R = 0x33030002;
		SIUL2.GPDO[SIUL_PD9].R = 1;
		SIUL2.MSCR[SIUL_PD9].B.ODE = 0;

		SIUL2.MSCR[SIUL_PB13].B.IBE = 1;    		/* Pad PB3: Enable pad for input - LIN0_RXD */
		SIUL2.MSCR[SIUL_PB13].B.ODE = 1;
		SIUL2.IMCR[SIUL_PB13].B.SSS = 1;   	/* LIN0_RXD: connected to pad PB3 */
	}
}


void linCfg_INTCInterruptHandler(void)
{
	if(linCfg_conf[0].isen)
	{
		INTC_InstallINTCInterruptHandler(NULL_PTR,376,20);
	}

	if(linCfg_conf[1].isen)
	{
		INTC_InstallINTCInterruptHandler(NULL_PTR,380,20);
	}
}


uint8_t linCfg_HeaderIdMatch(uint8_t msgid)
{
	return 0;
}

