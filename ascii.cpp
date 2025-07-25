#include <iostream>

void simple() {
    std::cout << "\n";
    for(int i = 0; i <= 5; i++) {    
        std::cout << "#\t";        
    }
}

void triangle() {
    for(int i = 0; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            std::cout << "#\t";
        }
        std::cout << "\n";
    }
}

void invertriangle() {
    for(int i = 0; i <= 5; i++) {
        for(int j = 5 - i; j >= 1; j--) {
            std::cout << "#\t";
        }
        std::cout << "\n";
    }
}

void pointlesstriangle() {
    std::cout << "\n";
    triangle();
    invertriangle();
}

int main() {
    simple();
    std::cout << "\n";
    triangle();
    std::cout << "\n";
    invertriangle();
    pointlesstriangle();
    return 0;
}