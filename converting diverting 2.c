


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC=0b11111111;
	DDRA=0b11111111;
	
	
    while(1)

    {
		PORTA=0b00000000;
		_delay_ms(100);
		
		PORTA=0b11111111 ;
		_delay_ms(100); 
		
		
		
		PORTA=0b01111110;
		_delay_ms(100);
		
		
		 
		PORTA=0b00111100;
		_delay_ms(100);
		
		
		PORTA	=0b00011000;
		_delay_ms(100);
		
	
		
		PORTA=0b00000000;
		_delay_ms(100);
		
		
		
		PORTA=0b00011000;
		_delay_ms(100);
		
		
		
		PORTA=0b00111100;
		_delay_ms(100);
		
		
		
		
		PORTA=0b01111110;
		_delay_ms(100);
		
		
		PORTA=0b11111111;
		_delay_ms(100);
		
		
    }
}