#include<stdio.h>
#include<math.h>
int main(void){
    int x = 0;
    int y = 0;
    int k=0;
    while(x<=10){
        while (y<=10)
        {
            if(abs(x-y)>5){
                k++;
                y++;
            }
            x++;
        }
        
    }
    printf("%d",k);
    return 0;
}