#include <stdio.h>
int main(){
    printf("--구구단 표는 다음과 같습니다.\n");
    int a[9][9];
    int count = 2;
    for(int i = 0; i < 9; i++){
        for(int j = 1; j <= 9; j++){
            a[i][j - 1] = count * j;
            printf("%5d", a[i][j - 1]);
        }
        count++;
        printf("\n");
    }
    int b;
    printf("--원하는 구구단은\n");
    scanf("%d", &b);
    for(int j = 0; j < 9; j++){
        printf("%5d", a[b - 2][j]);
    }
}