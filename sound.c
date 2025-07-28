#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main(void) {
    printf("Press 'q' to stop the alarm!\n");

    while (1) {
        if (_kbhit()) {
            char c = _getch();
            if (c == 'q' || c == 'Q') {
                printf("\nAlarm stopped.\n");
                break;
            }
        }
        Beep(750, 300);
        Beep(1000, 500);
    }
    return 0;
}