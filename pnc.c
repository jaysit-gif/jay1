#include<stdio.h>

int fact(int a){
    if(a==0){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}

int specific_combination(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}

int main(void){
    int k = 0;
    for(int i = 2;i<=10;i++){
        printf("%d\n",specific_combination(i,2));
    }  
    printf("%d",k);
}