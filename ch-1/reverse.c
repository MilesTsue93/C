#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

void copy(char to[], char from[]);
int getLine(char s[], int lim);
void reverse(char *s);

int main(void)
{
    char in[MAXLINE];

    fgets(in, MAXLINE, stdin);
    reverse(in);
    printf("here is the input reversed! %s\n", in);   
    return 0;
}

// reverses an input string
void reverse(char *s)
{
    int i, len, temp;
    len = strlen(s);
    for (i = 0; i < len/2; ++i)
    {
        temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
}
