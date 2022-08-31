#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a;
    int b;
    int c;
    srand(time(NULL));
    a = rand() % 100;
    b = rand() % 100;
    printf("%d + %d = ", a, b);
    scanf("%d", &c);
    if(a + b == c){
        printf("Your answer is correct");
    }else{
        printf("Your answer is wrong");
    }
}