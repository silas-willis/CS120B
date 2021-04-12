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
DDRB = 0x00 ; 
PORTB = 0xFF ; 
DDRC = 0x00 ; 
PORTC = 0xFF ; 
DDRD = 0xFF ; 
PORTD = 0x00 ; 



unsigned char A = 0x00 ; 
unsigned char B = 0x00 ; 
unsigned char C = 0x00 ; 
unsigned char D = 0x00 ; 
unsigned char temp = 0x00 ;

 /* Insert your solution below */
    while (1) {
	 
	A = PINA ; 
	B = PINB ; 
	C = PINC ; 
	
if( (A + B + C ) > 0x8C){
D = 0x01 ;
}
if((A - C > 0x50) || (C - A > 0x50 )){
D = D | 0x02 ; 
}

temp = ((A+B+C) >> 2) << 2 ; 

D = D |temp  ; 




PORTD = D ;

}
    return 0;
}

