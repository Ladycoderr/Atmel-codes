/*
 * multiiplexing.c
 *
 * Created: 7/13/2018 4:55:17 PM
 *  Author: intel
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	
	DDRC=0xff;
	DDRD=0xff;
	int seg[10]= {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
	int i,j,x;
    while(1)
    {
        for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)  
			{
				for(int x=0;x<10;x++){
					
					PORTD=0b00000010;
					PORTA=seg[i];
					_delay_ms(10);
					PORTD=0x01;
					PORTA=seg[j];
					_delay_ms(10);
				}}}}}			    
