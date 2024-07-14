//Question: Question: Write a program get number from user print the total number of two-digit perfect square numbers in the number.
//Answer: Input: 163496481 - Output: 4 (16,49,64,81)
//Input: 364925 - Output: 4 (36,64,49,25)
//Altenate logic is using int to take input and use math function to get the sqrt (sqrt as double )
//so multiply the sqrt by itself and then compare with the user input.
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
        square = x%100;
        printf("New number is: %d\n", square);
        if((square == 16) | (square == 25) | (square == 36) | 
        (square == 49) | (square == 64) | (square == 81))
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