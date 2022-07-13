#include <stdio.h>

int main() {
    int x,y=8,z;
    printf("Enter the Hexadecimal number : ");
    scanf("%X",&x);
    printf("The binary value is : ");
    loop:
    if(y--)
    {
        z = (x>>y) & 01;
        printf("%d ",z);
        goto loop;
    }
    return 0;
}
