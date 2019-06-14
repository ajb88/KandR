#include <stdio.h>

/* C Programming Language
Kernighan & Richie
Exercise 1-5
Prints Fahrenheit to Celsius table in reverse order*/

int main()
{
	float fahr;

	printf("%3s %6s\n", "Fahr", "Celsius");

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3.0f %6.1f\n", fahr, (5.0/9.0) *(fahr-32));

}


