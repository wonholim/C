#include <stdio.h>
int main(){
    char str[][10] = {"ABC", "abcd", "Hello"};
    printf("str의 메모의 크기는 %d이다.\n", sizeof(str));
    for(int i = 0; i < 3; i++){
        printf("%d번째 스트링: %s,", i+1, str[i]);
        printf("아스키 코드값: ");
        for(int j = 0;  j < sizeof(str[i]); j++){
            if(str[i][j] != 0){
                printf("%d ", str[i][j]);
            }
        }
        printf("\n");
    }
}