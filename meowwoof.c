#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char buffer[5];
    printf("ENTER:  ");
    if(fgets(buffer,sizeof(buffer),stdin) != NULL){
        buffer[strcspn(buffer,"\n")] = '\0';
        if(strcmp(buffer,"CAT")==0){
            puts("MEOW");
        }
        else if(strcmp(buffer,"DOG")==0){
            puts("WOOF");
        }
    }
    return 0;
}