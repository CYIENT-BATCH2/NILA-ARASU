#include<stdio.h>
int main()
{
	int a=204;
	long int pos=7;
	printf("a=%x\n",a);
	label:
	if(pos>=0)
	{
		printf("%d",(a>>pos)&1);
		pos--;
		goto label;
	}

}
