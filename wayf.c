#include <stdio.h>
#include <stdlib.h>

int *factors(int a){
    if(a<= 1){
        fprintf(stderr,"\nINVALID ARGUMENTS\n");
    }
    int *factarray = NULL;
    int N = 1;
     for(int i =1;i<=a;i++){
        if(a % i == 0){
            int  *array = realloc(factarray,N*sizeof(int));
            if(array == NULL){
                fprintf(stderr,"MEM ALLOCATION FAILED");
                free(factarray);
                return NULL;
            }
            factarray = array;
            factarray[N-1] = i;
            N++;    
        }

    }
    return factarray;
}

void printfactors(int s){
    int* factor = factors(s);
    int i = 0;
    if(factor == NULL){
        fprintf(stderr,"\nERROR IN PRINTING FACTORS\n");
        free(factor);
        return;
    }
    while(factor[i] != s){
        printf("%d\t",factor[i]);
        i++; 
    }
    printf("%d\n",factor[i]);
    free(factor);
}
//is this ok??
int main(int argc,char *argv[]){
    int s;
    if (argc < 2) {
        printf("Usage: %s <positive_integer>\n", argv[0]);
        printf("Example: %s 12\n", argv[0]);
        return 1;
    }
    if(argc > 1){
        s = atoi(argv[1]);
        for(int i = 1;i<=argc-1;i++){
          s = atoi(argv[i]);
          printfactors(s);
        }
    }
    return 0;
}
