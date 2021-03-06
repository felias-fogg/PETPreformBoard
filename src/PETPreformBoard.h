// maps the port for the "upAndDown" sketches pins according to the MCU type

#ifndef PETPREFORMBOARD_H
#define PETPREFORMBOARD_H

#ifndef PPB_VERSION4
#define PPB_VERSION4 'A'
#endif

#if (PPB_VERSION4 != 'A') && (PPB_VERSION4 != '0')
#error "Illegal PETPreformBoard version number: " PPB_VERSION4
#endif

#if defined(__AVR_ATmega328P__)
#define DMCOL1 2
#define DMCOL2 3
#define DMCOL3 4
#define DMCOL4 5
#define DMCOL5 6
#define DMROW1 7
#define DMROW2 8
#define DMROW3 9
#define DMROW4 10
#define DMROW5 11
#define DMROW6 12
#define DMROW7 13
#define SDA_PORT PORTC
#define SDA_PIN 4 // Arduino pin A4/18
#define SDA 18
#define SCL_PORT PORTC
#define SCL_PIN 5 // Arduino pin A5/19
#define SCL 19
#define POWER 14 // (A0)
#define VIB_IF PCIFR
#define VIB_PCIF PCIF1
#define VIB_PCINT PCINT9 // 15
#define VIB_MASK PCMSK1
#define VIB_PCIE PCIE1
#define VIB_PCICR PCICR
#define VIB_PCINT_vect PCINT1_vect
#define TX 1
#define SIM_RESET 15 // (A1) press to simulate a manual reset (while pressing RESET)
#define SIM_POR 16 // (A2) press to simulate power on reset  (while pressing RESET)
#elif defined (__AVR_ATtiny1634__)
#define DMCOL1 8
#define DMCOL2 6
#define DMCOL3 15
#define DMCOL4 10
#define DMCOL5 9
#define DMROW1 11
#define DMROW2 13
#define DMROW3 5
#define DMROW4 14
#define DMROW5 4
#define DMROW6 3
#define DMROW7 2
#define SDA_PORT PORTB
#define SDA_PIN 1 // Arduino pin 16
#define SDA 16
#define SCL_PORT PORTC
#define SCL_PIN 1 // Arduino pin 12
#define SCL 12
#define POWER 7
#define VIB_IF GIFR
#define VIB_PCIF PCIF0
#define VIB_PCINT PCINT7 // 1
#define VIB_MASK PCMSK0
#define VIB_PCIE PCIE0
#define VIB_PCICR GIMSK
#define VIB_PCINT_vect PCINT0_vect
#define OSCCAL OSCCAL0
#define TX 0
#if PPB_VERSION4 == '0' // First version of board OPEN-V4
#undef DMCOL2
#define DMCOL2 16
#undef DMCOL3
#define DMCOL3 6
#undef SDA_PIN
#define SDA_PIN 2
#undef SDA
#define SDA 15
#endif 
#else
#error "MCU type is not supported"
#endif

#endif
