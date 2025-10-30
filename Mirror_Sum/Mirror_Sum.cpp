#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std; 

int main() {
    int n, a1[1000], a2[1000]; 
    cin >> n; 

    for(int i = 0; i < n; i++) {
        cin >> a1[i]; 
    }

    for(int i = 0; i < n; i++) {
        cin >> a2[i];
    }

    for(int i = 0; i < n; i++) {
        cout << a1[i] + a2[n - i - 1] << " ";
    }

    return 0; 
}