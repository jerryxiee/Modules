
  
/*------------------------------------------------------------------------------
				  Include files
------------------------------------------------------------------------------*/
#include "typedefs.h"
#include "platformTypes.h"
#include "utils.h"
#include "global_var.h"
#include "haiCfg.h"
#include "obd.h"



/*-----------------------------------------------------------------------------
					  Module local defines and constants
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
							   Module local types
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
					   Declaration of local functions
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
					Implementation of global functions
------------------------------------------------------------------------------*/






/*------------------------------------------------------------------------------
							  Local data at RAM
------------------------------------------------------------------------------*/
 static struct haiSigList haiSigList0[m_hai_mod0SigCnt];
 static struct haiSigList haiSigList1[m_hai_mod1SigCnt];

/*------------------------------------------------------------------------------
							  Local data at ROM
------------------------------------------------------------------------------*/
float hal_ai_deb_buf[e_ai_max][m_hai_mem_fullCnt] =
{
	{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},
	{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},
	{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},
	{0,0,0},{0,0,0}
};


const float hal_ai_lpf_factor[e_ai_max][m_hai_mem_fullCnt] =
{
	{1,1,1},{1,1,1},{1,1,1},{1,1,1},{1,1,1},
	{1,1,1},{1,1,1},{1,1,1},{1,1,1},{1,1,1},
	{1,1,1},{1,1,1},{1,1,1},{1,1,1},{1,1,1},
	{1,1,1},{1,1,1}
};

const haiSigList_conf_t haiSigList_conf[m_hai_adc_module_num] =
{
	{
		m_hai_mod0SigCnt,haiSigList0
	},

	{
		m_hai_mod1SigCnt,haiSigList1
	}
};
/*------------------------------------------------------------------------------
						   Local data at EEPROM
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
							  Global data at RAM
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
							  Global data at ROM
------------------------------------------------------------------------------*/
const haiCfg_t haiCfgGrp[e_ai_max] =
{	/*module*/ /* chan*/ /* inj*/  /* nor*/ /* isrEn*/ /* isrMask*/ /* filter*/
//adc0
	{0,			0,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{0,			8,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{0,			12,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{0,			7,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{0,			1,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{0,			2,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{0,			13,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{0,			14,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{0,			4,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{0,			3,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{0,			6,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{0,			5,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{0,			11,		FALSE,		TRUE,	FALSE,		0,			FALSE},
//adc1
	{1,			2,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{1,			7,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{1,			1,		FALSE,		TRUE,	FALSE,		0,			FALSE},
	{1,			8,		FALSE,		TRUE,	FALSE,		0,			FALSE}
};


  
 

