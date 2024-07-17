//Question: Question: Print the Smallest Four digit prime number
//Answer: 1009

#include<stdio.h>
#include<stdbool.h>

int main()
{
    unsigned int sum = 0;
    bool prime_flag = 1; //assume number is prime.
    unsigned int i;
    for( i = 1000; i<10000; i++)
    {
        for(unsigned int j = 2; j<i; j++) //check all number between 
        {
            if(i % j == 0) //number is divisible, hence not prime
            prime_flag = 0; //set flag down.
        }
        if (prime_flag)
        {
            break; //exit after getting the first prime number.
        }
        prime_flag = 1; //reset the flag, meaning number was not prime.
    }
    printf("Smallest four digit prime number is is: %d\n", i);
}
