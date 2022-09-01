#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a[10];
    srand(time(NULL));
    int max = 0;
    int sum = 0;
    for(int i = 0; i < 10; i++){
        a[i] = rand() % 100;
        if(a[i] > max) max = a[i];
        sum += a[i];
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("평균 %d\n", sum / 10);
    printf("큰수 %d", max);
}