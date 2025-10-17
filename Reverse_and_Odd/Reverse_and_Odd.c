#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, arr[100000];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = n - 1; i >= 0; i--) {
        if(i % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
