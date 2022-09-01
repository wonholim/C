#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a[3][5];
    int sum = 0;
    srand(time(NULL));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            a[i][j] = rand() % 100;
            sum += a[i][j];
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    printf("평균 : %d\n", sum / 15);
    for(int i = 0; i < 5; i++){
        sum = 0;
        for(int j = 0; j < 3; j++){
            sum += a[j][i];
        }
        printf("%5d", sum);
    }
}