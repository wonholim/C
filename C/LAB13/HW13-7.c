#include <stdio.h>
int main(){
    int table[5][3] = {0};
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", table[i][j] + j + i);
        }
        printf("\n");
    }
}