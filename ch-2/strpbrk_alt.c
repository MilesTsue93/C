#include <stdio.h>
#include <string.h>

int any(char s[], char t[]);

int main(void)
{
    char s[50] = "hello there!";
    char t[50] = "dudyp";
    
    int i;
    i = any(s, t);
    printf("%i\n", i);
}

int any(char s[], char t[])
{
    for (int i = 0; s[i] != '\0' || t[i] != '\0'; i++)
    {
        for (int j = 0; j < strlen(t); j++)
        {
            if (t[j] == s[i])
            {
                return i;
            }
        }
    }
    return -1;
}
