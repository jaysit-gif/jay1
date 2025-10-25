#include <stdio.h>
#include <stdlib.h>

int* numarray(int initial,int final){
    if(initial >= final){
        fprintf(stderr,"ERROR");
        return NULL;
    }
    int capacity = final - initial;
    int k = initial;
    int *p = (int*)malloc(capacity * sizeof(int));
    for(int i = 0;i<capacity;i++){
        p[i] = k;
        k++;
    }
    return p;
}

int main(void){
    int *array = numarray(1,100);
    if(array != NULL){
      for(int i = 0;i<99;i++){
          printf("%d\t",array[i]);
      }
    }
    free(array);
    return 0;
}