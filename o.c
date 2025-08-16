#include<stdio.h>
#include<stdlib.h>


void printarray(int *arr,size_t N){
    for(size_t i = 0;i<N;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(void){
    int *t = NULL;
    int *a = (int *)malloc(5*sizeof(int));
    a[0] = 1; a[1] = 2; a[2] = 4; a[3]=5;a[4] = 2; 
    int *p = &a[0];
    printf("%d\n",p);
    printf("%d\n",*p);
    *(p+2) = 0;//so does it mean realloc works on heap allocated variables??
    printarray(a,5);
    t = (int*)realloc(a,6*sizeof(int));
    a = t;
    a[5] = 10;
    printarray(a,6);
    free(a);
    return 0;
}