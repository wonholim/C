#include <stdio.h>

int main(void){
    int a;
    char b;
    do{
    printf("Enter your height : ");
    scanf("%d", &a);
    printf("Your ideal weight is %d\n", a - 110);
    printf("Do you want to continue(y/n)?\n");
    scanf("%c", &b);
    }while(b != 'n');
}