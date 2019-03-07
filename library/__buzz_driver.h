/*
    __buzz_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __buzz_driver.h
@brief    BUZZ Driver
@mainpage BUZZ Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   BUZZ
@brief      BUZZ Click Driver
@{

| Global Library Prefix | **BUZZ** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Feb 2019.**      |
| Developer             | **Nenad Filipovic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _BUZZ_H_
#define _BUZZ_H_

/** 
 * @macro T_BUZZ_P
 * @brief Driver Abstract type 
 */
#define T_BUZZ_P    const uint8_t*

/** @defgroup BUZZ_COMPILE Compilation Config */              /** @{ */

//  #define   __BUZZ_DRV_SPI__                            /**<     @macro __BUZZ_DRV_SPI__  @brief SPI driver selector */
//  #define   __BUZZ_DRV_I2C__                            /**<     @macro __BUZZ_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __BUZZ_DRV_UART__                           /**<     @macro __BUZZ_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup BUZZ_VAR Variables */                           /** @{ */

extern const uint16_t _BUZZ_TONE_cS;
extern const uint16_t _BUZZ_TONE_dS;
extern const uint16_t _BUZZ_TONE_e;
extern const uint16_t _BUZZ_TONE_fS;
extern const uint16_t _BUZZ_TONE_g;
extern const uint16_t _BUZZ_TONE_gS;
extern const uint16_t _BUZZ_TONE_aHa;
extern const uint16_t _BUZZ_TONE_aS;
extern const uint16_t _BUZZ_TONE_b;
extern const uint16_t _BUZZ_TONE_cH;
extern const uint16_t _BUZZ_TONE_cSH;
extern const uint16_t _BUZZ_TONE_dH;
extern const uint16_t _BUZZ_TONE_dSH;
extern const uint16_t _BUZZ_TONE_eH;
extern const uint16_t _BUZZ_TONE_fH;
extern const uint16_t _BUZZ_TONE_fSH;
extern const uint16_t _BUZZ_TONE_gH;
extern const uint16_t _BUZZ_TONE_gSH;
extern const uint16_t _BUZZ_TONE_aH;

                                                                       /** @} */
/** @defgroup BUZZ_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup BUZZ_INIT Driver Initialization */              /** @{ */

#ifdef   __BUZZ_DRV_SPI__
void buzz_spiDriverInit(T_BUZZ_P gpioObj, T_BUZZ_P spiObj);
#endif
#ifdef   __BUZZ_DRV_I2C__
void buzz_i2cDriverInit(T_BUZZ_P gpioObj, T_BUZZ_P i2cObj, uint8_t slave);
#endif
#ifdef   __BUZZ_DRV_UART__
void buzz_uartDriverInit(T_BUZZ_P gpioObj, T_BUZZ_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void buzz_gpioDriverInit(T_BUZZ_P gpioObj);
                                                                       /** @} */
/** @defgroup BUZZ_FUNC Driver Functions */                   /** @{ */







                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_BUZZ_STM.c
    @example Click_BUZZ_TIVA.c
    @example Click_BUZZ_CEC.c
    @example Click_BUZZ_KINETIS.c
    @example Click_BUZZ_MSP.c
    @example Click_BUZZ_PIC.c
    @example Click_BUZZ_PIC32.c
    @example Click_BUZZ_DSPIC.c
    @example Click_BUZZ_AVR.c
    @example Click_BUZZ_FT90x.c
    @example Click_BUZZ_STM.mbas
    @example Click_BUZZ_TIVA.mbas
    @example Click_BUZZ_CEC.mbas
    @example Click_BUZZ_KINETIS.mbas
    @example Click_BUZZ_MSP.mbas
    @example Click_BUZZ_PIC.mbas
    @example Click_BUZZ_PIC32.mbas
    @example Click_BUZZ_DSPIC.mbas
    @example Click_BUZZ_AVR.mbas
    @example Click_BUZZ_FT90x.mbas
    @example Click_BUZZ_STM.mpas
    @example Click_BUZZ_TIVA.mpas
    @example Click_BUZZ_CEC.mpas
    @example Click_BUZZ_KINETIS.mpas
    @example Click_BUZZ_MSP.mpas
    @example Click_BUZZ_PIC.mpas
    @example Click_BUZZ_PIC32.mpas
    @example Click_BUZZ_DSPIC.mpas
    @example Click_BUZZ_AVR.mpas
    @example Click_BUZZ_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __buzz_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */