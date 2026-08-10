//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>
int main() {
    float n1, n2;

    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    printf("Sum = %.2f\n", n1 + n2);
    printf("Difference = %.2f\n", n1 - n2);
    printf("Product = %.2f\n", n1 * n2);

    if (n2 != 0)
        printf("Quotient = %.2f\n", n1 / n2);
    else
        printf("Quotient = Undefined (division by zero)\n");

    return 0;
}