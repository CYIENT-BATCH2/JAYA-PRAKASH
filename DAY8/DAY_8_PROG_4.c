#include<stdio.h>
int toggle(int data, int pos)
{
    data=data^(1<<pos);
        return data;
}
int main()
{
    int pos,data,result,bit=7;
    printf("Enter the Data\n"); // Take inputfrom user as data
    scanf("%d",&data);
    printf("Enter the Pos\n"); // Take position also
    scanf("%d",&pos);
    
   result=toggle(data,pos); // formula for toggle or flip the bit
   
    printf("result=%d\n",result);
    printf("Binary of Result\n"); //print the binary of that result for checking bit is toggle or not
    while(bit>=0)
    {
       printf("%d",(result>>bit)&1);
        bit--;
    }
}
