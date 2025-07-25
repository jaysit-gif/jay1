#include<stdio.h>
#define max 5
int arraysum(int *arr,int len){
    int z= 0;
    for(int i = 0;i<len;i++){
        z += arr[i];
    }
    return z;   
}

int main(void){
    int arr[max];
    for(int i = 0;i<max;i++){
        printf("element for %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int sum;
    sum = arraysum(arr,max);
    printf("SUM: %d",sum);
    return 0;
}