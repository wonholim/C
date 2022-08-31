#include <stdio.h>
int main(){
    printf("*****좌석 예약 시스템*****\n");
    printf("\n");
    char c;
    int a[10] = {0,0,0,0,0,0,0,0,0,0};
    int b;
    while(1){
        printf("좌석을 예약하시겠습니까?<y/n> : ");
        scanf("%c", &c); // mac
        scanf("%c", &c); 
        if(c == 'n') break;
        else{
            printf("----------------------\n");
            printf(" 1 2 3 4 5 6 7 8 9 10 \n");
            printf("----------------------\n");
            for(int i = 0; i < 10; i++){
                printf(" %d", a[i]);
            }
            printf("\n");
            printf("몇번째 좌석? ");
            scanf("%d", &b);
            a[b - 1] = 1;
            printf("예약되었습니다.\n");
            printf("\n");
        }
    }
}