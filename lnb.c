#include<stdio.h>

int teni(int a){
    if(a == 0){
        return 1;
    }else{
        return 10*teni(a-1);
    }
}
// how would rate this piece of code on the basis of modularity and clarity of thought the programmer has 
int noofdigs(int a){
    int i = 1;
    while(a != 0){
        a = a/teni(i);
        i++;
    }
    return i;
}
int digi(int a,int i){
    a = a /teni(i-1);
    a = a%10;
    if(i == 1){
        a = a%10;
        return a;
    }
    return a;
}
int digisum(int a){
    int k = 0;
    int z;
    for(int i = 1;i<= noofdigs(a);i++){
        k += digi(a,i);
    }
    return k;
}
int main(void){
    printf("%d",digisum(546));
    return 0;
}