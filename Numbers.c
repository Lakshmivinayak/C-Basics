#include<stdio.h>
void main()
{
	int Number;
	printf("Enter Your Number");
	scanf("%d", &Number);
	if(Number>0)
	{
		printf("Your Number is positive\n");
		printf("Because your number is greater than 0");
	}
	else
	{
		printf("Your Number is negative\n");
		printf("Because your number is less than 0");
	}
}
