/*ALGORITHM:
 * 1>Taken the user input for the register ADCON and CMCON.
 * 2>ADCON0 register inputs are and 0x3c and that value should be right shifted by 2 and stored in out varible.
 * 3>if that output is equal to 0x07 that CMCON register last 4 bit make as clear.
 * 4>else print ADCON register the given bits are not set with 0x07.
 *
 *
 */






#include<stdio.h>
int main()
{
	int CMCON,ADCON0;
	int out;
	printf("enter the values of ADCON and CMCON\n");
	fflush(stdout);
	scanf("%x%x",&ADCON0,&CMCON);
	out=(ADCON0 & 0x3c)>>2;
	if(out==0x07)
	{
		printf("CMCON=%x",(CMCON & 0xf0));
	}
	else
	{
		printf("ADCON0 register some bits are not set with 0x07");
	}

}
