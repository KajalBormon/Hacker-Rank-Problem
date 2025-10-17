#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, remaining; 
    scanf("%d",&n);
    if(n > 1000) {
        printf("I will buy Punjabi");
        remaining = n - 1000;
        if(remaining >= 500) {
            printf("\nI will buy new shoes");
            printf("\nAlisa will buy new shoes");
        }
    }  else {
        printf("Bad luck!");
    } 

    return 0;
}
