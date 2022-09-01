#include <stdio.h>
int main(){
    int a[12];
    int sum = 0;
    int b;
    for(int i = 0; i < 12; i++){
        if(i % 5 == 0 && i != 0){
            sum += 11;
            a[i] = sum;
            sum = 0;
        }else{
            sum += 11;
            a[i] = sum;
        }
    }
    printf("탐색할 수입은? ");
    scanf("%d", &b);
    for(int i = 0; i < 12; i++){
        if(a[i] == b){
            printf("%d를 가지는 첫번 째 달은 %d 입니다.", b, i+1);
            break;
        }
    }
}