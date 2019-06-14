#include <stdio.h>

#define IN 1		/* inside a word */
#define OUT 0		/* outside a word */

/* C Programming Language
Kernighan & Richie
Exercise 1-13
Prints input one word per line */


int main(void)
{
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ' && c != '\n' && c != '\t'){
			state = IN;
			putchar('-');
		} else if (state == IN) {
			state = OUT;
			putchar('\n');
		}

	}
	return 0;
}