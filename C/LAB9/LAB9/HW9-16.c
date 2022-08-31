#include <stdio.h>

int main(void){
    int a;
    do{
    printf("Enter a number : ");
    scanf("%d", &a);
    }while(a <= 0);
    printf("입력된 양수는 %d", a);

}