#include <stdio.h>

void printarray(int *arr,int z);
int main(void){
    int arr[] = {6,2,3,4,5,6};
    int z = (int)(sizeof(arr)/sizeof(int));
    printarray(arr,z);
    return 0;
}

void printarray(int *arr,int z){
    for(int i = 0;i<z;i++){
        printf("%d\n",arr[i]);
    }
}

