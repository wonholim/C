#include <stdio.h>
int main(){
    int test[4][3] = {{8,7},{6,5},{1,2},{3,4}};
    int sum = 0;
    for(int i = 0 ; i < 4; i++){
        printf("%d번째 row : ", i + 1);
        for(int j = 0; j < 3; j++){
            printf("%d ", test[i][j]);
        }
        printf("\n");
    }
    for(int i = 0 ; i < 4; i++){
        printf("%d번째 row : ", i + 1);
        for(int j = 0; j < 3; j++){
            if(test[i][j] == 0) test[i][j] = -1;
            printf("%d ", test[i][j]);
            sum += test[i][j];
        }
        printf("\n");
    }
    printf("Total is %d\n", sum);
    printf("Average is %.2f\n", (float)sum / 12);
    sum = 0;
    int max;
        for(int i = 0 ; i < 4; i++){
        max = 0;
        printf("%d번째에서의 최댓값 : ", i + 1);
        for(int j = 0; j < 3; j++){
            if(test[i][j] > max) max = test[i][j];
        }
        printf("%d\n", max);
        sum += max;
        }
    printf("최댓값의 합 : %d", sum);
}