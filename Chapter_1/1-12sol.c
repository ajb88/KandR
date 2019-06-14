//ex1-12 
#include <stdio.h> 

#define IN 1 
#define OUT 0 

// print input one word per line 
int main(void) 
{ 
        int c, state; 
        // start without a word 
        state = OUT; 
         
        while ((c = getchar()) != EOF) { 
                // if the char is not blank, tab, newline 
                if (c != ' ' && c != '\t' && c != '\n') { 
                        // inside a word 
                        state = IN; 
                        putchar(c); 
                // otherwise char is blank, tab, newline, word ended 
                } else if (state == IN) { 
                        state = OUT; 
                        putchar('\n'); 
                } 
        } 
        return 0;
}
