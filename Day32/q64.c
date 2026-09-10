//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main()
{
    int n, r, i, max = 0, digit = 0;
    int count[10] = {0};

    scanf("%d", &n);

    while(n > 0)
    {
        r = n % 10;
        count[r]++;
        n = n / 10;
    }

    for(i = 0; i <= 9; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            digit = i;
        }
    }

    printf("%d", digit);

    return 0;
}