#include<stdio.h>
int main()
{
	int num;
	printf("enter the values\n");
	fflush (stdout);
	scanf("%d",&num);
	(num>0)?printf("positive number\n"):printf("negative number\n");

}
