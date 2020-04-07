#include<stdio.h>
int main()
{
	int m;
	printf("Enter Student Marks: \n");
	scanf("%d",&m);
	if(m>100||m<0)
	{
		printf("Invalid Marks. \n");
	}
	else if(m<40)
	{
		printf("Grade F. \n");
	}
	else if(m>=40&&m<=54)
	{
		printf("Grade D. \n");
	}
	else if(m>=55&&m<=69)
	{
		printf("Grade C. \n");
	}
	else if(m>=70&&m<=84)
	{
		printf("Grade B. \n");
	}
	else
	{
		printf("Grade A. \n");
	}
	return 0;
}
