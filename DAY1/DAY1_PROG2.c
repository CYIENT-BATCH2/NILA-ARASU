#include<stdio.h>
int main()
{
	int uc,lc;
	char ch;
	printf("enter the char\n");
	fflush(stdout);
	scanf(" %c",&ch);
	lc=(ch=='a' || ch=='e' || ch=='i' ||ch=='o' || ch=='u');
	uc=(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
	if(lc||uc)
		printf("vowels\n");
	else
		printf("consonants\n");
}
