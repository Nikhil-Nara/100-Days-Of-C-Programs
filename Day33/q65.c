//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main()
{
    int a[100], n, i, x;
    int low, high, mid, index = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == x)
        {
            index = mid;
            break;
        }
        else if(x > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}