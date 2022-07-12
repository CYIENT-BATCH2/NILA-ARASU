#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the x,y values\n");
	fflush (stdout);
	scanf("%d%d",&x,&y);
	if((x==0)||(y==0)||(x==1)||(y==1))
	{
		printf("%d&&%d=%d\n",x,y,x&&y);
		printf("%d||%d=%d\n",x,y,x||y);
		printf("%d=%d\n",x,!x);
	}
	else
		printf("invalid input\n");
}
