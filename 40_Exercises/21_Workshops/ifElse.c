#include <stdio.h>

int main (int argc, char *argv[])
{	//teilbar durch 19
	
	for (int i = 1; i <= 500; i++)
	{
		if(i % 19 == 0) 
		{
			printf("%d\n", i);
		}
	}
	//teilbar durch 17 oder 11 und 7
	for(int i = 1; i <=200; i++)
	{
		if(i % 7 == 0 && i % 11 == 0)
		{
			printf("7 and 11: %d\n", i);
		}
		if(i % 17 == 0)
		{
			printf("17: %d\n", i);
		}
	}
	//Teilbar durch 11 und 7 oder 11 aber nicht 7
	for(int i = 1; i <=200; i++)
	{
		if(i % 11 == 0)
		{
			if(i % 7 == 0)
			{
				printf("11 and 7: %d\n", i);
			}
			else
			{
				printf("11 but not 7: %d\n", i);
			}
	
		}
	}
	{
		int zahl1;
		printf("Insert Number\n");
		scanf("%d\n", &zahl1);
	
		if (zahl1 % 2 == 0)
		{
			printf("Straight Number\n");
		}
		else
			printf("Odd Number\n");
		
	}
	return 0;
}
