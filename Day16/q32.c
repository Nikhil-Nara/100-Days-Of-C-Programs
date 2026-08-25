//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main()
{
    int n, temp, r, rev = 0;

    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
