//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/#include<stdio.h>
int main()
{ float p,r,t,SI,CI,amount;
    int i;

    printf("Enter principle;");
    scanf("%f",&p);
    printf("Enter rate of interest;");
    scanf("%f",&r);
    printf("Enter time;");
    scanf("%f",&t);

    SI = (p*r*t)/100;

    amount = p ; 

    for ( i= 1;i<=t;i++) {
        amount = amount + (amount*r)/100;
    }
    CI = amount - p;

    printf("Simple Interest: %f\n", SI);
    printf("Compound Interest: %f\n", CI);
    return 0;
}