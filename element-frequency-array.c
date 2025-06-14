#include<stdio.h>
int main() {
    int i, n;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    int count = 0;
    for(i = 0; i < n; i++){
        if(arr[i] == x){
           count++;
        }
    }
    printf("Number of occurances of %d: %d", x,count);
    printf("\n");
}