#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a, b, c, op;
    char g;
    srand(time(NULL));
    do{
        a = rand() % 100;
        b = rand() % 100;
        op = rand() % 4;
        switch (op)
        {
        case 0:
            printf("%d + %d = ", a, b);
            scanf("%d", &c);
            if(a + b == c){
                printf("Your answer is correct\n");
            }else{
                printf("Your answer is wrong\n");
            }
            break;
        case 1:
            printf("%d - %d = ", a, b);
            scanf("%d", &c);
            if(a - b == c){
                printf("Your answer is correct\n");
            }else{
                printf("Your answer is wrong\n");
            }
            break;
        case 2:
            printf("%d * %d = ", a, b);
            scanf("%d", &c);
            if(a * b == c){
                printf("Your answer is correct\n");
            }else{
                printf("Your answer is wrong\n");
            }
            break;
        case 3:
            printf("%d / %d = ", a, b);
            scanf("%d", &c);
            if(a / b == c){
                printf("Your answer is correct\n");
            }else{
                printf("Your answer is wrong\n");
            }
            break;
        }
    printf("Do you want to continue(y/n)?\n");
    scanf("%c", &g); // mac
    scanf("%c", &g);
    }while(g != 'n');
}