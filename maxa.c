#include<stdio.h>

int compare(int x,int y){
    int z;
    z = (x != y)?((x>y)?1:2):3;
    return z;
}

void pcompare(int x, int y){
    (x != y) ? ((x > y) ? printf("%d is greater than %d", x, y) : printf("%d is greater than %d", y, x)) 
             : printf("%d = %d", x, y);
}

int main(void){
    int x,y;  
    scanf("%d",&x);
    scanf("%d",&y);
    pcompare(x,y);
    printf("\n%d",compare(x,y));
    return 0;
}
