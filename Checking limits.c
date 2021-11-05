#include<stdio.h>
#include<limits.h>
void main()
{
	printf("Short int:\n Signed: %hd to %hd\n", SHRT_MIN, SHRT_MAX);
	printf("Unsigned: %d to %hu", 0, USHRT_MAX);
}
