#include<stdio.h>
int main()
{
	int i=5;
	short int s=4;
    long int l=8;
    float f=2.5;
    double d=23.4;
    printf("%ld %ld\n",sizeof(int),sizeof(i));
    printf("%ld %ld\n",sizeof(short int),sizeof(s));
    printf("%ld %ld\n",sizeof(long int),sizeof(l));
    printf("%ld %ld\n",sizeof(float),sizeof(f));
    printf("%ld %ld\n",sizeof(double),sizeof(d));
}
