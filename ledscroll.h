#ifndef _LEDSCROLL_H_
#define _LEDSCROLL_H_
void A()
{
	long long int a[10]={0b11111111011111101111111,0b11111111000000011111111};
	for(int i=0;i<=15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10001000;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		_delay_ms(50);
	}
}

void B()
{
	long long int a[10]={0b11111111011111101111111,0b11111111011111101111111,0b11111111100000001111111};
	for(int i=0;i<=15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01111111;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10001001;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		_delay_ms(50);

	}
}

void C()
{
	long long int a[10]={0b11111111111111101111111,0b11111111000000001111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10000001;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		_delay_ms(50);
	}
}

void D()
{
	long long int a[10]={0b11111111111111101111111,0b11111111100000001111111,0b11111111011111111111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10000001;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01111110;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		_delay_ms(50);
	}	
}
void E()
{
	long long int a[10]={0b11111111111111101111111,0b11111111000000001111111};
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
		a[0]=a[0]/2;
		a[1]=a[1]/2;
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

void G()
{
	long long int a[10]={0b11111111000000001111111,0b11111111111111101111111,0b11111111111100001111111,0b11111111101101111111111,0b11111111110001111111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b10000000;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01111111;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001111;
		PORTD=a[3];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=a[4];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		a[3]=a[3]/2;
		a[4]=a[4]/2;
		_delay_ms(50);
	}
}

void H()
{
	long long int a[10]={0b11111111011111101111111,0b11111111000000001111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		_delay_ms(50);
	}
}

void I()
{
	long long int a[10]={0b11111111111011111111111,0b11111111000000001111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10000001;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		_delay_ms(50);		
	}
}

void J()
{
	long long int a[10]={0b11111111000000001111111,0b11111111111011111111111,0b11111111111100011111111,0b11111111111111011111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b10000000;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b11111111;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000111;
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

void K()
{
	long long int a[10]={0b11111111111101111111111,0b11111111101111111111111,0b11111111110111111111111,0b11111111111011111111111,0b11111111101111111111111,0b11111111110111111111111,0b11111111111011111111111,0b11111111111101111111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000010;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=a[3];
		_delay_ms(1);
		PORTB=0b00000000;
		//PORTB=0b00010000;
		PORTB=0b01000000;
		PORTD=a[5];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00100000;
		PORTD=a[6];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=a[7];
		_delay_ms(1);
		PORTB=0b00000000;
		/*PORTB=0b00001000;
		PORTD=a[8];
		_delay_ms(1);
		PORTB=0b00000000;*/
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		a[3]=a[3]/2;
		a[4]=a[4]/2;
		a[5]=a[5]/2;
		a[6]=a[6]/2;
		a[7]=a[7]/2;
		a[8]=a[8]/2;
		_delay_ms(50);	
	}
}

void L()
{
	long long int a[10]={0b11111111111111101111111,0b11111111000000001111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		_delay_ms(50);
	}
}

void M()
{
	long long int a[10]={0b11111111011111101111111,0b11111111011111101111111,0b11111111101111011111111,0b11111111110110111111111,0b11111111111001111111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10000000;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01000000;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00100000;
		PORTD=a[3];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=a[4];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		a[3]=a[3]/2;
		a[4]=a[4]/2;
		_delay_ms(50);
	}
}

void N()
{
	long long int a[10]={0b11111111011111101111111,0b11111111101111111111111,0b11111111110111111111111,0b11111111111011111111111,0b11111111111101111111111,0b11111111111110111111111,0b11111111111111011111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000010;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=a[3];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=a[4];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00100000;
		PORTD=a[5];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01000000;
		PORTD=a[6];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		a[3]=a[3]/2;
		a[4]=a[4]/2;
		a[5]=a[5]/2;
		a[6]=a[6]/2;
		_delay_ms(50);
	}
}

void O()
{
	long long int a[10]={0b11111111011111101111111,0b11111111000000001111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10000001;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		_delay_ms(50);
	}
}

void P()
{
	long long int a[10]={0b11111111111111101111111,0b11111111000000001111111,0b11111111011111111111111};
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
		PORTB=0b11110000;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		_delay_ms(50);
	}
}

void Q()
{
	long long int a[10]={0b11111111011111101111111,0b11111111100000011111111,0b11111111011111111111111,0b11111111101111111111111,0b11111111110111111111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b01111110;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b10000001;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000010;
		PORTD=a[3];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=a[4];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		a[3]=a[3]/2;
		a[4]=a[4]/2;
		_delay_ms(50);	
	}
}

void R()
{
	long long int a[10]={0b11111111111111101111111,0b11111111111000001111111,0b11111111111011111111111,0b11111111111111011111111,0b11111111111110111111111,0b11111111111101111111111};
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
		PORTB=0b01100001;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=a[3];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=a[4];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000010;
		PORTD=a[5];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		a[3]=a[3]/2;
		a[4]=a[4]/2;
		a[5]=a[5]/2;
		_delay_ms(50);
	}
}

void S()
{
	long long int a[10]={0b11111111000000001111111,0b11111111111111101111111,0b11111111011111111111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b10010001;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b11110000;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001111;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		_delay_ms(50);	
	}
}
void T()
{
	long long int a[10]={0b11111111000000001111111,0b11111111111011111111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b10000000;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b11111111;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		_delay_ms(50);
	}
}

void U()
{
	long long int a[10]={0b11111111011111101111111,0b11111111100000011111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111110;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		_delay_ms(50);
	}
}

void V()
{
	long long int a[10]={0b11111111011111101111111,0b11111111111001111111111,0b11111111110110111111111,0b111111111101111011111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111000;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000010;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
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

void W()
{
	long long int a[10]={0b11111111011111101111111,0b11111111111001111111111,0b11111111110110111111111,0b11111111101111011111111,0b11111111101111011111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b11111111;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b0000010;
		PORTD=a[4];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		a[3]=a[3]/2;
		a[4]=a[4]/2;
		_delay_ms(50);	
	}
}

void X()
{
	long long int a[10]={0b11111111011111101111111,0b11111111101111011111111,0b11111111110110111111111,0b11111111111001111111111,0b11111111111001111111111,0b11111111110110111111111,0b11111111101111011111111,0b11111111011111101111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b10000000;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01000000;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00100000;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=a[3];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=a[4];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=a[5];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b0000010;
		PORTD=a[6];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000001;
		PORTD=a[7];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		a[3]=a[3]/2;
		a[4]=a[4]/2;
		a[5]=a[5]/2;
		a[6]=a[6]/2;
		a[7]=a[7]/2;
		_delay_ms(50);
	}
}

void Y()
{
	long long int a[10]={0b11111111011111101111111,0b11111111101111011111111,0b11111111110110111111111,0b11111111111001111111111,0b11111111111011111111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b10000000;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01000000;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00100000;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=a[3];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001111;
		PORTD=a[4];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		a[3]=a[3]/2;
		a[4]=a[4]/2;
		_delay_ms(50);
	}
}

void Z()
{
	long long int a[10]={0b11111111000000001111111,0b11111111101111111111111,0b11111111110111111111111,0b11111111111011111111111,0b11111111111101111111111,0b11111111111110111111111,0b11111111111111011111111};
	for(int i=0;i<15;i++)
	{
		PORTB=0b10000001;
		PORTD=a[0];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b01000000;
		PORTD=a[1];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00100000;
		PORTD=a[2];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00010000;
		PORTD=a[3];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00001000;
		PORTD=a[4];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000100;
		PORTD=a[5];
		_delay_ms(1);
		PORTB=0b00000000;
		PORTB=0b00000010;
		PORTD=a[6];
		_delay_ms(1);
		PORTB=0b00000000;
		a[0]=a[0]/2;
		a[1]=a[1]/2;
		a[2]=a[2]/2;
		a[3]=a[3]/2;
		a[4]=a[4]/2;
		a[5]=a[5]/2;
		a[6]=a[6]/2;
		_delay_ms(50);
	}
}

void scroll(char* s)
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]=='A' || s[i]=='a')
		{
			A();
		}
		else if(s[i]=='B' || s[i]=='b')
		{
			B();
		}
		else if(s[i]=='C' || s[i]=='c')
		{
			C();
		}
		else if(s[i]=='D' || s[i]=='d')
		{
			D();
		}
		else if(s[i]=='E' || s[i]=='e')
		{
			E();
		}
		else if(s[i]=='F' || s[i]=='f')
		{
			F();
		}
		else if(s[i]=='G' || s[i]=='g')
		{
			G();
		}
		else if(s[i]=='H' || s[i]=='h')
		{
			H();
		}
		else if(s[i]=='I' || s[i]=='i')
		{
			I();
		}
		else if(s[i]=='J' || s[i]=='j')
		{
			J();
		}
		else if(s[i]=='K' || s[i]=='k')
		{
			K();
		}
		else if(s[i]=='L' || s[i]=='l')
		{
			L();
		}
		else if(s[i]=='M' || s[i]=='m')
		{
			M();
		}
		else if(s[i]=='N' || s[i]=='n')
		{
			N();
		}
		else if(s[i]=='O' || s[i]=='o')
		{
			O();
		}
		else if(s[i]=='P' || s[i]=='p')
		{
			P();
		}
		else if(s[i]=='Q' || s[i]=='q')
		{
			Q();
		}
		else if(s[i]=='R' || s[i]=='r')
		{
			R();
		}
		else if(s[i]=='S' || s[i]=='s')
		{
			S();
		}
		else if(s[i]=='T' || s[i]=='t')
		{
			T();
		}
		else if(s[i]=='U' || s[i]=='u')
		{
			U();
		}
		else if(s[i]=='V' || s[i]=='v')
		{
			V();
		}
		else if(s[i]=='W' || s[i]=='w')
		{
			W();
		}
		else if(s[i]=='X' || s[i]=='x')
		{
			X();
		}
		else if(s[i]=='Y' || s[i]=='y')
		{
			Y();
		}
		else if(s[i]=='Z' || s[i]=='z')
		{
			Z();
		}
		i++;
	}
}

#endif