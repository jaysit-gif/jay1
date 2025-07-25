#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define max 2000000000

bool fprime(int a) {
    if (a <= 1) return false; // Handle 1 and negative numbers
    if (a == 2) return true;  // 2 is prime
    if (a % 2 == 0) return false; // Even numbers > 2 are not prime
    for (int i = 3; i <= sqrt(a); i += 2) { // Check odd numbers up to sqrt(a)
        if (a % i == 0) return false;
    }
    return true;
}

int main(void){
    FILE *craze = fopen("CRAZE.txt","w");
    for(int i = 3;i<max;i++){
        if(fprime(i) == true){
            fprintf(craze,"%d\t",i);
        }
    }
    fclose(craze);
    return 0;
}