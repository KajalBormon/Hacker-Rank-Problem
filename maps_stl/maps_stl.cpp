#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, y, type;
    string x; 
    map<string, int>m; 

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> type; 
        if(type == 1) {
            cin >> x >> y; 
        } else {
            cin >> x;
        }  

        if(type == 1) {
            m[x]+= y;
        } else if (type == 2) {
            m.erase(x);
        } else {
            if(m.find(x) != m.end()) {
                cout << m[x] << endl; 
            } else {
                cout << 0 << endl; 
            }
        }
    }

    return 0;
}