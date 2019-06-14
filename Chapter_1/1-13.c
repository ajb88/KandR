#include <stdio.h>

#define MAXLETTER 10 	/* maximum amount of letters */
#define IN 1			/* inside a word */
#define OUT 0			/* outside a word */

/* C Programming Language
Kernighan & Richie
Exercise 1-13
Prints histogram of word count*/


int main(void)
{
	int c, state;
	int nc = 0;					// new character counting
	int ndata[MAXLETTER];		// Array to hold data of letter count

	state = OUT;

	for (int i = 0; i < 10; ++i)
		ndata[i] = 0;

	while ((c = getchar()) != EOF){
		if (c != ' ' && c != '\n' && '\t'){
			state = IN;
			++nc;
		}
		else if (state == IN){
			state = OUT;
			++ndata[nc - 1];
			nc = 0;
		}
	}

	for (int i = 0; i < 10; ++i){
		printf("|%d|", i+1);
		if (ndata[i] > 0){
			for (int n = 0; n < ndata[i]; ++n)
				printf("*");
			printf("\n");
		} else
				printf("\n");
	}

	return 0;
}