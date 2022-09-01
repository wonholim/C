#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a[10];
    srand(time(NULL));
    int min = 101;
    int tmp = 0;
    for(int i = 0; i < 10; i++){
        a[i] = rand() % 100;
    }
    for(int i = 0; i < 10; i++){
        min = 101;
        tmp = 0;
        for(int j = i; j < 10; j++){
            if(a[j] < min){
                min = a[j];
                tmp = j;
            }
        }
        int tmpp = a[i];
        a[i] = min;
        a[tmp] = tmpp;
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
}