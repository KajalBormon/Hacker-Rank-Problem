#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, a[1000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int good_pair_count = 0;
    for(int i = 0; i < n; i++) { 
        for(int j = i + 1; j < n; j++) {
            if ((a[i] % 2 != 0 && a[j] % 2 == 0) || (a[i] % 2 == 0 && a[j] % 2 != 0)) {
                good_pair_count++;
            }
        }
    }
    
    printf("%d", good_pair_count);
    return 0;
}
