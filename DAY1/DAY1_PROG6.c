#include<stdio.h>
int main()
{
	int a1,a2,a3,a4,a5,temp;
	printf("enter the n values\n");
	fflush(stdout);
	scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
	label:
	if(a1>a2)
	{
		temp=a1;
		a1=a2;
		a2=temp;
		goto label;
	}
	if(a2>a3)
	{
		temp=a2;
		a2=a3;
		a3=temp;
		goto label;
	}
	if(a3>a4)
		{
			temp=a3;
			a3=a4;
			a4=temp;
			goto label;
		}
	if(a4>a5)
		{
			temp=a4;
			a4=a5;
			a5=temp;
			goto label;
		}
	printf("%d %d %d %d %d",a1,a2,a3,a4,a5);
}
