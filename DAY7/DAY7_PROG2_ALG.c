/*ALGORITHM:
 *   1>Start the program and user has to give the input.
 *   2>We are taken i and j values to separate the odd and even bits.
 *   3>We are doing AND operation with given number and 0xAAAAAAAA for even bits.
 *   4>We are doing AND operation with given number and 0x55555555 for odd bits.
 *   5>After getting i and j values right shift with 1 for i value and left shift by 1 for j values.
 *   6>Do OR operation for that values and print the values.
 */






#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value\n");
	scanf("%d",&n);
	i=n&0xAAAAAAAA;
	j=n&0x55555555;
	printf("%d",(i>>1)|(j<<1));
	return 0;
}
