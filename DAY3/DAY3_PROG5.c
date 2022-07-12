#include<stdio.h>
int main()
{
	int num=0xfe,x;
	int pos=3;
	x=num>>pos;
	printf("x=%d\n",x);
}
