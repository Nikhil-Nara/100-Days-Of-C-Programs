//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>

enum status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum status s = FAILURE;

    if (s == SUCCESS)
        printf("Operation successful");
    else if (s == FAILURE)
        printf("Operation failed");
    else
        printf("Operation timed out");

    return 0;
}