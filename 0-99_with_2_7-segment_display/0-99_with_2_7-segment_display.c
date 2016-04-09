//0-99_with_2_7-segment_display
#include<avr/io.h>
#include<util/delay.h>

void main()
{
	int i,j,array[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0xfd,0x07,0x7f,0x6f};
	DDRB=0xff;
	DDRC=0xff;
	while(1)
	{
		for(i=0;i<=9;i++)
		{
			for(j=0;j<=9;j++)
			{
			    PORTB=array[i];
				PORTC=array[j];
				_delay_ms(500);
			}
		}
	}
}
