#include<stdio.h>
int main()
{
	int num;
	printf("enter the number of balls\n");
	fflush(stdout);
	scanf("%d",&num);
	if((num&1)==0)
		printf("even number\n");
	else
		printf("odd number\n");

}
