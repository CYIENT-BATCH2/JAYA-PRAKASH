#include <stdio.h>
int main() {
    int x=30,y=20,z=10,k;
    printf("value of k=%d\n",x+y*z/4%2-1);
    printf("value of k=%d\n",x% y+z*z);
    printf("value of k=%d\n",x*x-y/z);
    printf("value of k=%d\n",x+y/z-y);
    printf("value of y=%d",x+y-(x=y));
   /* printf("value of y=%d",x+y-x=y); */
    return 0;
}
