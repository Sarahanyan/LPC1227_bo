/*
===============================================================================
 Name        : main.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#include "LPC122x.h"

void dly (void);

int main(void)
{
	LPC_GPIO1->DIR=(1<<6);
    while(1)
    {
    	LPC_GPIO1->OUT = LPC_GPIO1->OUT&~(1<<6);
    	dly();
    	LPC_GPIO1->OUT = LPC_GPIO1->OUT|(1<<6);
    	dly();
    }
    return 0 ;
}

void dly (void)
{
volatile unsigned long i;
for (i=0;i<300000;i++)
{
}
}
