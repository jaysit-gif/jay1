#include<stdio.h>

long long int p(int i){
    if(i == 1){
        return 1;
    }
    else{
        return i*p(i-1);
    }
}

int main(void){
    long long int z;
    z = p(15);
    printf("%lld",z);
    return 0;
}