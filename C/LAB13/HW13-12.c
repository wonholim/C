#include <stdio.h>

int main(){
    int a[5][4] = {{10,15,20},{30,35,20},{60,65,20},{90,95,20},{0,0,0}};
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    int max;
    for(int i = 0; i < 5; i++){
        max = 0;
        for(int j = 0; j < 4; j++){
            if(j == 3){
                a[i][j] = max;
            }else{
                max += a[i][j];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        max = 0;
        for(int j = 0; j <= 4; j++){
            if(j == 4){
                a[j][i] = max;
            }else{
                max += a[j][i];
            }
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    
}