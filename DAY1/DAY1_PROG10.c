#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the x,y,z values\n");
	fflush(stdout);
	scanf("%d%d%d",&x,&y,&z);
	if(x<z && y<z)
		printf("z is bigger\n");
	else if(x<y && z<y)
		printf("y is bigger\n");
	else if(y<x && z<x)
			printf("x is bigger\n");
	else if(x<y && y==z)
			printf("y,z is bigger\n");
	else if(y<x && x==z)
				printf("x,z is bigger\n");
	else if(z<x && x==z)
				printf("x,y is bigger\n");
	else if(x==y && y==z)
				printf("x,y,z is equal\n");
}
