#include <stdio.h>
#define SIZE 10
int main(){
    int a[SIZE] = {0};
    int b[SIZE] = {0};
    int num;
    for(int i = 0; i < 10; i++){
        printf("Enter a number:");
        scanf("%d", &num);
        if(num % 2 == 0){
            a[i] = num;
        }else{
            b[i] = num;
        }
    }
    printf("홀수출력");
    for(int i = 0; i < SIZE; i++){
        if(b[i] != 0) printf("%d ", b[i]);
    }

    printf("\n짝수출력");
    for(int i = 0; i < SIZE; i++){
        if(a[i] != 0) printf("%d ", a[i]);
    }
}