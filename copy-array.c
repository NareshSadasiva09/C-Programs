#include<stdio.h>
int main () {
    int i, n;
    scanf("%d", &n);
    int a[n], b[n];
    // To Scan the n elements into a[]
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        b[i] = a[i];
    }
    for(i=0; i<n; i++){
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}