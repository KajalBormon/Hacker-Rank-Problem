#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q, x, i;
    vector<int>v1; 
    vector<int>v2;


    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> x;
        v1.push_back(x);
    }
    cin >> q; 
    for(i = 0; i < q; i++) {
        cin >> x;
        v2.push_back(x);
    }


    for(i = 0; i < q; i++) {
        auto it = lower_bound(v1.begin(), v1.end(), v2[i]);
        int index = it - v1.begin(); 
        
        if(it != v1.end() && *it == v2[i]) {
            cout << "Yes " << index + 1 << endl;
        } else {
            cout << "No " << (index + 1) << endl;
        }
    }

    return 0;
}
