/*	Author: swill048
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {

    /* Insert DDR and PORT initializations */
DDRA = 0x00 ; 
PORTA = 0xFF ; 
DDRB = 0xFF ; 
PORTB = 0x00 ; 
DDRC = 0xFF ; 
PORTC = 0x00 ; 


unsigned char tmpB = 0x00 ; 
unsigned char tmpA0 = 0x00 ;
unsigned char tmpA1 = 0x00 ; 
unsigned char cntavail = 0x00 ; 
  /* Insert your solution below */
    while (1) {
	tmpA0 = PINA & 0x0F ; 

	if(tmpA0 == 0x00){
	cntavail = 0x04 ; 
	}
	else if(tmpA0 == 0x0F){
	cntavail = 0x00 ; 
	}

	
	else if(tmpA0 == 0x01 || tmpA0 == 0x02 || tmpA0 == 0x04 || tmpA0 == 0x08){
	cntavail = 0x03 ; 
	}
	else if(tmpA0 == 0x0C || tmpA0 == 0x0A || tmpA0 == 0x09 || tmpA0 == 0x06 || tmpA0 == 0x05 || tmpA0 == 0x03 ){
	cntavail = 0x02 ; 
	}
	else{
	cntavail = 0x01 ; 
	}

PORTC = cntavail  ; 
}
    return 0;
}

