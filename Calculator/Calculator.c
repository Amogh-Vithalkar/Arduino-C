#include<avr/io.h>
#include<util/delay.h>
#include<lcd-4bit.h>

void resultdisp(long long int a)
{
	long int i;
	while(a>10)
	{
		i=a%10;
		bit4cmd(0x04);
		bit4data(i+48);
		a=a/10;
	}
	while(a!=0)
	{
		i=a%10;
		bit4cmd(0x06);
		bit4data(i+48);
		a=a/10;
	}


}

int keypad()
{
	while(1){
	PINC=0b11111111;
	PORTA=0b11111110;
	if(PINC==0b11111110)
	{
		//On and cc
		return 21;	
	}
	else if(PINC==0b11111101)
	{
		return 0;
		_delay_ms(500);
	}
	else if(PINC==0b11111011)
	{
		//result
		//is equal to
		return 14;
	}
	else if(PINC==0b11110111)
	{
		//Addition
		return 10;
	}
	PORTA=0b11111101;
	if(PINC==0b11111110)
	{
		return 1;
		_delay_ms(500);
	}
	else if(PINC==0b11111101)
	{
		return 2;
		_delay_ms(500);
	}
	else if(PINC==0b11111011)
	{
		return 3;
		_delay_ms(500);
	}
	else if(PINC==0b11110111)
	{
		//Subtraction
		return 11;
	}
	PORTA=0b11111011;
	if(PINC==0b11111110)
	{
		return 4;
		_delay_ms(500);
	}
	else if(PINC==0b11111101)
	{
		return 5;
		_delay_ms(500);
	}
	else if(PINC==0b11111011)
	{
		return 6;
		_delay_ms(500);
	}
	else if(PINC==0b11110111)
	{
		//Multiplication
		return 12;
	}
	PORTA=0b11110111;
	if(PINC==0b11111110)
	{
		return 7;
		_delay_ms(500);
	}
	else if(PINC==0b11111101)
	{
		return 8;
		_delay_ms(500);
	}
	else if(PINC==0b11111011)
	{
		return 9;
		_delay_ms(500);
	}
	else if(PINC==0b11110111)
	{
		//Division
		return 13;
	}
	}
}

void main()
{
	DDRA=0b11111111;
	DDRB=0b11111111;
	DDRC=0b00000000;
	long long int t=0,a,z,y,c=0,d=0,p=0,result;
	bit4cmd(0x02);
	bit4cmd(0x28);
	bit4cmd(0x06);
	bit4cmd(0x0C);
	while(1)
	{
		int loop=1;
START:		
		y=keypad();
		if(y==21)
		{
			bit4cmd(0x02);
			bit4cmd(0x28);
			bit4cmd(0x06);
			bit4cmd(0x0C);
			bit4cmd(0x01);
			t=0;
			a=0;
			z=0;
			y=0;
			c=0;
			d=0;
			p=0;
			result=0;
			goto START;
		}
		if(y==10 | y==11 | y==12 | y==13 | y==14)
		{
		
			a=y;
			while(loop)
			{
				if(y==21)
				{
					bit4cmd(0x02);
					bit4cmd(0x28);
					bit4cmd(0x06);
					bit4cmd(0x0C);
					bit4cmd(0x01);
					t=0;
					a=0;
					z=0;
					y=0;
					c=0;	
					d=0;
					p=0;
					result=0;
					goto START;
				}
				z=keypad();
				if(z==14)
				{
					loop=0;	
				}
				else if(z<10)
				{
					d=z;
					t = t*10 + d;
					bit4cmd(0xCF);
					resultdisp(t);
					_delay_ms(500);
				
				}
				
			}
				if(a==10)
				{
					result=p+t;

				}
				if(a==11)
				{
					result=p-t;
				}
				if(a==12)
				{
					result=p*t;
				}
				if(a==13)
				{
					if(t!=0)
					{
						result=p/t;
					}
					else
					{
						bit4string("Undefined");
					}
				}
				bit4cmd(0x01);
				bit4cmd(0x8F);
				resultdisp(result);
		}
		else
		{
			if(y==21)
			{
				bit4cmd(0x02);
				bit4cmd(0x28);
				bit4cmd(0x06);
				bit4cmd(0x0C);
				bit4cmd(0x01);
				t=0;
				a=0;
				z=0;
				y=0;
				c=0;
				d=0;
				p=0;
				result=0;
				goto START;
			}
			c=y;
			p = p*10 + c;
			bit4cmd(0x8F);
			resultdisp(p);
			_delay_ms(500);
			
		}
			
	}
}
