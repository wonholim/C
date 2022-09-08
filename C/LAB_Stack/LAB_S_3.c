#include <stdio.h>
#define MAX_STACK_SIZE 100

typedef struct element{
    int value;
    char *name[100];
} element;
typedef struct{
    element stack[MAX_STACK_SIZE];
    int top;
} StackType;

// 스택 초기화 함수
void init(StackType *s){
    s->top = -1;
}
// 공백상태 검출함수
int is_empty(StackType *s){
    return s->top == -1;
}
// 포화상태 검출함수
int is_full(StackType *s){
    return s->top == MAX_STACK_SIZE - 1;
}
// 삽입함수
void push(StackType *s, int val, char *str){
    element item;
    item.value = val;
    *item.name = &str;
    if(is_full(s)){
        printf("포화\n");
    }else{
        s->stack[++(s->top)] = item;
    }
}
// 삭제함수
element pop(StackType *s){
    if(is_empty(s)){
        printf("스택이 비었습니다\n");
    }else{
        element item;
        item = s->stack[s->top];
        s->top--;
        return item;
    }
}
// 피크함수
element peek(StackType *s){
    element item;
    if(is_empty(s)){
        printf("스택이 비었습니다\n");
    }else{
        item = s->stack[s->top];
        return item;
    }
}
void display(StackType *s){
    printf("--\n");
    for(int i = s->top; 0 <= i; i--){
        if(i == s->top){
            printf("[%d, %s] <- top\n", s->stack[i].value, s->stack[i].name);
        }else{
            printf("[%d, %s]\n", s->stack[i].value, s->stack[i].name);
        }
    }
}
int main(){
    StackType s;

    init(&s);
    push(&s, 10, "ten");
    display(&s);
    push(&s, 20, "twenty");
    display(&s);
    push(&s, 30, "thirty");
    display(&s);
    push(&s, 40, "fourity");
    display(&s);
    pop(&s);
    display(&s);
    push(&s, 50, "fifty");
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
}