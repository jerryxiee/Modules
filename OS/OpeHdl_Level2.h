

/* ---- Source switch on ------------------------------------------------------*/
#ifndef OPE_HDL_LEVEL2_H_
#define OPE_HDL_LEVEL2_H_
#include "OS_Types.h"
/*------------------------------------------------------------------------------
 					Include files
------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
                             Defines and constants
------------------------------------------------------------------------------*/




/*------------------------------------------------------------------------------
                                   Data types
------------------------------------------------------------------------------*/




/*------------------------------------------------------------------------------
                      External declaration of global RAM-Variables
------------------------------------------------------------------------------*/
extern os_dWord_t REM_FES;
extern os_dWord_t REM_DES;
extern os_dWord_t diff1_value;
/*------------------------------------------------------------------------------
                      External declaration of global ROM-Variables
------------------------------------------------------------------------------*/




/*------------------------------------------------------------------------------
                    External declaration of global EEPROM-Variables
------------------------------------------------------------------------------*/



/*------------------------------------------------------------------------------
                              Declaration of global functions
------------------------------------------------------------------------------*/
extern os_byte_t OpeHdl_level2(void);

extern void AppTaskStep(void);
//extern void gateway_dispose(void);
#endif

