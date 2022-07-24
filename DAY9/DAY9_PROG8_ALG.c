/*ALGORITHM:
 * 1>Enter the CMCON and ADCONO register value.
 * 2>Taken the result as variable to store the values.
 * 3>Using bitwise operator we are finding the value if some bits are set to 0x06 in ADCONO register.
 * 4>else print ADCONO value not equal to 0x06.
 */

#include <stdio.h>
int main() {
    int CMCON, ADCONO,res;

    printf("Please Enter the 1byte value for CMCON and ADCONO: ");
    scanf("%x%x", &CMCON, &ADCONO);
    printf("Binary Representation of the CMCON value is the : ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (CMCON >> i) & 1);
    }
     printf("\nBinary Representation of the ADCONO value is the : ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (ADCONO >> i) & 1);
    }

    res = (ADCONO & 0x31)>>3;
     if(res == 0x06)
    {
       CMCON = CMCON | (1 << 3);
       CMCON = CMCON | (1 << 6);
       CMCON = CMCON | (1 << 7);
       printf("\nBinary Representation of the CMCON value after the set to bit given bits : ");
      for(int i = 7; i >= 0; i--)
     {
        printf("%d ", (CMCON >> i) & 1);
     }
    }
    else
    {
        printf(" register ADCON0 value is not equal to  0x06");
    }
}
