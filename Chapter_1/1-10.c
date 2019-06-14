#include <stdio.h>

/* C Programming Language
Kernighan & Richie
Exercise 1-10
Copy input to output, replace each tab with \t, 
each backspace with \b, and each back slash with \\ */

int main()
{
	int c, d;

	while ((c = getchar()) != EOF)
	{	
		d = 0;
		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
			d = 1;
		}
		if (c == '\b')
		{
			putchar('\\');
			putchar('b');
			d = 1;
		}
		if (c == '\\')
		{
			putchar('\\');
			putchar('\\');
			d = 1;
		}
		if (d == 0)
			putchar(c);
	}
	
	return 0;
}