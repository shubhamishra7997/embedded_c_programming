//Question: Write a program to print the total number of TWO digit odd numbers.
//Answer - 45

#include<stdio.h>

int main()
{
    unsigned int count = 0;
    for(unsigned int i = 0; i<10000; i++)
    {
        if((i % 2 != 0) && (i > 10) && (i < 100))
            //printf("The odd number is: %d\n", i);
            count++;       
    }
    printf("Count is: %d\n", count);
}
