#include <stdio.h>

void my_swap(int* a,int* b){
    *a ^= *b ^= *a ^= *b;
}

int main(void){
    int a = 5;
    int b = 6;
    my_swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}