#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, arr[100000];
    long long pos = 0; 
    long long neg = 0; 

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i] > 0) {
            pos+=arr[i];
        } else {
            neg+=arr[i];
        }
    }

    printf("%lld %lld", pos, neg);
    return 0;
}
