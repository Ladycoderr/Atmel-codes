/*
 * GccApplication4.c
 *
 * Created: 7/18/2018 9:48:44 AM
 *  Author: intel
 */ 


#include <avr/io.h>
#include <util/delay.h>
#define NR (1<<0)
#define NY (1<<1)
#define NG (1<<2)

#define ER (1<<3)
#define EY (1<<4)
#define EG (1<<5)

#define SR (1<<6)
#define SY (1<<7)
#define SG (1<<0) 
 
#define WR (1<<1)
#define WY (1<<2)
#define WG (1<<3)

unsigned int seg[10] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
		void sevensegment()
		{
			int i;
			for(i=9;i>=0;i--){
			PORTC= seg[i];
			_delay_ms(500);
		}	}	
int main(void)
{
		    DDRA=0xff;
			DDRB=0xff;
			DDRC=0xff;
    while(1)
    {
        //======NORTH SIDE=====//
		//NORTH SECTION
		PORTA=PORTA &~ NR;
		PORTA=PORTA &~ NY;
		PORTA=PORTA | NG;
		// EAST SECTION
		PORTA=PORTA &~ ER;
		PORTA=PORTA | EY;
		PORTA=PORTA &~ EG;
		//SOUTH SECTION//
		PORTA=PORTA|SR;
		PORTA=PORTA &~ SY;
		PORTB = PORTB &~ SG;
		//WEST SECTION//
		PORTB=PORTB|WR;
		PORTB=PORTB &~ WY;
		PORTB = PORTB &~ WG;
		
			sevensegment();
			
	
	 //=====EAST SIDE=====//
		//EAST SECTION
		PORTA=PORTA | NR;
		PORTA=PORTA &~ NY;
		PORTA=PORTA &~ NG;
		// EAST SECTION
		PORTA=PORTA &~ ER;
		PORTA=PORTA &~ EY;
		PORTA=PORTA | EG;
		//SOUTH SECTION//
		PORTA=PORTA &~ SR;
		PORTA=PORTA | SY;
		PORTB = PORTB &~ SG;
		//WEST SECTION//
		PORTB=PORTB|WR;
		PORTB=PORTB &~ WY;
		PORTB = PORTB &~ WG;
		
			sevensegment();
			
	 //======SOUTH SIDE=====//
		//NORTH SECTION
		PORTA=PORTA | NR;
		PORTA=PORTA &~ NY;
		PORTA=PORTA &~ NG;
		// EAST SECTION
		PORTA=PORTA | ER;
		PORTA=PORTA &~ EY;
		PORTA=PORTA &~ EG;
		//SOUTH SECTION//
		PORTA=PORTA &~ SR;
		PORTA=PORTA &~ SY;
		PORTB = PORTB | SG;
		//WEST SECTION//
		PORTB=PORTB&~WR;
		PORTB=PORTB | WY;
		PORTB = PORTB &~ WG;
		
			sevensegment();
			//======WEST SIDE=====//
		//NORTH SECTION
		PORTA=PORTA &~ NR;
		PORTA=PORTA | NY;
		PORTA=PORTA &~ NG;
		// EAST SECTION
		PORTA=PORTA | ER;
		PORTA=PORTA &~ EY;
		PORTA=PORTA &~ EG;
		//SOUTH SECTION//
		PORTA=PORTA | SR;
		PORTA=PORTA &~ SY;
		PORTB = PORTB &~ SG;
		//WEST SECTION//
		PORTB=PORTB&~WR;
		PORTB=PORTB &~ WY;
		PORTB = PORTB | WG;
		
			sevensegment();
    }
}