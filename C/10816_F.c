#include<stdio.h>
#include<stdlib.h>

int left, right, cnt;

void count(int L, int R, int *CNT, int card[], int tgt){
    if (L <= R){
        int mid = (L+R)/2;
        if (card[mid] > tgt)
            count(L, mid-1, CNT, card, tgt);
        else if (card[mid] < tgt)
            count(mid+1, R, CNT, card, tgt);
        else {
            count(L, mid-1, CNT, card, tgt);
            count(mid+1, R, CNT, card, tgt);
            *CNT += 1;
        }   
    }
}

int static compare(const void *a, const void *b){
    if(*(int*)a > *(int*)b)
        return 1;
    else if(*(int*)a < *(int*)b)
        return -1;
    else
        return 0;
}

int main() {
    int N, M;
    scanf("%d", &N);
    int card[N];
    
    for (int i=0; i<N; i++)
        scanf("%d", &card[i]);
    
    scanf("%d", &M);
    int tgt[M];
    
    for (int i=0; i<M; i++)
        scanf("%d", &tgt[i]);
        
    qsort(card, N, sizeof(int), compare);
    
    for (int i=0; i<M; i++){
        left = 0;
        right = N-1;
        cnt = 0;
        count(left, right, &cnt, card, tgt[i]);
        
        printf("%d ", cnt);
    }
    
    return 0;
}