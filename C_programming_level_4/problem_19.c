//Question: Write a program to print the sum of all THREE digit odd numbers
// Answer : 247500

#include<stdio.h>

int main()
{
    unsigned int sum = 0;
    for(unsigned int i = 0; i<10000; i++)
    {
        if((i % 2 != 0) && (i > 100) && (i < 1000))
            //printf("The odd number is: %d\n", i);
            sum = sum + i;       
    }
    printf("Sum is: %d\n", sum);
}