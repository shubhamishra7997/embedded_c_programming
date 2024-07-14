// Question: Write a program to get two numbers from user and print the HCF of those numbers.

#include<stdio.h>
int main()
{
    printf("Start of solution!\n");
    int x, y, min;
    printf("Enter first number: \n");
    scanf("%d", &x);
    printf("Enter second number: \n");
    scanf("%d", &y);

    min = (x < y) ? x : y;
    while (min>0) 
    {
        if ((x % min == 0) && (y % min == 0)) {
            printf("The LCM of %d and %d is %d.\n", x, y, min);
            break;
        }
        --min;
    }
    //printf("LCM of %d and %d is %d", x, y, max);
    return 0;
    printf("End of solution!\n");
}
