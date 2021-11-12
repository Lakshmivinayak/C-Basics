//  Sum of numbers 
#include<stdio.h>
void main()
{
	// Input
	
	int n, sn, se, so;
	n = 10;
	sn = n*(n+1)/2;
	se = n*(n+1);
	so = n*n;
	
	// Output 
	
	printf("sum of %d natural numbers is %d\n", n, sn);
	printf("sum of %d even numbers is %d\n", n, se);
	printf("sum of %d odd numbers is %d", n, so);
}
