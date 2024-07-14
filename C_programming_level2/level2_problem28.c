// Question: Write a program to get two numbers from user and print the LCM of those numbers.
//needed internet solution, the answer is that take the largest number and then keep on incrementing a count till both the numbers are
// completely dividing the largest number.
#include<stdio.h>
int main()
{
    printf("Start of solution!\n");
    int x, y, max;
    printf("Enter first number: \n");
    scanf("%d", &x);
    printf("Enter second number: \n");
    scanf("%d", &y);

    max = (x > y) ? x : y;
    while (1) 
    {
        if ((max % x == 0) && (max % y == 0)) {
            printf("The LCM of %d and %d is %d.\n", x, y, max);
            break;
        }
        ++max;
    }
    //printf("LCM of %d and %d is %d", x, y, max);
    return 0;
    printf("End of solution!\n");
}
