// Programme to print convertion of given minutes into hours and minutes
#include<stdio.h>
void main()
{
	// Input
	
	int  M, H, m;
	
	// Output
	
	printf("Enter total minutes : ");
	scanf("%d",&M, &H, &m);
	printf("%d Hours and %d minutes", M/60, M%60);
	
}
