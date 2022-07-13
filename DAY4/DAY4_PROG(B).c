#include<stdio.h>
int main()
{
	int x=10,y=20,z;
	z=x<y;
	printf("z=%d\n",z);
	z=x>y;
	printf("z=%d\n",z);
	z=x<=y;
	printf("z=%d\n",z);
	z=(x*x-y)>(y*y-x);
	printf("%d\n",z);
	z=(x*x*x)<(y*x*x);
	printf("z=%d\n",z);
	z=((x*y)!=(y*x));
	printf("z=%d\n",z);
	z=((x*y)==(y*x));
	printf("z=%d\n",z);


}
