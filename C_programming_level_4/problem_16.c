//Question: write a program to print the total number of THREE digit odd numbers
//Answer : 450

#include<stdio.h>

int main()
{
    unsigned int count = 0;
    for(unsigned int i = 0; i<10000; i++)
    {
        if((i % 2 != 0) && (i > 100) && (i < 1000))
            //printf("The odd number is: %d\n", i);
            count++;       
    }
    printf("Count is: %d\n", count);
}
