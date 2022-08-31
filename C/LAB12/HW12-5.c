#include <stdio.h>
int main(){
    int a, c;
    printf("Enter the number of scores<<= 20>:");
    scanf("%d", &a);
    int b[20];
    for(int i = 0; i < a; i++){
        printf("Enter a score :");
        scanf("%d", &c);
        b[i] = c;
    }
    for(int i = 0; i < a; i++){
        printf("Student  %d:  ", i+1);
        for(int j = 0; j < b[i]; j++){
            printf("*");
        }
        printf("\n");
    }
}