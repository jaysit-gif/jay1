#include<stdio.h>

typedef struct{
    int z;
    char c[9];
}first;

typedef struct
{
    char c[5];
    
}second;

int main(void){
    printf("%d\n",sizeof(first));//why isnt this 9??
    printf("%d\n",sizeof(second));
    printf("%d\n",sizeof(int));
    return 0;
}



