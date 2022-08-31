#include <stdio.h>
int getNumber();
int main(){
    int a, b;
    a = getNumber();
    b = getNumber();
    printf("입력받은 수는 %d와 %d이다", a, b);
}
int getNumber(){
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    return a;
    
}