#include <stdio.h>

int main(void){
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("%d ", a);
    do{
        if(a % 2 == 0) a = a / 2;
        else if(a % 2 == 1) a = (a * 3) + 1;
        printf("%d ", a);
    }while(a != 1);

}