#include<stdio.h>
int main() {
    int i, n , min;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    min = a[0];
    for(i=0;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    printf("Minimum number from the given array: %d", min);
    printf("\n");
}