#include<avr/io.h>
#include<util/delay.h>

void A()
{
	int i;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10001000;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;	
	}
}

void B()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01111110;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10001001;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void C()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b11111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10000001;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void D()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b11111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10000001;
		PORTD=0b10000000;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01111110;
		PORTD=0b01111111;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void E()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b11111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10001001;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void F()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b11111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10010000;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void G()
{
	int i;
	for(i=0;i<100;i++)
	{
		PORTB=0b10000000;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01111111;
		PORTD=0b11111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=0b11110000;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001111;
		PORTD=0b10110111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=0b11000111;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void H()
{
	int i;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void I()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b11101111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10000001;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void J()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b10000000;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b11111111;
		PORTD=0b11101111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=0b11110001;
		_delay_ms(1);
		PORTB=0b00000000;

		PORTB=0b00000111;
		PORTD=0b11111101;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void K()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b11110111;
		_delay_ms(1);
		PORTB=0b00000000;

		PORTB=0b00000010;
		PORTD=0b10111111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=0b11011111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=0b11101111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		
		PORTB=0b01000000;
		PORTD=0b10111111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00100000;
		PORTD=0b11011111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=0b11101111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=0b11110111;
		_delay_ms(1);
		PORTB=0b00000000;
		

	}
}

void L()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b11111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void M()
{
	int i;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10000000;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01000000;
		PORTD=0b10111101;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00100000;
		PORTD=0b11011011;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=0b11100111;
		_delay_ms(1);
		PORTB=0b00000000;

	}
}

void N()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000010;
		PORTD=0b10111111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=0b11011111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=0b11101111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=0b11110111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00100000;
		PORTD=0b11111011;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01000000;
		PORTD=0b11111101;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void O()
{
	int i;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10000001;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void P()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b11111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10010000;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b11110000;
		PORTD=0b01111111;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void Q()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b01111110;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10000001;
		PORTD=0b10000001;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=0b01111111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000010;
		PORTD=0b10111111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=0b11011111;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void R()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b11111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10010000;
		PORTD=0b11100000;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01100001;
		PORTD=0b11101111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=0b11111101;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=0b11111011;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000010;
		PORTD=0b11110111;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void S()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b10010001;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b11110000;
		PORTD=0b11111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001111;
		PORTD=0b01111111;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void T()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b10000000;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b11111111;
		PORTD=0b11101111;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void U()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void V()
{
	int i=100;
	for(i=0;i<100;i++)
	{
			
	}
}

void W()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b11111111;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=0b11100111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=0b11011011;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b0000010;
		PORTD=0b10111101;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void X()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b10000000;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01000000;
		PORTD=0b10111101;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00100000;
		PORTD=0b11011011;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=0b11100111;
		_delay_ms(1);
		PORTB=0b00000000;

		PORTB=0b00001000;
		PORTD=0b11100111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=0b11011011;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b0000010;
		PORTD=0b10111101;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void Y()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b10000000;
		PORTD=0b01111110;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01000000;
		PORTD=0b10111101;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00100000;
		PORTD=0b11011011;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=0b11100111;
		_delay_ms(1);
		PORTB=0b00000000;
		
		PORTB=0b00001111;
		PORTD=0b11110111;
		_delay_ms(1);
		PORTB=0b00000000;
		
	}
}

void Z()
{
	int i=100;
	for(i=0;i<100;i++)
	{
		PORTB=0b10000001;
		PORTD=0b00000000;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01000000;
		PORTD=0b10111111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00100000;
		PORTD=0b11011111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=0b11101111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=0b11110111;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=0b11111011;
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000010;
		PORTD=0b11111101;
		_delay_ms(1);
		PORTB=0b00000000;
	}
}

void main()
{
	DDRB=0b11111111;
	DDRD=0b11111111;
	while(1)
	{
		G();
	}
}
