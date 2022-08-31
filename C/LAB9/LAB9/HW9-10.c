#include <stdio.h>

int main(void){
    int a;
    int b = 5;
    int i = 1;
    int sum = 0;
    while(b --> 0){
    do{
    if(a <= 0) printf("입력이 잘못되었습니다. ");
    printf("0보다 큰 수를 입력<%d>번째: ", i);
    scanf("%d", &a);

    }while(a <= 0);
    sum += a;
    i++;
    }
    printf("The total is %d ", sum);
}