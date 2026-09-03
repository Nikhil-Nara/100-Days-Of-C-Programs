//Q52: Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 13; i++)
    {
        printf("*\n");
    }

    return 0;
}