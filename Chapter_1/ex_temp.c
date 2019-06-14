#include <stdio.h>

#define IN 1;		/
#define OUT 0;		/* outside a word */

/* C Programming Language
Kernighan & Richie
Exercise 1-12
Prints input one word per line */


int main()
{
	int state;

	state = OUT;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c = '\t')
		{
			state == OUT;
			puts('\n')
		}
		else if (state == OUT)
			putchar(c)

	}
}