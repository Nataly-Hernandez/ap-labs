#include <stdio.h>

#define IN   1   // inside a word 
#define OUT  0   // outside a word 

// count lines, words, and characters in input 

int main()

{
    int i = 0;
    //int i, state;
    char c, word[100];
    //state = OUT;

    //i = 0;

    while ((c = getchar()) != EOF) {    
        if ( c == '\n' || c == '\t') {
            //state = OUT;
            for (int j = 0; j < i; j++)
                printf("%c", word[i-j - 1]);

            i = 0;
        }
        else {
            //state = IN;
            word[i] = c;
            i++;
        }
    }

    return 0;
}

