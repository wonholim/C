#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

typedef int element;
typedef struct DlistNode{
    element data;
    struct DlistNode *llink;
    struct DlistNode *rlink;
} DlistNode;
// 이중 연결 리스트를 초기화
void init(DlistNode *phead){
    phead->llink = phead;
    phead->rlink = phead;
}
// 이중 연결 리스트의 노드를 출력
void display(DlistNode *phead){
    DlistNode *p;
    for(p = phead->rlink; p != phead; p = p->rlink){
        printf("<----|%x|%d|%x|---->\n", p->llink, p->data, p->rlink);
    }
    printf("\n");
}
void display2(DlistNode *phead){
    DlistNode *p;
    for(p = phead->rlink; p != phead; p = p->rlink){
        printf("%d->\n",p->data);
    }
    printf("\n");
}
// 노드 new_node를 노드 before의 오른쪽에 삽입한다.
void dinsert_node(DlistNode *before, DlistNode *new_node){
    new_node->llink = before;
    new_node->rlink = before->rlink;
    before->rlink->llink = new_node;
    before->rlink = new_node;
}
void dremove_node(DlistNode *phead_node, DlistNode *removed){
    if(removed == phead_node) return;
    removed->llink->rlink = removed->rlink;
    removed->rlink->llink = removed->llink;
    free(removed);    
}
DlistNode * dcreate_node(element data){
    DlistNode *temp;
    temp = (DlistNode *)malloc(sizeof(DlistNode));
    temp->llink = NULL;
    temp->data = data;
    temp->rlink = NULL;
    return temp;
}
int main(){
    DlistNode head_node;

    init(&head_node);

    dinsert_node(&head_node, dcreate_node(10));
    dinsert_node(&head_node, dcreate_node(20));
    dinsert_node(&head_node, dcreate_node(30));
    dinsert_node(&head_node, dcreate_node(40));
    display2(&head_node);
    display(&head_node);
    dremove_node(&head_node, head_node.rlink);
    display2(&head_node);
    display(&head_node);
    dremove_node(&head_node, head_node.rlink);
    display2(&head_node);
    display(&head_node);
}