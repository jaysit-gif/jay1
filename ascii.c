
#include<stdio.h>

void simple(void){
    printf("\n");
    for(int i=0;i<=5;i++){    
        printf("#\t");        
    }
}

void triangle(void){
    for(int i=0;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("#\t");
        }
        printf("\n");
    }
}

void invertriangle(void){
    for(int i=0;i<=5;i++){
        for(int j=5-i;j>=1;j--){
            printf("#\t");
        }
        printf("\n");
    }
}
void pointlesstriangle(void){
    printf("\n");
    triangle();
    invertriangle();
}

int main(void){
    simple();
    printf("\n");
    triangle();
    printf("\n");
    invertriangle();
    pointlesstriangle();
    return 0;
}