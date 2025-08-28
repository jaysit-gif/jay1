#include <stdio.h>

int main(void){
    int arr[] = {2,3,4,5,6,7,8};
    for(int i = 0;i<= sizeof(arr)/sizeof(int);i++){
        printf("%d\t",arr[i]);
        if(arr[i]  == 7){
            break;
        }
    }
    printf("\n");
    int i = 0;
    while(arr[i] != 7){
        printf("%d\t",arr[i]);
        i++;
    }
    printf("\n");

    int j = 0;
    do{
        printf("%d\t",arr[j]);
        j++;
    }while(arr[j] != 7);
}