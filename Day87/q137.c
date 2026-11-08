//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>

enum role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum role r = GUEST;

    if (r == ADMIN)
        printf("Welcome Admin!");
    else if (r == USER)
        printf("Welcome User!");
    else
        printf("Welcome Guest!");

    return 0;
}
