#include <stdio.h>
#include <windows.h>

int main(void){
    
    char *strings[4] = {"PHYSICS","MATHS","CHEMISTRY","PROGRAMMING"};
    for(int i = 0;i<4;i++){
        printf("I LOVE %s\n",strings[i]);
        Beep(750,600);
    }
    return 0;
}