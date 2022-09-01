#include <stdio.h>
int main(){
    int i, j;
    char str[10];
    char newWord[10];
    printf("Enter one word : ");
    scanf("%s", &str);
    printf("Enter one word : ");
    scanf("%s", &newWord);
    for(i = 0; str[i] != '\0'; i++);
    for(j = 0; newWord[j] != '\0'; j++);
    if(i != j){
        printf("x");
        return 0;
    }else{
        for(int k = i - 1; 0 <= k; k--){
            if(str[k] != newWord[k]){
                printf("x");
                return 0;
            }
        }
        printf("o");
    }
}