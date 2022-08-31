#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    int a;
    int sum = 0;
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        a = rand() % 10 + 1;
        printf("%d ", a);
        sum += a;
    }
    printf("\n");
    printf("The total is %d", sum);
}