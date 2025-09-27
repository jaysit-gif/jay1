#include <stdio.h>

typedef struct stint{
    int integer;
    char *string;
}stint;

int func(int a){
    if(a>4){
        return 4;
    }else if (a<0){
        return 0;
    }else{
        return a;
    }
}

stint suffix(int c){
    stint n;
    char *a[] = {"st","nd","rd","th"};
    n.integer = c;
    n.string = a[func(c)-1];
    return n;
}

//hows this new version???
int main(void){
    int N;
    printf("N: ");
    scanf("%d",&N);
    stint x = suffix(N);
    printf("%d %s\n",x.integer,x.string);
    return 0;
}