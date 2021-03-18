#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//falls NICHT 4 Argumente erhalten dann --> Block 7 bis 10
	if ( argc !=4)
	{
		//input not valid
		printf("Usage:\n");
		printf("logicOperators Input1 Input2 Input3\n");
	}
	else
	{	//input valid-->genau 1+3 Argumente erhalten
		int val1 = atoi(argv[1]);
		int val2 = atoi(argv[2]);
		int val3 = atoi(argv[3]);
		int sum = 0;
		float average = 0.0f;
		printf("%d, %d, %d\n", val1, val2, val3);
		
		if( !(val1 > 0) || !(val2 > 0) || !(val3 > 0) )
		{
			//Fehlerfall
			printf("All inputs must be strictly greater than zero.\n");
		}	
		else
		{
			//find the greatest
			if( val1 >= val2 && val1 >= val3)
			{
				printf("%d is the greatest\n", val1);
			}
			else if( val2 >= val1 && val2 >= val3)
			{
				printf("%d is the greatest\n", val2);
			}
			else
			{
				printf("%d is the greatest\n", val3);
			}
			//find the smallest
			if( val1 <= val2 && val1 <= val3)
			{
				printf("%d is the smallest\n", val1);
			}
			else if( val2 <= val1 && val2 <= val3)
			{
				printf("%d is the smallest\n", val2);
			}
			else
			{
				printf("%d is the smallest\n", val3);
			}
		}
		
		{
		//compute the sum
		sum = (val1 + val2 + val3);
		printf("the sum is: %d\n", sum);
		
		//compute the average
		average = (sum/3);
		printf("the average is: %f\n", average);
		}
		
		
	}	
#if 0	//auskommentieren mit Präprozessor if(
	//die drei Elemente in der For-Loop Deklaration
		//nimm eine int-variable i und starte mit 0
		// dann führe folgenden Code aus solange i kleiner ist als argc
		//inkrementier i bei jeden Durchlauf um 1 (++).
	
		for( int i=0; i<argc; i++)
		{	
		printf("Argument %d was %s\n",i, argv[i]);
		// argv: 	-./logicOperators
		//		-23
		//		-34
		}
	}
#endif

	return 0;
}



/* 
	double e =2.710281828;
	printF("%0.15f,e);
	
*/

