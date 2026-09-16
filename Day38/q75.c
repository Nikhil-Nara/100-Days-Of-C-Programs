//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j;

    scanf("%d %d", &r, &col);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    }

    scanf("%d %d", &r, &col);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
            scanf("%d", &b[i][j]);
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
            c[i][j] = a[i][j] + b[i][j];
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
            printf("%d ", c[i][j]);

        printf("\n");
    }

    return 0;
}