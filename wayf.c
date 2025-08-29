#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hcf(int a,int b);
int *factors(int a) {
    if (a <= 1) {
        fprintf(stderr, "\nINVALID ARGUMENTS\n");
        return NULL;
    }
    int *factarray = NULL;
    int N = 1;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            int *array = realloc(factarray, N * sizeof(int));
            if (array == NULL) {
                fprintf(stderr, "MEM ALLOCATION FAILED\n");
                free(factarray);
                return NULL;
            }
            factarray = array;
            factarray[N - 1] = i;
            N++;
        }
    }
    return factarray;
}

int nofactors(int s);

void printfactors(int s) {
    int *factor = factors(s);
    int i = 0;
    if (factor == NULL) {
        fprintf(stderr, "\nERROR IN PRINTING FACTORS\n");
        free(factor);
        return;
    }
    while (factor[i] != s) {
        printf("%d\t", factor[i]);
        i++;
    }
    printf("%d\n", factor[i]);
    free(factor);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <int1 int2 int3...> ... or -hcf <<int1> <int2>>.. or -nf <positive_integer>\n", argv[0]);
        printf("Example: %s 12 13 15 20\n", argv[0]);
        printf("Example: %s -hcf 12 18\n", argv[0]);
        printf("Example: %s -nf 12\n", argv[0]);
        return 1;
    }
    for (int i = 1; i < argc; ) {  // Note: i incremented dynamically
        if (argv[i][0] == '-' && (strcmp(argv[i], "-hcf") == 0 || strcmp(argv[i],"-gcd") == 0)) {
            if (i + 2 >= argc) {
                fprintf(stderr, "ERROR: -hcf requires two integers\n");
                return 1;
            }
            int a = atoi(argv[i + 1]);
            int b = atoi(argv[i + 2]);
            int HCF = hcf_e(a, b);
            if (HCF == -1) {
                return 1;  // Error already printed
            }
            printf("HCF: %d\n", HCF);
            i += 3;  // Skip flag + two args
        }
        else if(argv[i][0] == '-' && strcmp(argv[i],"-nf")==0){
            if(i+1>=argc){
                fprintf(stderr,"ERROR: -nf reqiures 1 integer");
                return 1;
            }

            int n_f = atoi(argv[i+1]);
            printf("NUMBER OF FACTORS OF (%d): %d\n",n_f,nofactors(n_f));
            i += 2;
        }
         else {
            printfactors(atoi(argv[i]));
            i++;
        }
    }
    return 0;
}



int nofactors(int s){
    int *fact = factors(s);
    int i = 0;
    while(1){
        int a = *(fact+i);
        if(a == s){
            break;
        }
        i++;
    }
    free(fact);
    return i+1;
}

int hcf(int a,int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}