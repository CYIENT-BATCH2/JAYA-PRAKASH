/*#include <stdio.h>
int main()
{
    int SSPSTAT;
    printf("Enter the HEXA value for SSPSTAT Register: ");
    scanf("%x",&SSPSTAT);
    printf("Binary representation of Value of  SSPSTAT Register : ");
    for(int i = 7;i >= 0; i--)
    {
        printf("%d ", (SSPSTAT >> i) & 1);
    }
    SSPSTAT = SSPSTAT & 0XA7;
    printf("\nBinary representation of Value of SSPSTAT Register after cleared the CKE , P, S: ");
    for(int i = 7;i >= 0; i--)
    {
        printf("%d ", (SSPSTAT >> i) & 1);
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int SSPSTAT, BF = 0, UA = 0, SMP = 0;
    printf("Enter the HEXA value for SSPSTAT Register: ");
    scanf("%x",&SSPSTAT);
    printf("Binary representation of Value of %x SSPSTAT Register : ", SSPSTAT);
    for(int i = 7;i >= 0; i--)
    {
        printf("%d ", (SSPSTAT >> i) & 1);
    }
    if(SSPSTAT == 0x55)
    {

        BF = (SSPSTAT & ( 1 << 0)) >> 0;
        printf("BF in SSPSTAT register is : %d\n", BF);
        UA = (SSPSTAT & ( 1 << 1)) >> 1;
        printf("UA in SSPSTAT register is : %d\n", UA);
        SMP = (SSPSTAT & ( 1 << 7)) >> 7;
        printf(" SMP in SSPSTAT register is : %d\n", SMP);
    }
    else
    {
        printf("The value of SSPSTAT REGISTER IS NOT EQUAL TO 0X55");
    }

}
