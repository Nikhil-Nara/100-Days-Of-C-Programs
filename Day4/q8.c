//Q8: Write a program to calculate the sum of first N natural numbers.
/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum = 15

Input 2:
10
Output 2:
Sum = 55
*/
#include<stdio.h>
int main()
{
    int n,i, sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i <=n ;i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers is %d",n,sum);
    return 0;
}