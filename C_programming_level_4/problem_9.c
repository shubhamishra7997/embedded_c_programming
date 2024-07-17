//Question: Get a Two digit number from the user and print the sum of all digits.
//Example: User Enters “78”

#include<stdio.h>

int sum(int num) {
    int sum = 0;

    while (num != 0) {
        sum = sum + num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    int sum_out = sum(number);
    printf("Sum of numbers is: %d\n", sum_out);

    return 0;
}