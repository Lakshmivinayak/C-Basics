#include<stdio.h>
void main()
{
	int N;
	printf("Enter your N");
	scanf("%d" , &N);
	if(N==1)
	
	{
		printf("if N is 1 it is monday");
		
	}
	else if (N==2)
	{
		printf("if N is 2 it is tuesday");
	}
	else if (N==3)
	{
		printf("if N is 3 it is wednesday");
	}
	else if (N==4)
	{
		printf("if N is 4 it is thursday");
	}
	else if (N==5)
	{
		printf("if N is 5 it is friday");
	}
	else if (N==6)
	{
		printf("if N is 6 it is saturday");
	}
	else if (N==7)
	{
		printf("if it is sunday");
	}
	else 
	{
		printf("if there is no days above no.7");
	}
}
