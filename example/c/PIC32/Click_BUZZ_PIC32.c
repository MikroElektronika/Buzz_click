/*
Example for BUZZ Click

    Date          : Feb 2019.
    Author        : Nenad Filipovic

Test configuration PIC32 :
    
    MCU                : P32MX795F512L
    Dev. Board         : EasyPIC Fusion v7
    PIC32 Compiler ver : v4.0.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes GPIO and LOG structures, set PWM pin as ouput and start write log.
- Application Initialization - Initialization driver enable's - GPIO and configures the appropriate MCU pin for sound generation.
- Application Task - (code snippet) This is an example which demonstrates the use of BUZZ Click board,
     which plays Imperial March using Sound library.

Additional Functions :

- buzz_soundInit() - Configures the appropriate MCU pin for sound generation.
- buzz_melody() - Demo melody - plays Imperial March using Sound library.

*/

#include "Click_BUZZ_types.h"
#include "Click_BUZZ_config.h"


void buzz_soundInit()
{
    Sound_Init( &PORTD, 0 );
}

void buzz_melody()
{
    Sound_Play( _BUZZ_TONE_aHa, 500 );
    Sound_Play( _BUZZ_TONE_aHa, 500 );
    Sound_Play( _BUZZ_TONE_aHa, 500 );
    Sound_Play( _BUZZ_TONE_fS, 350 );
    Sound_Play( _BUZZ_TONE_cH, 150 );
    Sound_Play( _BUZZ_TONE_aHa, 500 );
    Sound_Play( _BUZZ_TONE_fS, 350 );
    Sound_Play( _BUZZ_TONE_cH, 150 );
    Sound_Play( _BUZZ_TONE_aHa, 650 );

    delay_ms( 500 );

    Sound_Play( _BUZZ_TONE_eH, 500 );
    Sound_Play( _BUZZ_TONE_eH, 500 );
    Sound_Play( _BUZZ_TONE_eH, 500 );
    Sound_Play( _BUZZ_TONE_fH, 350 );
    Sound_Play( _BUZZ_TONE_cH, 150 );
    Sound_Play( _BUZZ_TONE_gS, 500 );
    Sound_Play( _BUZZ_TONE_fS, 350 );
    Sound_Play( _BUZZ_TONE_cH, 150 );
    Sound_Play( _BUZZ_TONE_aHa, 650 );

    delay_ms( 500 );

    Sound_Play( _BUZZ_TONE_aH, 500 );
    Sound_Play( _BUZZ_TONE_aHa, 300 );
    Sound_Play( _BUZZ_TONE_aHa, 150 );
    Sound_Play( _BUZZ_TONE_aH, 500 );
    Sound_Play( _BUZZ_TONE_gSH, 325 );
    Sound_Play( _BUZZ_TONE_gH, 175 );
    Sound_Play( _BUZZ_TONE_fSH, 125 );
    Sound_Play( _BUZZ_TONE_fH, 125 );
    Sound_Play( _BUZZ_TONE_fSH, 250 );

    delay_ms( 325 );

    Sound_Play( _BUZZ_TONE_aS, 250 );
    Sound_Play( _BUZZ_TONE_dSH, 500 );
    Sound_Play( _BUZZ_TONE_dH, 325 );
    Sound_Play( _BUZZ_TONE_cSH, 175 );
    Sound_Play( _BUZZ_TONE_cH, 125 );
    Sound_Play( _BUZZ_TONE_b, 125 );
    Sound_Play( _BUZZ_TONE_cH, 250 );

    delay_ms( 350 );

    Sound_Play( _BUZZ_TONE_fS, 250 );
    Sound_Play( _BUZZ_TONE_gS, 500 );
    Sound_Play( _BUZZ_TONE_fS, 350 );
    Sound_Play( _BUZZ_TONE_aHa, 125 );
    Sound_Play( _BUZZ_TONE_cH, 500 );
    Sound_Play( _BUZZ_TONE_aHa, 375 );
    Sound_Play( _BUZZ_TONE_cH, 125 );
    Sound_Play( _BUZZ_TONE_eH, 650 );

    delay_ms( 500 );

    Sound_Play( _BUZZ_TONE_aH, 500 );
    Sound_Play( _BUZZ_TONE_aHa, 300 );
    Sound_Play( _BUZZ_TONE_aHa, 150 );
    Sound_Play( _BUZZ_TONE_aH, 500 );
    Sound_Play( _BUZZ_TONE_gSH, 325 );
    Sound_Play( _BUZZ_TONE_gH, 175 );
    Sound_Play( _BUZZ_TONE_fSH, 125 );
    Sound_Play( _BUZZ_TONE_fH, 125 );
    Sound_Play( _BUZZ_TONE_fSH, 250 );

    delay_ms( 325 );

    Sound_Play( _BUZZ_TONE_aS, 250 );
    Sound_Play( _BUZZ_TONE_dSH, 500 );
    Sound_Play( _BUZZ_TONE_dH, 325 );
    Sound_Play( _BUZZ_TONE_cSH, 175 );
    Sound_Play( _BUZZ_TONE_cH, 125 );
    Sound_Play( _BUZZ_TONE_b, 125 );
    Sound_Play( _BUZZ_TONE_cH, 250 );

    delay_ms( 350 );

    Sound_Play( _BUZZ_TONE_fS, 250 );
    Sound_Play( _BUZZ_TONE_gS, 500 );
    Sound_Play( _BUZZ_TONE_fS, 375 );
    Sound_Play( _BUZZ_TONE_cH, 125 );
    Sound_Play( _BUZZ_TONE_aHa, 500 );
    Sound_Play( _BUZZ_TONE_fS, 375 );
    Sound_Play( _BUZZ_TONE_cH, 125 );
    Sound_Play( _BUZZ_TONE_aHa, 650 );

    delay_ms(650 );
}

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
    mikrobus_logInit( _LOG_USBUART_A, 9600 );
    Delay_ms( 100 );

    mikrobus_logWrite( "----------------", _LOG_LINE );
    mikrobus_logWrite( "   BUZZ Click   ", _LOG_LINE );
    mikrobus_logWrite( "----------------", _LOG_LINE );
    Delay_ms( 100 );
}

void applicationInit()
{
    buzz_gpioDriverInit( (T_BUZZ_P)&_MIKROBUS1_GPIO );
    Delay_ms( 100 );

    mikrobus_logWrite( " Initialization ", _LOG_LINE );
    mikrobus_logWrite( " Sound  Library ", _LOG_LINE );
    buzz_soundInit();
    mikrobus_logWrite( "----------------", _LOG_LINE );
    Delay_ms( 100 );
}

void applicationTask()
{
    mikrobus_logWrite( " Play the music ", _LOG_LINE );
    buzz_melody();
    Delay_ms( 1000 );
    mikrobus_logWrite( "----------------", _LOG_LINE );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}