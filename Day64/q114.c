//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, j, k, maxLength = 0;

    scanf("%s", s);

    int n = strlen(s);

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            int repeat = 0;

            for (k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if (repeat)
                break;

            if (j - i + 1 > maxLength)
                maxLength = j - i + 1;
        }
    }

    printf("%d", maxLength);

    return 0;
}