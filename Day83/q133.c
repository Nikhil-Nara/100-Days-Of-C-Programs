//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>

enum month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum month m = FEB;

    if (m == FEB)
        printf("28 or 29 days");
    else if (m == APR || m == JUN || m == SEP || m == NOV)
        printf("30 days");
    else
        printf("31 days");

    return 0;
}