#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a;
    int b = 5;
    while(b --> 0){
        a = rand() % 100;
        printf(" 난수출력: %d\n", a);
    }
}