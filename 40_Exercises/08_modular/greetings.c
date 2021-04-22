#include <stdio.h>

#include "greetings.h"

int greetingsCounter = 0;

/*implementations*/


void SayHello(void) {
	printf("Hello!\n");
	greetingsCounter++;
}

void SayGoodbye(void) {
	printf("Goodbye!\n");
	greetingsCounter++;
}


