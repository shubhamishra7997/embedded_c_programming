//Question: Get a Four digit number from the user and print the reverse of it.
// Example: User Enters “6738”


#include<stdio.h>

int reverseNumber(int num) {
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed;
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    int reversedNumber = reverseNumber(number);
    printf("Reversed number is: %d\n", reversedNumber);

    return 0;
}