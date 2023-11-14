#include <stdio.h>
#include <string.h>
#define MAXLENGTH 1000      // four tab lengths long

void replacetabs(char *s);

int main(void)
{
    char s[MAXLENGTH];
    fgets(s, MAXLENGTH, stdin);
    replacetabs(s);
    printf("%s", s);
}

// tab: replaces spaces
void replacetabs(char *s)
{
    int i, len;
    len = strlen(s);
    for (i=0; i<len; ++i)
    {
        if (s[i] == '\t')
            s[i] = ' ';
    }
}

