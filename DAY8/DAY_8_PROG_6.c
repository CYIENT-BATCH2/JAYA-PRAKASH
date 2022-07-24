#include <stdio.h>
int main()
{
   int num,num1,num2;
   printf("Enter the number for TMR0ON\n");// input for the TMR0ON
   scanf("%d",&num);
   printf("Binery for TMR0oON register\n");// Binary for TMR0ON
   if(num>=0 && num<=255)
   {
   for(int bit=7;bit>=0;bit--)
   {
       printf("%d",((num>>bit)&1));
   }
   printf("\n");
   if((num & 136)==136) //Check the number is equal to that bit
   {
        printf("TMR0ON and PSA bit already set\n");
   }
   num1=(num|(136)); // if that bit is not set then OR operation for the set bit
   printf("After setting the TMR0ON and PSA bit\n");
   for(int bit=7;bit>=0;bit--)
   {
       printf("%d",((num1>>bit)&1));
   }
   printf("\n");
   
   printf("T0PS2, T0PS1, T0PS0 bits in T0CON register\n");
   if(num==243) // Check the register value is not 0xf0 
   {
       num2=num&7; //Doing adding operation with that number 
       printf("value of Register=%d",num2);
   }
}  
}
