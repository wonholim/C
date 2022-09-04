#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumUpData(int *p, int size);
void printData(int *p, int size);
int maxData(int *p, int size);

int sumUpData(int *p, int size){
    int k;
    int sum = 0;
    for(k = 0; k < size; k++){
        sum += *p++;
    }
    return sum;
}
void printData(int *p, int size){
    for(int k = 0; k < size; k++){
        printf(" %d", *p++);
    }
    printf("\n");
}
int maxData(int *p, int size){
    int max = 0;
    for(int k = 0; k < size; k++){
        if(*p > max) max = *p;
        p++;
    }
    return max;

}
int main(){
    int k;
    int *p;
    int sum;

    int data[10];

    p = data;
    srand(time(NULL));

    for(k = 0; k < 10; k++){
        *p++ = rand() % 100;
    }

    sum = sumUpData(data, 10);
    printf("합계 : %d\n", sum);

    printf("엘리먼트 들 : ");
    printData(data, 10);

    printf("max : %d", maxData(data, 10));
}