#include<stdio.h>
int main () {
    int i, j, n, temp;
    scanf("%d", &n);
    int a[n];
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    // To reverse the array we can use swapping logic
    // lets take an example a = [1, 2, 3, 4, 5]
    // swap(a[0],a[4]) => first elemnt becomes last element and last element becomes first element
    // Need to traversing from both the ends of the array so we need two loop control variables such as i & j
    // i traversing from starting and j traversing from end untill i==j or i<=j
    for (i=0,j=n-1; j>=i; i++,j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}