#include <stdio.h>

int main(int argc, char *argv[])
{
	//falls NICHT 3 Argumente erhalten dann --> Block 7 bis 10
	if ( argc !=3){
		//input not valid
		printf("Usage:\n");
		printf("logicOperators Input1 Input2\n");
	}
	else
	{	//input valid-->genau 3 Argumente erhalten
		printf("Number of input arguments: %d\n", argc);// anzahl Args printen
		
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
	return 0;
}



/* 
	double e =2.710281828;
	printF("%0.15f,e);
	
*/

