#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int apple_i = rand() % 5;
    int apple_j = rand() % 5;
    char arr[5][5] = {{'#','#','#','#','#'}
                       ,{'#','#','#','#','#'}
                      ,{'#','#','#','#','#'}
                       , {'#','#','#','#','#'}
                    , {'#','#','#','#','#'}};

    arr[apple_i][apple_j] = 'A';                
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            printf("%c\t",arr[i][j]);
        }
        printf("\n");
    }                
    return 0;
}