#include <stdio.h>
#include <string.h>

void lower2(char s[]);

int main(void)
{
    char s[50];
    fgets(s, 50, stdin);
    lower2(s);
}

void lower2(char s[])
{
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
       s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? (s[i] + 32) : s[i];
    }

    printf("The new string is: \"%s\"\n", s);
}

