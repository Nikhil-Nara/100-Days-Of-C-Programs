//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main()
{
    char a[100], b[100];
    int count[26] = {0};
    int i;

    scanf("%s", a);
    scanf("%s", b);

    for(i = 0; a[i] != '\0'; i++)
        count[a[i] - 'a']++;

    for(i = 0; b[i] != '\0'; i++)
        count[b[i] - 'a']--;

    for(i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}