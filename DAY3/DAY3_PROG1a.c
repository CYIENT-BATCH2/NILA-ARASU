#include<stdio.h>
int main()
{
     int a=0xFF,pos=7;
     label:
     	if(pos>=0)
     	{
     		printf("%d",(a>>pos)&1);
     		pos--;
     		goto label;
     	}

 }
