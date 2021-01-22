#include <msp430.h>
#include <stdio.h>

/**
 * main.c
 */
void main(void)
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer
	printf("Hello World!"\n);
	return 0;

}
