#include <stdio.h>
#include <windows.h>

int main(void){
    int i = 0;
    while (i<5)
    {
        Beep(750,300);
        Beep(1000,500);
        i++;
    }
    return 0;
}