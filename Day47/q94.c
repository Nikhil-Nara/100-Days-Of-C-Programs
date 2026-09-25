//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], word[100], longest[100];
    int i = 0, j = 0, max = 0;

    fgets(s, 100, stdin);

    while(1)
    {
        if(s[i] != ' ' && s[i] != '\n' && s[i] != '\0')
        {
            word[j] = s[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if(j > max)
            {
                max = j;
                strcpy(longest, word);
            }

            j = 0;

            if(s[i] == '\0')
                break;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}