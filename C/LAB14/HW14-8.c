#include <stdio.h>
int main(){
    char str[80];
    char newWord[80];
    printf("Enter one word : ");
    scanf("%s", &str);
    int sum = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 48 && str[i] <= 57){
            sum += str[i] - 48;
        }
    }
    printf("%d", sum);
}