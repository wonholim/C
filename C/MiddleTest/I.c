#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void openCard();
int main(void){
    srand(time(NULL));
    int i;
    for(int i = 0; i < 6; i++){
        openCard();
    }
    return 0;
}
void openCard(){
    int a, b;
    a = rand() % 13 + 1;
    b = rand() % 4 + 1;
    switch (b)
    {
    case 1:
        printf("Heart %d\n", a);
        break;
    case 2:
        printf("Spade %d\n", a);
        break;
    case 3:
        printf("Clover %d\n", a);
        break;
    case 4:
        printf("Diamond %d\n", a);
        break;
    }
}