#include <stdio.h>
// This program calculates the number of handshakes that can be made in a group of n people
// where each person shakes hands with every other person exactly once.
int main() {
    int n, handshakes;
    scanf("%d", &n);
    handshakes = n*(n-1)/ 2;
    printf("%d", handshakes);
    return 0;
}