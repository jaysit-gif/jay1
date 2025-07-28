#include <stdio.h>

typedef struct vector{
    int i;
    int j;
    int k;
}vector;

vector add(vector a,vector b){
    vector c;
    c.i = a.i + b.i;
    c.j = a.j + b.j;
    c.k = a.k + b.k;
    return c;
}

void printvector(vector a){
    printf("%di + %dj + %dk",a.i,a.j,a.k);
}

int main(void){
    vector a,b,c;
    a.i = 9;
    a.j = 8;
    a.k = 0;
    b.i = 0;
    b.j = 6;
    b.k = 1;
    printf("%d\n",sizeof(vector));
    c = add(a,b);
    printvector(c);
    return 0;
}