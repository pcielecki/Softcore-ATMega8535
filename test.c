#include<avr/io.h>

int main(void){
	DDRA |= 0xFF;
    PORTA |= 0x00;
	PORTA |= 0xAA;
	PORTA |= 0xFF;
	
		

}
