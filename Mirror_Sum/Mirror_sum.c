#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, a1[1000], a2[1000]; 
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a1[i]);
    }

    for(int i = 0; i < n; i++) {
        scanf("%d", &a2[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", a1[i] + a2[n - i - 1]);
    }

    return 0;
}
