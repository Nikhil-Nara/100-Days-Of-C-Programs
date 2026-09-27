//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k, n = 0;

    printf("Enter string: ");
    scanf("%s", str);

    while(str[n] != '\0')
    {
        n++;
    }

    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            for(k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            if(i != n - 1 || j != n - 1)
                printf(",");
        }
    }

    return 0;
}