#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int element;
typedef struct DlistNode {
    element data;
    struct DlistNode *llink;
    struct DlistNode *rlink;
} DlistNode;
typedef struct DequeType {
    DlistNode *head;
    DlistNode *tail;
} DequeType;
// 초기화
void init(DequeType *dq){
    dq->head = dq->tail = NULL;
}
// 노드 생성
DlistNode *create_node(DlistNode *llink, element item, DlistNode *rlink){
    DlistNode *node = (DlistNode *)malloc(sizeof(DlistNode));
    if(node == NULL){
        printf("메모리 할당 오류\n");
    }else{
        node->llink = llink;
        node->data = item;
        node->rlink = rlink;
        return node;
    }
}
// 공백 함수
int is_empty(DequeType *dq){
    if(dq->head == NULL){
        return 1;
    }else{
        return 0;
    }
}
// 후단 삽입
void add_rear(DequeType *dq, element item){
    DlistNode *new_node = create_node(dq->head, item, dq->tail);
    new_node->data = item;
    new_node->rlink = dq->tail;
    if(is_empty(dq)){
        dq->head = new_node;
    }else{
        dq->tail->llink = new_node;
    }
    new_node->llink = NULL;
    dq->tail = new_node;
}
// 전단 삽입
void add_front(DequeType *dq, element item){
    DlistNode *new_node = create_node(dq->head, item, dq->tail);
    new_node->data = item;
    new_node->llink = dq->head;
    if(is_empty(dq)){
        dq->tail = new_node;
    }else{
        dq->head->rlink = new_node;
    }
    new_node->rlink = NULL;
    dq->head = new_node;
}
// 전단 삭제
element delete_front(DequeType *dq){
    element item;
    DlistNode *removed_node;
    if(is_empty(dq)){
        printf("비어있다.\n");
    }else{
        removed_node = dq->head;
        item = removed_node->data;
        if(dq->head == NULL){
            dq->tail = NULL;
        }else{
            dq->head->llink = NULL;
        }
        free(removed_node);
    }
    return item;
}
// 후단 삭제
element delete_rear(DequeType *dq){
    element item;
    DlistNode *removed_node;
    if(is_empty(dq)){
        printf("비어있다.\n");
    }else{
        removed_node = dq->tail;
        item = removed_node->data;
        if(dq->tail == NULL){
            dq->head = NULL;
        }else{
            dq->tail->rlink = NULL;
        }
        free(removed_node);
    }
    return item;
}
void display(DequeType *dq){
    DlistNode *p;
    printf("(");
    for(p = dq->head; p->llink != NULL; p = p->llink){
        printf("%d", p->data);
    }
    printf(")\n");
}
int main(){
    DequeType deque;

    init(&deque);
    add_front(&deque, 10);
    display(&deque);
    add_front(&deque, 20);
    display(&deque);
    add_rear(&deque, 30);
    display(&deque);

    delete_rear(&deque);
    display(&deque);
    delete_front(&deque);
    display(&deque);

}