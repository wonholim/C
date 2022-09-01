#include <stdio.h>
int main(){
    char str[80];
    printf("Enter one word : ");
    scanf("%s", &str);
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 65 && str[i] <= 90){
            printf("%c\n", str[i]);
        }
    }
}