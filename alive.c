#include <stdbool.h>
#include <stdio.h>

#define dead break
#define alive true

void sleep();
void eat();
void study();
void code();

int main(void){
    int age = 0;
    while(alive){
        sleep();
        eat();
        study();
        code();
        age++;
        if(age == 75){
            dead;
        }
    }
    return 0;
}

void sleep(){
    puts("SLEEP");
}

void eat(){
    puts("EAT");
}
void code(){
    puts("CODE");
}

void study(){
    puts("STUDY");
}
