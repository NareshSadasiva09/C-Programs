#include<stdio.h>
int main() {
    int n,k,i;
    scanf("%d", &n);
    int arr[n];
    scanf("%d",&k);
    for(i = 0; i < k; i++){
        scanf("%d", &arr[i]);
    }

    int x, index;
    scanf("%d %d", &x,&index);
    for(i = k-1; i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = x;
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");


}
// take total array size as n(ex:7)
// fill the array with k(ex:5) number of elements: 7 8 9 10 11
// take number to be inserted as x(ex:10) at index position as index(ex:3)
// start loop from i = k-1 till k-1(4) value greater than or equal to desired index(3) 
// then slide each element to right side for each iteration untill condition true
// then put desired element(ex:10) at desired position(ex:3)