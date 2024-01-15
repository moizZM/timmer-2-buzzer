#include <avr/io.h>
#define F_CPU 1000000UL
#include "util/delay.h"


int main(void)
{
   DDRB = 0xFF;
   PORTB = 0x00;
   DDRC = 0x00;
   PORTC = 0xFF;
   
   TCCR2 |= (1 << WGM21) ;
   TCCR2 |= (1 << COM20);
   TCCR2 |= (1 << CS20);
   
    while (1) 
    {
		
			if((PINC & (1 << 3))==0){
				OCR2 = 0;
				_delay_ms(100);
			
				OCR2 = 50;
				_delay_ms(100);
					OCR2 = 100;
					_delay_ms(100);
					
					OCR2 = 150;
					_delay_ms(100);
		
			OCR2 = 200;
			_delay_ms(100);
			
			OCR2 = 250;
			_delay_ms(100);
			}
			
				
			
    }
}

