/*ALGORITHM:
 * 1>User has to taken the inputs as number and bit position.
 * 2>According to their requirements perform operation using function concept.
 * 3>We are sending the two arguments one is data and another is position.
 * 4>In function definition We have to write the logic is number XOR with (1<<pos).
 * 5> We are storing that value into res like a variable and return back where function call and print the output.
 */








#include<stdio.h>
int compliment(int num,int pos);
int main()
{
    int num,pos;
    int result;
    printf("enter the number and position\n");
    fflush(stdout);
    scanf("%d%d",&num,&pos);
    result=compliment(num,pos);
    printf("%d",result);

}
int compliment(int num,int pos)
{
    int res;
    res=num^(1<<pos);
    return res;
}
