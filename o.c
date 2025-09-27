#include<stdio.h>
#include<stdlib.h>


void printarray(int *arr,size_t N){
    for(size_t i = 0;i<N;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(void){
    int N;
    printf("N: ");/*cant i make a fuction which returns arrays*/
    scanf("%d",&N); 
    int *t = (int*)malloc(N*sizeof(int));
    if(t == NULL){
        perror("MEM ALLOCATION FAILED");
    }
    for(int i = 0;i<N;i++){
        printf("T[%d]: ",i+1);
        scanf("%d",&t[i]);
    }
    printarray(t,N);
    free(t);
    return 0;
}