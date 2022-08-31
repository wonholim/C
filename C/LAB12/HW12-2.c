#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a;
    int b[10];
    srand(time(NULL));
    int sum = 0;
    for(int i = 0; i < 10; i++){
        b[i] = rand() % 100;
        sum += b[i];
        printf("%d ", b[i]);
    }
    printf("\n");
    printf("평균은 %d", sum / 10);
}