#include <stdio.h>
int main(){
    char str[80];
    char newWord[80];
    printf("Enter one word : ");
    scanf("%s", &str);
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 65 && str[i] <= 90){
            newWord[i] = str[i] + 32; 
        }else{
            newWord[i] = str[i] - 32; 
        }
    }
    printf("%s", newWord);
}