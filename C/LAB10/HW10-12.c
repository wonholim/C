#include <stdio.h>
void isPrime(int a);
int main(void){
    int a;
    do{
    printf("Enter a number<-1 exit>: ");
    scanf("%d", &a);
    isPrime(a);
    }while(a != -1);
}
void isPrime(int a){
    int i;
    for(i = 2; i < a; i++){
        if(a % i == 0){
            printf("소수가 아닙니다.\n");
            break;
        }
    }
    if(i == a){
        printf("소수 입니다\n");
    }
}