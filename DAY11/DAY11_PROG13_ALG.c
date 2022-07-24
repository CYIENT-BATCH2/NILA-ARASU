/*ALGORITHM:
 * 1>We have to taken the variable as first ,last and middle to search.
 * 2>Using if and else if condition doing some operation we should find the index values.
 * 3>Print the values in given position index.
 */




#include<stdio.h>
int main()
{
   int c, first, last, middle, n, search, array[100];
   printf("Enter number of elements:\n");
   scanf("%d",&n);
   printf("Enter %d integers:\n", n);
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
   printf("Enter the value to find:\n");
   scanf("%d", &search);
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search) {
         printf("%d is present at index %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);
   return 0;
}
