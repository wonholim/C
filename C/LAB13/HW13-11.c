#include <stdio.h>
int main(){
    int a[2][4] = {1,2,3,4,5,6,7,8};
    int b[4][2];
    int c[8];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            b[i][j] = a[j][i];
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            if(i == 0){
                c[i + j] = a[i][j];
            }else{
                 c[i + j + 3] = a[i][j];
            }
        }
    }
    for(int i = 0; i < 8; i++){
        printf("%5d",c[i]);
    }
}