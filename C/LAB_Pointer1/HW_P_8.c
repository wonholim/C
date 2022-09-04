#include <stdio.h>
void print(int pa[][3], int size);
int max_arr(int pa[][3], int size);
void print(int pa[][3], int size){
    int *ppa = (int *)pa;
    for(int i = 0; i < size; i++){
        printf("%d ", *ppa);
        ppa++;
    }
}
int max_arr(int pa[][3], int size){
    int max = 0;
    int *ppa = (int *)pa;
    for(int i = 0; i < size; i++){
        if(*ppa > max) max = *ppa;
        ppa++;
    }
    return max;
}
int main(){
    int arr[][3] = {{1,22,70},{23,80,34},{90,20,4},{40,99,30}};
    int rowNB = sizeof(arr) / sizeof(int);
    print(arr, rowNB);
    printf("\n max : %d", max_arr(arr, rowNB));
}