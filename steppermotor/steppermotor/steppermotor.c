/*
 * steppermotor.c
 *
 * Created: 27-03-2016 10:44:29
 *  Author: RISHABH JAIN
 */ 


#include <avr/io.h>
#include <util/delay.h>


void anticlockwise()
{
	int a,i;
	PORTD=0xFF;
	a=0x01;
     for(i=0;i<5;i++)
	 {
		PORTD=a;
		_delay_ms(500);
		a=a<<1;
      }  //TODO:: Please write your application code 
    }

void clockwise()
{
	int a,i;
	PORTD=0xFF;
	a=0x08;
	
		for(i=0;i<5;i++)
		{
			PORTD=a;
			_delay_ms(500);
			a=a>>1;
		}  //TODO:: Please write your application code
	}

void main()
{
	while(1)
	{
		
		clockwise();
		anticlockwise();
	}
}