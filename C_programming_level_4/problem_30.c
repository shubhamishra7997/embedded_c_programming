//Question: Print the Largest eight-digit prime number
//Answer: 99999989
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

void generate_primes_up_to(int limit, bool *is_prime) {
    for (int i = 2; i <= limit; i++) {
        is_prime[i] = true;
    }

    for (int p = 2; p * p <= limit; p++) {
        if (is_prime[p] == true) {
            for (int i = p * p; i <= limit; i += p) {
                is_prime[i] = false;
            }
        }
    }
}

bool is_prime_large( int num, bool *small_primes, int sqrt_limit) {
    if (num < 2) return false;
    if (num < sqrt_limit) return small_primes[num];

    for (int i = 2; i <= sqrt_limit; i++) {
        if (small_primes[i] && num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const unsigned int MAX_8_DIGIT = 99999999;
    //const unsigned int MIN_8_DIGIT = 10000000;
    const int SQRT_MAX_8_DIGIT = (int)sqrt(MAX_8_DIGIT) + 1;

    bool *small_primes = (bool *)malloc((SQRT_MAX_8_DIGIT + 1) * sizeof(bool));
    generate_primes_up_to(SQRT_MAX_8_DIGIT, small_primes);

    for (unsigned int num = MAX_8_DIGIT; num >= 0; num--) {
        if (is_prime_large(num, small_primes, SQRT_MAX_8_DIGIT)) {
            printf("Largest 8-digit prime number is: %u\n", num);
            free(small_primes);
            return 0;
        }
    }

    free(small_primes);
    printf("No 8-digit prime number found.\n");
    return 0;
}