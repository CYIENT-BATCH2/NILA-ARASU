/*AlGORITHM:
 * 1>Enter the TOCON register value.
 * 2>According to requirement 1st and last bit only set without disturbing the other bits.
 * 3>We are using bitwise OR and left shift operator and get the output.
 */

/*#include <stdio.h>
int main() {
    int TOCON;
    printf("Enter the value for TMROON : ");
    fflush(stdout);
    scanf("%x", &TOCON);

    printf("Binary representation of TMROON Register value is: ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (TOCON>>i) & 1);
    }

    TOCON = TOCON | 1 ;
    TOCON = TOCON | 1 << 7;
    printf("TMROON Register value after SET to TMROON AND PSA: ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (TOCON >> i) & 1);
    }

}*/


/*2>ALGORITHM:
 * 1>Enter the values of TOCON register value.
 * 2>if that value is equal to 0xf3 and find the TOPS0,TOPS1,TOPS2 value using bitwise operator.
 * 3>else that value is not equal to 0xf3.
 *
 */

#include<stdio.h>
int main()
{
    int TOCON,TOPS2, TOPS1, TOPS0;

    printf("Enter the value for TOCON : ");
    fflush(stdout);
    scanf("%x", &TOCON);

    printf("Binary representation of TOCON Register value is: ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (TOCON>>i) & 1);
    }
    if(TOCON == 0xF3)
    {
        TOPS0 = (TOCON & 0x01) ;
        printf("\nThe TOPSO Bit value is %d\n", TOPS0);
        TOPS1 = (TOCON & 0x02) >> 1;
        printf("The TOPS1 Bit value is %d\n", TOPS1);
        TOPS2 = (TOCON & 0x04) >> 2;
        printf("The TOPS2 Bit value is %d\n", TOPS2);

    }
    else
    {
        printf("TOCON Register is not equal to  0xF3");
    }
  return 0;
}

