#include <stdio.h>

int main(void){
    int count = 1;
    int i = 2;
    int j;
    do{
        for(j = 2; j < i; j++){
            if(i % j == 0) break;
        }
        if(i == j){
            printf("%d번째 소수는 %d\n",count, i);
            count++;
        }
        i++;
    }while(count != 11);


}