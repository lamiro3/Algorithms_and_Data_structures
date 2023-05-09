#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b){
    int n1 = *(int*)a, n2 = *(int*)b;
    if (n1 < n2)
        return -1;
    else if (n1 > n2)
        return 1;
    return 0;
}
int binary_search_bound(int *arr, int val, int N){
    int first = 0, last = N, mid;
    while (last > first){
        mid = (first + last)/2;
        arr[mid] > val ? last = mid : (first = mid + 1);
    }
    int temp = last;
    first = 0, last = N;
    while (last > first){
        mid = (first + last)/2;
        arr[mid] >= val ? last = mid : (first = mid + 1);
    }
    return temp - last;
}