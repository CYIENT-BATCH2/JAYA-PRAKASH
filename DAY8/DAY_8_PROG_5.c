#include <stdio.h>

int main() {
  
  int arr[10],*p;
  int i,j,temp,n;
  p=arr;
  printf("Enter the array size\n");
  scanf("%d",&n);
  
  printf("Enter the number\n");
for(i=0;i<n;i++)
{
    scanf("%d",p+i);
}
printf("Number:\t");
for(i=0;i<n;i++)
{
    printf("%d\t",arr[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(*(p+i)>*(p+j))
        {
            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
        }
    }
}
printf("\n");
for(i=0;i<n;i++)
{
    printf("%d\n",*(p+i));
}
}
