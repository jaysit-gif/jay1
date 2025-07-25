#include<stdio.h>
#include<stdbool.h>

int testfunction(int N);
int main(void){
    int a;
    printf_s("S: ");
    scanf("%d",&a);
    testfunction(a);
    puts("OUTPUT ON FACTORS FILE");
    return 0;
}
int testfunction(int N){
    FILE *fi = fopen("factors.txt","w");
    int noffactors = 0;
    for(int i=1;i<=N;i++){
        if(N%i==0){
            noffactors++;
            fprintf(fi,"factor: %d\n",i);
        }      
    }
    if(noffactors>2){
        fprintf(fi,"composite");
        return 0;
    }if(noffactors==1){
        fprintf(fi,"NEITHER PRIME NOR COMPOSITE");
        return 2;
    }else{
        fprintf(fi,"prime");
        return 1;
    }
    fclose(fi);
}
