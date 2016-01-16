LDI R16, 15
LDI R17, 3
LDI R18, 4
petla:	
SUBI R16, 0
SUBI R18, 1

BRNE petla

petla2:	
	RJMP petla2
