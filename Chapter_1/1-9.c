#include <stdio.h>

/* C Programming Language
Kernighan & Richie
Exercise 1-9
Copies input to output, replacing each string
of one or more blanks by a single blank*/

int main()
{
	int c; 
	int isspace;

	isspace = 0;

	while ((c = getchar()) != EOF)
	{
		 if (c != ' ')
		 {
		 	isspace = 0;
		 	putchar(c);	
		 }
		 if (c == ' ')
		 {
		 	if (isspace == 0)
		 	{
		 		isspace = 1;
		 		putchar(c);
		 	}
		 }
	}
		 	
}