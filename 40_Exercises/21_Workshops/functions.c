#include <stdio.h>

int main (int argc, char *argv[])
{
	int n, i;
	int k, j;
	int g, y;
	unsigned long long factnmk = 1;
	unsigned long long ntk = 1;
	unsigned long long factn = 1;
	unsigned long long factk = 1;
	printf("Input first number: \n");
	scanf("%d", &n);
	printf("Input second number: \n");
	scanf("%d", &k);
	
	g = n-k;
	
	if (n<0)
		printf("Error, factorial of a negative number doesn't exist.\n");
	else 
	{
		for(i = 1; i <= n ; ++i)
		{
			factn *= i;
		}

		printf("Factorial of %d is %lld\n", n, factn);
	
	}
	if (k<0)
		printf("Error, factorial of a negative number doesn't exist.\n");
	else 
	{
		for(j = 1; j <= k ; ++j)
		{
			factk *= j;
		}

		printf("Factorial of %d is %lld\n", k, factk);
	
	}
	if (k>=n)
		printf("Not dividable by 0.\n");
	else 
	{
		for(y = 1; y <= g; ++y)
		{
			factnmk *= y;
		}
		printf("Factorial of %d - %d is %lld\n", n, k, factnmk);
	}
	if (k>=n)
		printf("Not dividable by 0.\n");
	else 
	{
		ntk = factn / (factk * factnmk);
	}
		printf("%lld\n", ntk);
	return 0;
}
