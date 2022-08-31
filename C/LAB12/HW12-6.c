#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a;
    int b[100];
    srand(time(NULL));
    printf("Enter the number of random numbers<<= 100>:");
    scanf("%d", &a);
    int sum = 0;
    for(int i = 0; i < a; i++){
        b[i] = rand() % 100;
        sum += b[i];
    }
    printf("평균은 %d\n", sum / a);
    for(int i = 0; i < a; i++){
        if(i % 5 == 0 && i != 0){printf("\n");}
        printf("%5d", b[i]);
    }
}