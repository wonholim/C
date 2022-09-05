#include <stdio.h>
#include <stdlib.h>
typedef struct Score{
    int mid;
    int final;
} Score;
void printScore(Score s);
Score biggerScore(Score s1, Score s2);
Score totalScore(Score s1, Score s2);
Score createScore(int m, int f);
void printScore(Score s){
    printf("중간 고사 성적은 : %d\n", s.mid);
    printf("기말고사 성적은 : %d\n", s.final);
}
Score biggerScore(Score s1, Score s2){
    if(s1.mid + s1.final >= s2.mid + s2.final){
        return s1;
    }else{
        return s2;
    }
}
Score totalScore(Score s1, Score s2){
    Score s3;
    s3.mid = s1.mid + s2.mid;
    s3.final = s1.final + s2.final;
    return s3;
}
Score createScore(int m, int f){
    Score s3;
    s3.mid = m;
    s3.final = f;
    return s3;
}
int main(){
    Score s1, s2, s3;
    s1.mid = 50; s1.final = 100;
    s2.mid = 70; s2.final = 70;
    printf("1)------------------------\n");
    printScore(s1);
    printScore(s2);
    printf("2)------------------------\n");
    printf("둘 중 성적이 좋은 점수 : \n");
    printScore(biggerScore(s1, s2));
    printf("3)------------------------\n");
    printf("두 성적의 총 합 : \n");
    printScore(totalScore(s1, s2));
    printf("4)------------------------\n");
    s3 = createScore(99, 99);
    printScore(s3);
}