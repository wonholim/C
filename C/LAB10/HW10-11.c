#include <stdio.h>
void printSumMTon(int m, int n);
int main(void){
    int m, n;
    printf("Enter two numbers: ");
    scanf("%d", &m);
    scanf("%d", &n);
    printSumMTon(m, n);
}
void printSumMTon(int m, int n){
    int sum = 0;
    printf("%d ~ %d의 합: ", m, n);
    for(int i = m; i <= n; i++){
        sum += i;
    }
    printf("%d", sum);
}