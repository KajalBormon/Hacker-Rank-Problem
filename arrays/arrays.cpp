#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i, n, arr[10000], newArr[10000];

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(i = 0; i < n; i++) {
        newArr[i] = arr[n - i -1];
    }

    for(i = 0; i < n; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;
    return 0;
}
