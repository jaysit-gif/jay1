#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *input(char *buffer,int size);

int main(void){
    char buffer[5];
    input(buffer,5);
    if(strcmp(buffer,"CAT")==0){
        puts("MEOW");
    }else if(strcmp(buffer,"DOG") == 0){
        puts("WOOF");
    }else{
        puts("invalid");
    }
    
    return 0;
}

char *input(char *buffer,int size){
    printf("ENTER STRING: ");
    if(fgets(buffer,size,stdin)!=NULL){
        buffer[strcspn(buffer, "\n")] = '\0';
        if (strlen(buffer) == size - 1 && buffer[size - 2] != '\n') {
            int c;
            while ((c = getchar()) != '\n' && c != EOF); /**what went wron here again */
        }
        return buffer;
    }
    return NULL;
}