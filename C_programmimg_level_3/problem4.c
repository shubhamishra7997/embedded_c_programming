//Question: Get a number from user and Check Prime or Not and print the result.
//Write your code inside the function. Do not Change the format.
//Example: Input: 61 Output Number is Prime. Input: 1200 Output: Number is not Prime.


#include <stdio.h>
int isPrime(int no);
int main()
{
    int number,result;
    scanf("%d",&number);
    result = isPrime(number);
    if(result == 1)
        printf("Number is Prime");
    else
        printf("number is not Prime");
    return 0;
}
int isPrime(int no)
{
    printf("inside the function\n");
    int result;
    result = 0;
    int i;
    if(no == 2)
    {
        result = 1;
    }
    for(i = no-1; i>1 ;i--)
    {
        //printf("i is; %d\n", i);
        if(no%i == 0)
        {
            printf("Number is divisible by: %d\n", i);
            result = 0;
            break;
        }
        else
            result = 1;
    }
    return result;
}