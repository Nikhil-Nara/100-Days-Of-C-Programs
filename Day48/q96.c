//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, start = 0, end, j;
    char temp;

    gets(str);

    for(i = 0; i <= strlen(str); i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;

            for(j = start; j < end; j++, end--)
            {
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;
            }

            start = i + 1;
        }
    }

    printf("%s", str);

    return 0;
}