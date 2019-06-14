#include <stdio.h>

/* C Programming Language
Kernighan & Richie
Exercise 1-6
Verify that the expression getchar () != EOF is 0 or 1 */

int main()
{
	printf("Press any key.\n");
	printf("getchar() != EOF in this instance is %d\n", getchar() != EOF);
	return 0; 
}