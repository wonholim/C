#include <stdio.h>
int poww(int m, int n);
int main(){
    int a;
    printf("Enter the number :");
    scanf("%d", &a);
    for(int i = 0; i <= 10; i++){
        printf("%d ^ %d == %d\n", a, i, poww(a, i));
    }
}
int poww(int m, int n){
    int sum = m;
    for(int i = 1; i < n; i++){
        sum = sum * m;
    }
    if(n == 0) return 1;
    else return sum;
}