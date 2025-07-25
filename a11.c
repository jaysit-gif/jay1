
#include <stdio.h>

int main()
{
    int n;
    int z1=0;
    int z2=0;
    scanf("%d", &n);

    for(int i = 0;i<n;i++){
        if(i%3==0){
            z1+=i;
        }
        if(i%2==0){
            z2 += i;
        }
    }

    printf("%d\n",z1-z2);

    return 0;
}