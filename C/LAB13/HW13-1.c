#define SIZE 5
#include <stdio.h>
int main(){
    int a[SIZE] = {1, 2, 3, 4 ,1};
    int b[SIZE];
    int c[SIZE];
    int i;
    int same;
    for(i = 0; i < SIZE; i++){
        b[i] = a[i];
        c[i] = a[SIZE - i - 1];
    }
    same = 1;
    for(int i = 0; i < SIZE; i++){
        if(a[i] != b[i]){
            same = 0;
        }
    }
    if(same){
        printf("A Equal B\n");
    }else{
        printf("A NOT Equal B\n");
    }

    same = 1;
    for(int i = 0; i < SIZE; i++){
        if(a[i] != c[i]){
            same = 0;
        }
    }
    if(same){
        printf("A Equal C\n");
    }else{
        printf("A NOT Equal C\n");
    }
}