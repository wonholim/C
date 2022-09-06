#include <stdio.h>
#define MAX_QUEUE_SIZE 100

typedef int element;
typedef struct{
    element queue[MAX_QUEUE_SIZE];
    int front,rear;
} QueueType;
// 초기화
void init(QueueType *q){
    q->front = q->rear = 0;
}
// 공백 상태 검출
int is_empty(QueueType *q){
    return q->front == q->rear;
}
// 포화 상태 검출
int is_full(QueueType *q){
    return (q->rear + 1) % MAX_QUEUE_SIZE == q->front;
}
// 삽입 함수
void enqueue(QueueType *q, element item){
    if(is_full(q)){
        printf("포화\n");
    }else{
        q->queue[++(q->rear)] = item;
    }
}
// 삭제 함수
element dequeue(QueueType *q){
    element item;
    if(is_empty(q)){
        printf("없음\n");
    }else{
        q->front = (q->front + 1) % MAX_QUEUE_SIZE;
        return q->queue[q->front];
    }
}
// 피크함수
element peek(QueueType *q){
    if(is_empty(q)){
        printf("공백\n");
    }else{
        return q->queue[(q->front + 1) % MAX_QUEUE_SIZE];
    }
}
int main(){
    QueueType q;
    init(&q);
    printf("front : %d rear : %d\n", q.front, q.rear);
    enqueue(&q, 1);
    printf("front : %d rear : %d\n", q.front, q.rear);
    enqueue(&q, 2);
    printf("front : %d rear : %d\n", q.front, q.rear);
    enqueue(&q, 3);
    printf("front : %d rear : %d\n", q.front, q.rear);
    printf("dequeue()=%d\n", dequeue(&q));
    printf("front : %d rear : %d\n", q.front, q.rear);
    printf("dequeue()=%d\n", dequeue(&q));
    printf("front : %d rear : %d\n", q.front, q.rear);
    printf("dequeue()=%d\n", dequeue(&q));
    printf("front : %d rear : %d\n", q.front, q.rear);
    printf("empty : %d\n", is_empty(&q));
    printf("front : %d rear : %d\n", q.front, q.rear);
}