// Question: Write a program to get three numbers from user and print the LCM of those numbers.

#include<stdio.h>
int main()
{
    printf("Start of solution!\n");
    int x, y, z, max1, max;
    printf("Enter first number: \n");
    scanf("%d", &x);
    printf("Enter second number: \n");
    scanf("%d", &y);
    printf("Enter thrid number: \n");
    scanf("%d", &z);

    max1 = (x > y) ? x : y;
    max = (z > max1) ? z : max1;
    while (1) 
    {
        if ((max % x == 0) && (max % y == 0) && (max % z == 0)) {
            printf("The LCM of %d, %d and %d is %d.\n", x, y,z,  max);
            break;
        }
        ++max;
    }
    //printf("LCM of %d and %d is %d", x, y, max);
    return 0;
    printf("End of solution!\n");
}
