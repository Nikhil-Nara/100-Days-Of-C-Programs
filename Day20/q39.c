//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main()
{
    int n, r, product = 1;

    scanf("%d", &n);

    while(n > 0)
    {
        r = n % 10;

        if(r % 2 != 0)
            product = product * r;

        n = n / 10;
    }

    printf("%d", product);

    return 0;
}