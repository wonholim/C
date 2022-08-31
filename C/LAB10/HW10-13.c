#include <stdio.h>
void printFibo(int a);
int main(void){
    int a;
    printf("몇개의 피보나치 수열값을 출력할가요?(3보다 큰 정수) :");
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        printFibo(i);
    }
}
void printFibo(int a){
    if(a == 0) printf("1 ");
    if(a == 1) printf("1 ");
    if(a >= 2){
        a--;
        int tmp = 1;
        int tmpp = 1;
        int tmppp = 0;
        while(a --> 0){
            tmppp = tmp + tmpp;
            tmp = tmpp;
            tmpp = tmppp;
        }
        printf("%d ", tmppp);
        }
}
