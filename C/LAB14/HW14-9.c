#include <stdio.h>
int main(){
    char ch;
    char str[81];
    char newWord[81];
    printf("Enter one word : ");
    scanf("%s", &str);
    int i;
    int k = 0;
    for(i = 0; str[i] != '\0'; i++);
    for(int j = i - 1; 0 <= j; j--){
        newWord[k] = str[j];
        k++;
    }
    printf("%s", newWord);
}