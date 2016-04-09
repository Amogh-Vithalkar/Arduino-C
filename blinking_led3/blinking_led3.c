//forward filling and backward empty
#include<avr/io.h>
#include<util/delay.h>
void main()
{
	DDRB=0b11111111;
	while(1)
	{
		//forward filling
		PORTB=0b00000000;
		_delay_ms(500);
		PORTB=0b00000001;
		_delay_ms(500);
		PORTB=0b00000011;
		_delay_ms(500);
		PORTB=0b00000111;
		_delay_ms(500);
		PORTB=0b00001111;
		_delay_ms(500);
		PORTB=0b00011111;
		_delay_ms(500);
		PORTB=0b00111111;
		_delay_ms(500);
		PORTB=0b01111111;
		_delay_ms(500);
		PORTB=0b11111111;
		_delay_ms(500);

		//backward empty
		PORTB=0b01111111;
		_delay_ms(500);
		PORTB=0b00111111;
		_delay_ms(500);
		PORTB=0b00011111;
		_delay_ms(500);
		PORTB=0b00001111;
		_delay_ms(500);
		PORTB=0b00000111;
		_delay_ms(500);
		PORTB=0b00000011;
		_delay_ms(500);
		PORTB=0b00000001;
		_delay_ms(500);
	}

}
