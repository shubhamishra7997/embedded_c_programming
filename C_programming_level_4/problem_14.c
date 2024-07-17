//Question: Write a program to print the total number of single digit odd numbers
//Answer - 5

#include<stdio.h>

int main()
{
    unsigned int count = 0;
    for(unsigned int i = 0; i<10000; i++)
    {
        if((i % 2 != 0) && (i < 10))
            //printf("The odd number is: %d\n", i);
            count++;       
    }
    printf("Count is: %d\n", count);
}
