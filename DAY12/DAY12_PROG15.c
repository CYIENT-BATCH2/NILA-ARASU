/*ALGORITHM:
 * 1>Taken the array of strings and we have to print the position of array.
 * 2>We have to taken the empty strings and doing some operation we have to print CYIENT instead of empty strings.
 * 3>Print the position  and display it.
 */








#include <stdio.h>
int main()
{
 char *a[]={"india","tamilnadu","kallakuruchi","sankarapuram"," ","street"};
 int size=sizeof a/sizeof(a[0]);
 int pos=0;
 printf("%d\n",size);
 int i;

 for(i=0;i<6;i++){

 if(a[i]==" ")
 {
a[i]="CYIENT\n";
pos=i;
 printf("%s",*(a+i));
 }
 }
printf("pos=%d\n",pos);

}
