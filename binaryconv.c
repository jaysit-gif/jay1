#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void printarray(int *arr,int len){

    for(int i = len-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    printf("\n");
}
void binaryconv(int z);

int main(void){
    clock_t start,end;
    double cpu_time_used;
    int z;
    printf("Z: ");
    scanf("%d",&z);
    start = clock();
    binaryconv(z);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nspeed: %.6f\n",cpu_time_used);
    return 0;
}

void binaryconv(int z){
    int *arr = NULL;
    int n = 0;
    while ((z) != 0)
    {
        arr = (int *)realloc(arr,(n+1) * sizeof(int));
        if(arr == NULL){
            printf("MEMORY REALLOCATION FAILED\n");  
            break;         
        }
        arr[n] = z%2;
        z /= 2;
        n++;
    }
    
    if (arr != NULL){
      printarray(arr,n);
      free(arr);
    }
}