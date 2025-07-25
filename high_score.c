#include<stdio.h>

int main(void){
    int score;
    int s =0;
    char p = "a";
    char *z= &p;
    do{      
        printf("SCORE: ");
        scanf("%d",&score);
        puts("DO YOU WANNA CONTINUE:");
        gets(z);
        if(s>= score){
            continue;
        }else{
            s = score;
        }
    }while(&z != "b");
    printf("high score: %d",s);
    return 0;
}
