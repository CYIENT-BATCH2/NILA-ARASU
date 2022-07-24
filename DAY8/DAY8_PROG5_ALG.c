/*ALGORITHM:
 * 1>Taken the input as user of array.
 * 2>To find the array size and taken the variable as i and j.
 * 3>Using pointer  we store the array address.
 * 4>Normally 1st dereference value is stored in temp and 2nd dereference value is stored in 1st variable.
 * 5>Untill the condition false it should repeat.
 * 6>print the sorted values.
 */


#include<stdio.h>
int main()
{
	int a[5];
	int temp,i,j;
	int n=sizeof a/sizeof a[0];
    printf("enter the elements\n");
    fflush(stdout);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int *p=a;
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(*(p+i)>*(p+j))
    		{
    			temp=*(p+i);
    			*(p+i)=*(p+j);
    			*(p+j)=temp;
    		}
    	}
    }
printf("the sorted elements\n");
for(i=0;i<n;i++)
{
	printf("%d ",*(p+i));
}

}

