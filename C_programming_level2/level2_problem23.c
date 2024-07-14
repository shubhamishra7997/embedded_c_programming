//Question: Question: Write a program get number from user print the total number of single digit perfect square numbers in the number.
//Answer: Input: 123456789 - Output: 3
//Input: 987531 - Output: 2

#include<stdio.h>

int main()
{
    printf("Start of solution!\n");
    int x, count, square;
    count = 0;
    printf("Enter input\n");
    scanf("%d", &x);
    printf("Input is: %d\n", x);
    while(x>0)
    {
        square = x%10;
        printf("New number is: %d\n", square);
        if((square == 1) | (square == 4) | (square == 9))
        {
            printf("Perfect square found: %d\n", square);
            count = count + 1;
        }
        x = x/10;
        printf("Total number of square digits are: %d\n", count);
    }
    printf("End of solution!\n");
    return 0;

}