#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool fprime(int a) {
    if (a <= 1) return false; // Handle 1 and negative numbers
    if (a == 2) return true;  // 2 is prime
    if (a % 2 == 0) return false; // Even numbers > 2 are not prime
    for (int i = 3; i <= sqrt(a); i += 2) { // Check odd numbers up to sqrt(a)
        if (a % i == 0) return false;
    }
    return true;
}

int main(void) {
    int N;
    printf("Enter a positive integer N (N > 2 recommended): ");
    if (scanf("%d", &N) != 1 || N < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    if (N <= 2) {
        printf("No prime numbers for N <= 2.\n");
        return 0;
    }
    for (int i = 2; i <= N; i++) {
        if (fprime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}