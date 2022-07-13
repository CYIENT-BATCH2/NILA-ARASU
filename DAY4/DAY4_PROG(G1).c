#include<stdio.h>
int main()
{
   int x,y,temp;
   printf("enter the x and y values\n");
   fflush(stdout);
   scanf("%d%d",&x,&y);
   temp=x;
   x=y;
   y=temp;
   printf("x=%d,y=%d\n",x,y);
}
