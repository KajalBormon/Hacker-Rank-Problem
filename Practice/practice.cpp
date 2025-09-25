#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// vector<int> parseInts(string str) {
// 	// Complete this function
//     vector<int> newArr;
//     int num;
//     char ch;
//     stringstream ss(str);

//     while(ss >> num) {
//         newArr.push_back(num);
//         ss >> ch;
//     }
//     return newArr;
// }

int main() {
    string str;
    cin >> str;
    int num;
    vector<int> newArr;
    // vector<int> integers = parseInts(str);
    // for(int i = 0; i < (int)integers.size(); i++) {
    //     cout << integers[i] << "\n";
    // }
    stringstream ss(str);

    while(ss >> num) {
        newArr.push_back(num);
    }

    for(int i = 0; i < (int)newArr.size(); i++) {
        cout << newArr[i] << "\n";
    }

    
    return 0;
}