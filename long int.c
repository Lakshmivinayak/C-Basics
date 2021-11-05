#include<stdio.h>
#include<limits.h>
void main()
{
	printf("Long Int:\n Signed: %ld to %ld\n", LONG_MIN, LONG_MAX);
	printf("Unsigned: %d to %lu", 0, ULONG_MAX);
}
