#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int element;
typedef struct ListNode {
    element data;
    struct ListNode *link;
} ListNode;

// phead: 리스트들의 헤드 포인터의 포인터, new_node : 삽입될 노드
void inser_node_first(ListNode *HEAD, ListNode *new_node){
    if(HEAD == NULL){
        new_node->link = NULL;
        HEAD = new_node;
    }else{
        new_node->link = HEAD;
        HEAD = new_node;
    }
}
void inser_node_last(ListNode *HEAD, ListNode *new_node){
    ListNode *p;
    if(HEAD == NULL){
        new_node->link = NULL;
        HEAD = new_node;
    }else{
        p = HEAD;
        while(p->link != NULL){
            p = p->link;
        }
        p->link = new_node;
    }
}
void remove_node_first(ListNode *HEAD){
    ListNode *p;
    if(HEAD == NULL){
        printf("리스트가 비어있다.\n");
    }else{
        p = HEAD;
        HEAD = HEAD->link;
        free(p);
    }
}
void remove_node(ListNode *HEAD, element item){
    ListNode *p, *prevp;
    if(HEAD == NULL){
        printf("리스트가 비어있다.\n");
    }else if((HEAD)->data == item){
        p = HEAD;
        HEAD = HEAD->link;
        free(p);
    }else{
        p = HEAD;
        do{
            prevp = p;
            p =  p -> link;
        }while(p != NULL && p->data != item);
        if(p != NULL){ // item search
            prevp->link = p->link;
            free(p);
        }else{
            printf("%d는 리스트에 존재하지 않음.\n", item);
        }
    }
}
void display(ListNode *HEAD){
    ListNode *p = HEAD;
    while(p != NULL){
        printf("%d->", p->data);
        p = p->link;
    }
    printf("\n");
}
ListNode *search(ListNode *HEAD, element x){
    ListNode *p;
    p = HEAD;
    while(p != NULL){
        if(p->data == x){
            return p;
        }else{
            p = p->link;
        }
    }
    return NULL;
}
ListNode *concat(ListNode *HEAD1, ListNode *HEAD2){
    ListNode *p;
    if(HEAD1 == NULL) return HEAD2;
    else if(HEAD2 == NULL) return HEAD1;
    else{
        p = HEAD1;
        while(p->link != NULL){
            p = p->link;
        }
        p->link = HEAD2;
        return HEAD1;
    }
}
ListNode *reverse(ListNode *HEAD){
    ListNode *p, *q, *r;
    p = HEAD;
    q = NULL;
    while(p != NULL){
        r = q;
        q = p;
        p = p->link;
        q->link = r;
    }
    return q;
}
ListNode *create_node(element data, ListNode *HEAD){
    ListNode *new_node;
    new_node = (ListNode *)malloc(sizeof(ListNode));
    if(new_node == NULL){
        printf("메모리 할당 오류\n");
    }else{
        new_node->data = data;
        new_node->link = NULL;
    }
    return new_node;
}    
