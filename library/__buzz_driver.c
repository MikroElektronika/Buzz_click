/*
    __buzz_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__buzz_driver.h"
#include "__buzz_hal.c"

/* ------------------------------------------------------------------- MACROS */



/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __BUZZ_DRV_I2C__
static uint8_t _slaveAddress;
#endif

const uint16_t _BUZZ_TONE_cS                                             = 261;
const uint16_t _BUZZ_TONE_dS                                             = 294;
const uint16_t _BUZZ_TONE_e                                              = 329;
const uint16_t _BUZZ_TONE_fS                                             = 349;
const uint16_t _BUZZ_TONE_g                                              = 391;
const uint16_t _BUZZ_TONE_gS                                             = 415;
const uint16_t _BUZZ_TONE_aHa                                            = 440;
const uint16_t _BUZZ_TONE_aS                                             = 455;
const uint16_t _BUZZ_TONE_b                                              = 466;
const uint16_t _BUZZ_TONE_cH                                             = 523;
const uint16_t _BUZZ_TONE_cSH                                            = 554;
const uint16_t _BUZZ_TONE_dH                                             = 587;
const uint16_t _BUZZ_TONE_dSH                                            = 622;
const uint16_t _BUZZ_TONE_eH                                             = 659;
const uint16_t _BUZZ_TONE_fH                                             = 698;
const uint16_t _BUZZ_TONE_fSH                                            = 740;
const uint16_t _BUZZ_TONE_gH                                             = 784;
const uint16_t _BUZZ_TONE_gSH                                            = 830;
const uint16_t _BUZZ_TONE_aH                                             = 880;

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */



/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __BUZZ_DRV_SPI__

void buzz_spiDriverInit(T_BUZZ_P gpioObj, T_BUZZ_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );

    // ... power ON
    // ... configure CHIP
}

#endif
#ifdef   __BUZZ_DRV_I2C__

void buzz_i2cDriverInit(T_BUZZ_P gpioObj, T_BUZZ_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );

    // ... power ON
    // ... configure CHIP
}

#endif
#ifdef   __BUZZ_DRV_UART__

void buzz_uartDriverInit(T_BUZZ_P gpioObj, T_BUZZ_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );

    // ... power ON
    // ... configure CHIP
}

#endif

// GPIO Only Drivers - remove in other cases
void buzz_gpioDriverInit(T_BUZZ_P gpioObj)
{
    hal_gpioMap( (T_HAL_P)gpioObj );

    // ... power ON
}

/* ----------------------------------------------------------- IMPLEMENTATION */







/* -------------------------------------------------------------------------- */
/*
  __buzz_driver.c

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