//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n, first, last, digits, result;

    scanf("%d", &n);

    digits = (int)log10(n);
    first = n / (int)pow(10, digits);
    last = n % 10;

    result = n - first * pow(10, digits) - last;
    result = result + last * pow(10, digits) + first;

    printf("%d", result);

    return 0;
}