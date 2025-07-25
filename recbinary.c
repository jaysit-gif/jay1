#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void print_binary(int z) {
    if (z == 0) return;
    print_binary(z / 2);         // go deeper
    printf("%d", z % 2);         //im trying to compare recursion with iteration wrt time
}

int main(void){
    clock_t start,stop;
    double time;
    int z;
    printf("Z: ");
    scanf("%d",&z);
    start = clock();
    print_binary(z);
    stop = clock();
    time = ((double)(stop- start))/CLOCKS_PER_SEC;
    printf("\nspeed: %.6f",time);
    return 0;
}
