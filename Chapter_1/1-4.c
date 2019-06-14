#include <stdio.h>

/* C Programming Language
Exercise 1-4
Prints Celius to Fahrenheit table*/

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temp table */
	upper = 300; /*upper limit of temp table */ 
	step = 20; /* step size */

	celsius = lower;

	printf("%3s %6s\n", "Celius", "Fahr");

	while (celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}