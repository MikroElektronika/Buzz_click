![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# BUZZ Click

---

- **CIC Prefix**  : BUZZ
- **Author**      : Nenad Filipovic
- **Verison**     : 1.0.0
- **Date**        : Feb 2019.

---

### Software Support

We provide a library for the BUZZ Click on our [LibStock](https://libstock.mikroe.com/projects/view/206/buzz-click-example) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library covers all the necessary functions to control BUZZ Click board. 
Library performs the communication with the device via PWM module and using Sound library.

Key functions :

- ``` buzz_gpioDriverInit( (T_BUZZ_P)&_MIKROBUS1_GPIO ) ``` - Function initializes GPIO driver for the desired MIKROBUS1.

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes GPIO and LOG structures, set PWM pin as ouput and start write log.
- Application Initialization - Initialization driver enable's - GPIO and configures the appropriate MCU pin for sound generation.
- Application Task - (code snippet) This is an example which demonstrates the use of BUZZ Click board,
     which plays Imperial March using Sound library.


```.c

void applicationTask()
{
    mikrobus_logWrite( " Play the music ", _LOG_LINE );
    buzz_melody();
    Delay_ms( 1000 );
    mikrobus_logWrite( "----------------", _LOG_LINE );
}

```

Additional Functions :

- ``` buzz_soundInit() ``` - Configures the appropriate MCU pin for sound generation.
- ``` buzz_melody() ``` - Demo melody - plays Imperial March using Sound library.

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/206/buzz-click-example) page.

Other mikroE Libraries used in the example:

- Sound
- UART


**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
