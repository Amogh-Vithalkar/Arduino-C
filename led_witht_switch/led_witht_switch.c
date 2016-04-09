#include<avr/io.h>
#include<util/delay.h>
void main()
{
	DDRB=0b11111111;
	DDRD=0b00000000;
	while(1)
	{
		int a=PIND & 0b11111111;
		
		if(a==0b00000001)
		{
			PORTB=0b00000001;
			
		}
		if(a==0b00000010)
		{
			PORTB=0b00000010;
			
		}
		if(a==0b00000100)
		{
			PORTB=0b00000100;
			
		}
		if(a==0b00001000)
		{
			PORTB=0b00001000;
			
		}
		if(a==0b00010000)
		{
			PORTB=0b00010000;
			
		}
		if(a==0b00100000)
		{
			PORTB=0b00100000;
			
		}
		if(a==0b01000000)
		{
			PORTB=0b01000000;
			
		}
		if(a==0b10000000)
		{
			PORTB=0b10000000;
			
		}
		if(a==0b00000000)
		{
			PORTB=0b00000000;
			

		}
	}
}
