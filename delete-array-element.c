#include<stdio.h>
int main () {
    int i, n;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
         scanf("%d", &arr[i]);
    }
    int index;
    scanf("%d", &index);
    for(i = index; i <= n-1; i++){
        arr[i] = arr[i+1];
    }
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// Take n(ex:10) number of inputs(ex:1 2 3 4 5 6 7 8 9 10)
// take number to be deleted at which index poistion(ex: 0)
// initialize loop control varialbe with given input index (ex:0) and iterate the loop untill it will reach to (n-1)th position
// to slide each element left by one position