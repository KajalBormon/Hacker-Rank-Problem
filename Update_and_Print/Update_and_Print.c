#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, arr[100000], x, v;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &x, &v);

    for(int i = n - 1; i >= 0; i--) {
        if(i == x) {
            arr[i] = v;
        }
        printf("%d ", arr[i]);
    }
    return 0;
}
