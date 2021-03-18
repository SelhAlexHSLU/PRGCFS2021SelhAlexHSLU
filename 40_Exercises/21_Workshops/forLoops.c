#include <stdio.h>

int main (int argc, char *argv[])
{

	int start = 0;
	int end = 10;
	
	for( int i = start; i < end; i++)

	{
		for( int k = start+1; k <= end; k++)
		{
		printf("%d ", i*10+k);
		}
		printf("\n");
	}
	/*
	int start = 1;
	int end = 729;
	
	for( int i = start; i <= end; i = i * 3)
	{
		printf("%d\n", i);
	}
	*/
	
	/*
	int a;

	for( a = 40 ; a >= 25 ; a = a - 1)
	{
	printf("%d\n", a);
	}
	*/
	
	/*
	int sum = 0;
	int start = 40;
	int end = 25;
	
	for( int i = start; i >= end; i++ )
	{
		sum = sum + i;
	
	/*
	printf("The sum from %d to %d is equal to %d\n", start, end, sum);
	
	printf("%d\n", sum);
	}
	*/
	return 0;
}
