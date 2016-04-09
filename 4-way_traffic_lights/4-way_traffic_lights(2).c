//4-way traffic lights 
#include<avr/io.h>
#include<util/delay.h>

void main()
{
	int i,j,k,array[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0xfd,0x07,0x7f,0x6f};
	DDRA=0xff;
	DDRB=0xff;
	DDRC=0xff;
	DDRD=0xff;

	while(1)
	{
		for(i=29;i>=0;i--)
		{
			j=i%10;
			k=i/10;	
			PORTA=array[j];
			PORTB=array[k];
			PORTC=0b10000001;
			PORTD=0b00100001;
			_delay_ms(200);
		}

		for(i=5;i>=0;i--)
		{
			j=i%10;
			k=i/10;	
			PORTA=array[j];
			PORTB=array[k];
			PORTC=0b01000010;
			PORTD=0b00100001;
			_delay_ms(200);
		}

		for(i=29;i>=0;i--)
		{
			j=i%10;
			k=i/10;	
			PORTA=array[j];
			PORTB=array[k];
			PORTC=0b00100100;
			PORTD=0b00100001;
			_delay_ms(200);
		}
		
		for(i=5;i>=0;i--)
		{
			j=i%10;
			k=i/10;	
			PORTA=array[j];
			PORTB=array[k];
			PORTC=0b00100010;
			PORTD=0b01000001;
			_delay_ms(200);
		}

		for(i=29;i>=0;i--)
		{
			j=i%10;
			k=i/10;	
			PORTA=array[j];
			PORTB=array[k];
			PORTC=0b00100001;
			PORTD=0b10000001;
			_delay_ms(200);
		}

		for(i=5;i>=0;i--)
		{
			j=i%10;
			k=i/10;	
			PORTA=array[j];
			PORTB=array[k];
			PORTC=0b00100001;
			PORTD=0b01000010;
			_delay_ms(200);
		}

		for(i=29;i>=0;i--)
		{
			j=i%10;
			k=i/10;	
			PORTA=array[j];
			PORTB=array[k];
			PORTC=0b00100001;
			PORTD=0b00100100;
			_delay_ms(200);
		}

		for(i=5;i>=0;i--)
		{
			j=i%10;
			k=i/10;	
			PORTA=array[j];
			PORTB=array[k];
			PORTC=0b01000001;
			PORTD=0b00100010;
			_delay_ms(200);
		}

		for(i=29;i>=0;i--)
		{
			j=i%10;
			k=i/10;	
			PORTA=array[j];
			PORTB=array[k];
			PORTC=0b10000001;
			PORTD=0b00100001;
			_delay_ms(200);
		}
	}
}
