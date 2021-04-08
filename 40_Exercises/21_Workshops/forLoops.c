#include <stdio.h>

int main (int argc, char *argv[])
{	
	//Zahlen von 1 bis 100 im Rechteck anzeigen:
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
	
	
	//Zahl mal 3 bis sie 729 ist:
	for( int i = 1; i <= 729; i = i * 3)
	{
		printf("%d\n", i);
	}
	
	
	//Rückwärts zählen von 40 - 25:
	for( int a = 40 ; a >= 25 ; a = a - 1)
	{
	printf("%d\n", a);
	}
	
	
	//Summe aller Zahlen von 1 - 10:
	int sum = 0;
	
	
	for( int i = 1; i <= 10; i++ )
	{
		sum = sum + i;
	
	}
		printf("The sum from %d to %d is equal to %d\n", start, end, sum);
	
	//Integer addieren bis zu einem Grenzwert:
	
	int summ = 0;
	int max = 555;
	
	for( int i = 1; i >= 1; i++)
	{
		summ = summ + i;
		
		if(summ > max)
		{
			printf("With max. sum %d, the integers from 1 to %d sum to %d\n", max, i, summ);
			break;	//printf vor break ausführen, nach break wird nichts mehr ausgeführt.
		}			
	}
	
	return 0;
}
