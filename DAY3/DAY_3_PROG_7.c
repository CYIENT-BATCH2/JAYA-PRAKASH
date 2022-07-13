#include<stdio.h>
int main()
{
	int age_year,month;
	int birth_year,birth_month;
	int current_year,current_month;
	printf("enter birth year and month\n");
	scanf("%d%d",&birth_month,&birth_year);
	printf("enter current year and month\n");
	scanf("%d%d",&current_month,&current_year);
	if(birth_month>current_month)
	{
    age_year=(current_year-birth_year)-1;
    printf("age in year:%d\n",age_year);
    month=(12-birth_month)+current_month;
    printf("age in month:%d\n",month);
    return 0;
	}
	else
	{
	age_year=current_year-birth_year;
	printf("age in year:%d\n",age_year);
	month=current_month-birth_month;
	printf("age in month:%d\n",month);
	}
}
