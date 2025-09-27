#include <stdio.h>
#include <stdlib.h>

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


int main(void){
    int *arr = factors(96);int o = 10;
    int *p = &o;
    printf("%zu\n",sizeof(arr));
    printf("%zu",sizeof(p));
    free(arr);
    return 0;
}