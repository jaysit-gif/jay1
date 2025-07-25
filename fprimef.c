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
    FILE *file = fopen("primes.txt", "w"); // Open file for writing
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("WARNING: PROGRAM NOT MEANT TO WORK ON NUMBERS LESS THAN OR EQUAL TO 2\n");
    printf("N: ");
    if (scanf("%d", &N) != 1 || N < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        fclose(file);
        return 1;
    }

    if (N <= 2) {
        fprintf(file, "No prime numbers for N <= 2.\n");
        fclose(file);
        return 0;
    }

    for (int i = 2; i <= N; i++) {
        if (fprime(i)) {
            fprintf(file, "%d\n", i); // Write prime to file
        }
    }

    fclose(file); // Close the file
    printf("Prime numbers written to primes.txt\n");
    return 0;
}

