//0-9    7-segment display
#include<avr/io.h>
#include<util/delay.h>

void main()
{
	int i,array[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0xfd,0x07,0x7f,0x6f};
	DDRB=0xff;
	while(1)
	{
		for(i=0;i<=9;i++)
		{
			PORTB=array[i];
			_delay_ms(500);
		}
	}
}
