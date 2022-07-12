#include<stdio.h>
int main()
{
	char ch;
	printf("enter the alphabet\n");
	fflush (stdout);
	scanf("%c",&ch);
	((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))?printf("%c is alphabet\n",ch):printf("%c is not an alphabet\n",ch);
}
