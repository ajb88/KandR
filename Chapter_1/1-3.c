#include <stdio.h>

/* C Programming Language
Exercise 1-3 
Prints Fahrenheit-Celsius table with a heading*/

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temp table */
	upper = 300; /*upper limit of temp table */ 
	step = 20; /* step size */

	fahr = lower;

	printf("%3s %6s\n", "Fahr", "Celsius");

	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}