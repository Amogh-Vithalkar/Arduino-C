//backward filling and forward empty
#include<avr/io.h>
#include<util/delay.h>
void main()
{
	DDRB=0b11111111;
	while(1)
	{
		//backward filling
		PORTB=0b00000000;
		_delay_ms(500);
		PORTB=0b10000000;
		_delay_ms(500);
		PORTB=0b11000000;
		_delay_ms(500);
		PORTB=0b11100000;
		_delay_ms(500);
		PORTB=0b11110000;
		_delay_ms(500);
		PORTB=0b11111000;
		_delay_ms(500);
		PORTB=0b11111100;
		_delay_ms(500);
		PORTB=0b11111110;
		_delay_ms(500);
		PORTB=0b11111111;
		_delay_ms(500);


		//forward empty
		PORTB=0b11111110;
		_delay_ms(500);
		PORTB=0b11111100;
		_delay_ms(500);
		PORTB=0b11111000;
		_delay_ms(500);
		PORTB=0b11110000;
		_delay_ms(500);
		PORTB=0b11100000;
		_delay_ms(500);
		PORTB=0b11000000;
		_delay_ms(500);
		PORTB=0b10000000;
		_delay_ms(500);		
	}

}
