#include<stdio.h>
int main()
{
	int num,pos,a;
	printf("enter the hex values\n");
	fflush (stdout);
	scanf("%x",&num);
	printf("enter the position\n");
	fflush (stdout);
	scanf("%d",&pos);
	a=num>>pos;
	printf("a=%x\n",a);
}
