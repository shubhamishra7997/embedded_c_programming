//Question: Write a program to print the sum of all single digit odd numbers
//Answer : 25


#include<stdio.h>

int main()
{
    unsigned int sum = 0;
    for(unsigned int i = 0; i<10000; i++)
    {
        if((i % 2 != 0) && (i < 10))
            //printf("The odd number is: %d\n", i);
            sum = sum + i;       
    }
    printf("Sum is: %d\n", sum);
}