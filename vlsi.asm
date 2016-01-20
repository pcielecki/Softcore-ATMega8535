.include "m8535def.inc"

.EQU LED_PORT = PORTA
.EQU LED_DDR  = DDRA
.DEF CTR 	  = R16
.DEF TEMP	  = R17

.org $00
RJMP main

main:
	LDI TEMP, 0b01111111
	OUT LED_DDR, TEMP

	LDI R16, 10
	
	petla:
	 	OUT LED_PORT, R16
		SUBI R16, 1
		BRNE petla
	
	LDI R16, $7F
	OUT LED_PORT, R16
	petla_glowna:
		RJMP petla_glowna
