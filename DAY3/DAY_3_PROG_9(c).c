#include<stdio.h>
int main()
{
	int a=0xAA,pos=7;
	printf("a=%d\n",a);
	label:
		if(pos>=0)
		{
			printf("%d",(a>>pos)&1);
			pos--;
			goto label;
		}
}
