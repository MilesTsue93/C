#include <stdio.h> 
#include <stdlib.h>

#define IN 1   // inside a word
#define OUT 0  // outside a word
// count lines, words, and characters in input
int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        printf("\n");
        putchar(c);
        while ((c = getchar()) != ' ')
        {
            putchar(c);
            if (c == EOF)   
                return 0;
        }
    }
}
