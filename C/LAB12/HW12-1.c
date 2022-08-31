#include <stdio.h>
int main(){
    int score[40];
    int a;
    printf("Enter the number of scores(0 < number >= 40):");
    scanf("%d", &a);
    int sum = 0;
    for(int i = 0 ; i < a; i++){
        printf("Enter a score");
        scanf("%d", &score[i]);
        sum += score[i];
    }
    printf("Total : %d\n", sum);
    printf("Average : %d\n", sum/a);
    for(int i = 0; i < a; i++){
        printf("%d ", score[i]);
    }
}