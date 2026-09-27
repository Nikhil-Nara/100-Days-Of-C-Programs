//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("%c.", name[0]);

    for(i = 1; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
        {
            last = i + 1;
        }
    }

    for(i = 1; i < last - 1; i++)
    {
        if(name[i] == ' ')
        {
            printf("%c.", name[i + 1]);
        }
    }

    printf(" ");

    for(i = last; name[i] != '\0' && name[i] != '\n'; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}