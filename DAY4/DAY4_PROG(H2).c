#include<stdio.h>
int main()
{
	int num;
	printf("enter the values\n");
	fflush (stdout);
	scanf("%d",&num);
	(num&1)==0?printf("even number\n"):printf("odd number\n");

}
