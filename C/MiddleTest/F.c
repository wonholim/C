#include <stdio.h>
int sum(int a, int b);
int main(){
    int a,b;
    printf("두 정수를 입력하세요 :");
    scanf("%d %d", &a, &b);
    printf("두 정수의 합은 %d", sum(a, b));
}
int sum(int a, int b){
    return a+b;
}