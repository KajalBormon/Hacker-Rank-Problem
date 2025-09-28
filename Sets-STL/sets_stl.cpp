#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x, y, i, n; 
    set<int> s;
    cin >> n;
    
    for(i = 0; i < n; i++) {
        cin >> y >> x;
        if(y == 1) {
            s.insert(x);
        } else if (y == 2) {
            s.erase(x);
        } else {
            if(s.find(x) != s.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
