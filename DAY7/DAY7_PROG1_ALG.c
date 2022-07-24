/*ALGORITHM:
 * 1>We are taken the input values in hex decimal and taken i and temp as char datatype.
 * 2>According to our requirements to convert little endian to big endian ,initially we are taking temp variable .
 * 3>Doing OR operation betwee temp and input values and that value is stored in temp.
 * 4>After doing that value OR with (big<<8) and stored in to big.
 * 5>Input values are right shifted by 8 times and the values.
 */





#include<stdio.h>
int main()
{
    unsigned int big=0;
    unsigned char temp=0,i;
   unsigned int l=0x12345678;
    for(i=0;i<4;i++)
    {
    	temp=0;
    	temp=l|temp;
    	big=temp|(big<<8);
    	l=l>>8;

    }
    printf("big endian=%x\n",big);
}
