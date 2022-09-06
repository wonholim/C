#include <stdio.h>
#define MAX_STACK_SIZE 100

typedef int element;
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
void push(StackType *s, element item){
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
        exit(1);
    }else{
        item = s->stack[s->top];
        return item;
    }
}
int main(){
    StackType s;

    init(&s);
    push(&s, 0);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);
    push(&s, 5);
    printf("peek : %d\n", peek(&s));
    printf("pop : %d\n", pop(&s));
    printf("pop : %d\n", pop(&s));
    printf("pop : %d\n", pop(&s));
    printf("pop : %d\n", pop(&s));
    printf("pop : %d\n", pop(&s));
    printf("pop : %d\n", pop(&s));
    printf("empty : %d\n", is_empty(&s));
}