#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the x and y values\n");
	fflush (stdout);
	scanf("%d%d",&x,&y);
	(x>y)?printf("y is bigger\n"):printf("x is bigger\n");

}
