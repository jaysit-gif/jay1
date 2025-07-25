#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *alpha = fopen("ALPHABET.txt","w");
    if(alpha == NULL){
        printf("FAILED TO OPEN FILE!!!");
        return 1;
    }
    for(int i = 65;i<91;i++){     
        fprintf(alpha,"%c\t",(char)i);
    }
    fprintf(alpha,"\n");
    for(int i = 97;i<123;i++){     
        fprintf(alpha,"%c\t",(char)i);
    }

    fclose(alpha);
    printf("THE NECCESARY CHANGES HAVE BEEN MADE");
    return 0;
}