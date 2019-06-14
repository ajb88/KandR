#include <stdio.h>

/* C Programming Language
Kernighan & Richie
Exercise  1-8
Counts blanks, tabs, and newlines */

int main()
{
	int c; 				// c = character
	int ns, nt, nl;		// ns = space; nt = tab, nl = lines
	ns = nt = nl = 0;	// initialize at 0

	while ((c = getchar()) != EOF){
		if (c == '\n')
			++nl;
		if (c == '\t')
			++nt;
		if (c == ' ')
			++ns;
	}
	printf("Blanks: %d\nTabs: %d\nNewlines %d\n", ns, nt, nl);


}