 #include <stdio.h>

    int main() 
    {
    int a1,a2,a3,a4,a5,a6,a7,a8,sum1,c1,average1;
    float b1,b2,b3,b4,b5,b6,b7,sum2,sum3,average2,average3,c2;
    printf("enter the num\n");
    scanf("%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8);
    printf("enter the float num\n");
    scanf(" %f%f%f%f%f%f%f",&b1,&b2,&b3,&b4,&b5,&b6,&b7);
    sum1=a1+a2+a3+a4+a5+a6+a7+a8;
    printf("sum of int value=%d\n",sum1);
    sum2=b1+b2+b3+b4+b5+b6+b7;
    printf("sum of float val=%.2f\n",sum2);
    average1=sum1/8;
    printf("int average=%d\n",average1);
    average2=sum1/7;
    printf("float average=%.2f\n",average2);
    sum3=sum1/sum2;
    printf(" divide of sum of int&float=%.2f\n",sum3);
    average3=average1/average2;
    printf("divide of average=%.2f\n",average3);
    a1=b1*10; a2=b2*10; a3=b3*10; a4=b4*10; a5=b5*10; a6=b6*10;a7=b7*10;
    printf("float into int=%d %d %d %d %d %d %d\n",a1,a2,a3,a4,a5,a6,a7);
    }
