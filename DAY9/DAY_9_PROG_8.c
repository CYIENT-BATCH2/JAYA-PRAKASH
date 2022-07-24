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
