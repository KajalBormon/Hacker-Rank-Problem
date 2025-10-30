#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std; 

int main() {
    string s1, s2; 
    int start, end; 
    cin >> s1; 
    cin >> s2; 
    cin >> start >> end; 

    for(int i = start; i < s2.size(); i++) {
        s1+=s2[i];
    }
    cout << s1 << endl;
    return 0; 
}