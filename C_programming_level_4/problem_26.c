//Question: Print the smallest Three digit prime number
//Answer: 101


#include<stdio.h>
#include<stdbool.h>

int main()
{
    unsigned int sum = 0;
    bool prime_flag = 1; //assume number is prime.
    for(unsigned int i = 100; i<1000; i++)
    {
        for(unsigned int j = 2; j<i; j++) //check all number between 
        {
            if(i % j == 0) //number is divisible, hence not prime
            prime_flag = 0; //set flag down.
        }
        if (prime_flag)
        {
            printf("Number is prime: %d\n", i);
            sum = sum + i;
            break;
        }
        if(prime_flag) //return as prime directly from the loop.
            break;
        prime_flag = 1; //reset the flag, meaning number was not prime.
    }
    printf("Sum is: %d\n", sum);
}
