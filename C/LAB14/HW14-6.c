#include <stdio.h>
int main(){
    char str[80];
    char newWord[80];
    printf("Enter one word : ");
    scanf("%s", &str);
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 65 && str[i] <= 90){
            newWord[j] = str[i]; 
            j++;
        }
    }
    printf("%s", newWord);
}