//Scrolling matrix of led
#include<avr/io.h>
#include<util/delay.h>

void E()
{
	long long int a[10]={0b111111111111111111111111101111111,0b111111111111111111000000001111111,0b111111111111111011111111111111111,0b111111110000000011111111111111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10001001;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b11111111;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10010000;
		PORTD=a[3];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		a[3]=a[3]/2;
		_delay_ms(50);
	}
}

void F()
{
	long long int a[10]={0b11111111111111101111111,0b11111111000000001111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10010000;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		_delay_ms(50);
	}
}


void main()
{
	DDRB=0b11111111;
	DDRD=0b11111111;
	while(1)
	{
		E();
	}
}
