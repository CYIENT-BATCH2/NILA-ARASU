#include<stdio.h>
int main()
{
	int rem,num,temp,rev=0;
	printf("enter the number\n");
	fflush (stdout);
	scanf("%d",&num);
	temp=num;
	label:
	if(rem>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;

	}
	if(num!=0)
		goto label;
	if(temp==rev)
		printf("palindrome\n");
	else
		printf("Not palindrome\n");
}
