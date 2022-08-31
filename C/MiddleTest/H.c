#include <stdio.h>
int poww(int a, int b);
int main(){
    int a, b;
    printf("Enter 2 numbers :");
    scanf("%d %d", &a, &b);
    printf("%d", poww(a, b));
}
int poww(int a, int b){
    int sum = a;
    for(int i = 1; i < b; i++){
        sum = sum * a;
    }
    return sum;
}