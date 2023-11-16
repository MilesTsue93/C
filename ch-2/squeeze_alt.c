#include <stdio.h>
#include <string.h>

void squeeze(char s[], char t[]);

int main(void)
{
    char s[50] = "hello there!";
    char t[50] = "hello, dude!";
    

    squeeze(s, t);
    printf("%s\n", s);
}

void squeeze(char s[], char t[])
{
    int i, j;

    for (i = j = 0; t[i] != '\0'; i++)
        if (s[j] != t[i])
            s[j++] = t[i];
    s[j] = '\0';
}
