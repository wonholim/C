#include <stdio.h>
int main(){
    int j;
    char str[10];
    printf("Enter one word : ");
    scanf("%s", &str);
    int sum = 0;
    for(j = 0; str[j] != '\0'; j++);
    int tmp = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 48 && str[i] <= 57){
            tmp = tmp + str[i] - 48;
            if(i + 1 < j){
                if(str[i + 1] >= 48 && str[i + 1] <= 57){
                    tmp = tmp * 10;
                }else{
                    sum += tmp;
                    tmp = 0;
                }
            }else{
                sum += tmp;
                tmp = 0;
            }
        }
    }
    printf("%d", sum);
}