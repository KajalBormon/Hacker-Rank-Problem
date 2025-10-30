#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s1[1000], s2[1000]; 
    int start, end; 
    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%d %d", &start, &end);

    int len1 = strlen(s1);

    for(int i = start; i <= end; i++) {
        s1[len1] = s2[i];
        len1++;
    }

    s1[len1] = '\0';

    printf("%s", s1);
    return 0; 
}