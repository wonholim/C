#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a;
    int b;
    int c;
    char d;
    srand(time(NULL));
    do{
    a = rand() % 100;
    b = rand() % 100;
    printf("%d + %d = ", a, b);
    scanf("%d", &c);
    if(a + b == c){
        printf("Your answer is correct\n");
    }else{
        printf("Your answer is wrong\n");
    }
    printf("Do you want to continue(y/n)? ");
    scanf("%c", &d); // mac은 엔터를 두번 받는다..
    scanf("%c", &d);
    }while(d != 'n');
}