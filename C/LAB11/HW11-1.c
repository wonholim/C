#include <stdio.h>
int sumMToN(int m, int n);
int main(){
    int a, b;
    printf("두 수를 입력하세요.");
    scanf("%d %d", &a, &b);
    printf("%d 부터 %d 까지의 합은 : %d", a, b, sumMToN(a, b));
}
int sumMToN(int m, int n){
    int sum = 0;
    for(int i = m; i <= n; i++){
        sum += i;
    }
    return sum;
}