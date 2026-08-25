//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main()
{
    int n, binary = 0, place = 1, r;

    scanf("%d", &n);

    while(n > 0)
    {
        r = n % 2;
        binary = binary + r * place;
        place = place * 10;
        n = n / 2;
    }

    printf("%d", binary);

    return 0;
}