#include <stdio.h>
#include <string.h>

void squeeze(char s[], char t[]);

int main(void)
{
    char s[50] = "yomama";
    char t[50] = "yamime";

    squeeze(s, t);
    printf("%s\n", s);
}

void squeeze(char s[], char t[])
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != t[i])
            s[j++] = s[i];
    s[j] = '\0';
}
