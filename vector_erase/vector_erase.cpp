#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, pos, a, b, x, i;
    vector<int>v; 

    cin >> n; 
    for(i = 0; i < n; i++) {
        cin >> x; 
        v.push_back(x);
    }

    cin >> pos;
    cin >> a >> b; 

    v.erase(v.begin() + pos - 1);
    v.erase(v.begin() + a - 1, v.begin() + b - 1);

    int size = v.size();

    cout << size << endl;

    for(i = 0; i < size; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
