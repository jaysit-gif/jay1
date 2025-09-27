#include <stdarg.h>
#include <stdio.h>

int suma(int count,...){
    va_list args;
    va_start(args, count);//what is va_start???

    int total = 0;
    for(int i = 0;i<count;i++){
        total += va_arg(args,int);
    }

    va_end(args);
    return total;
}

int main(void){
    int arr[] = {2,3,4,5};
    int t = suma(8,2,4,1,4,2,4,5,10);
    int t1 = suma(2,5,6);
    int t2 = suma(4,6,4,1,3);
    printf("%d\n%d,%d",t,t1,t2);
    return 0;
}