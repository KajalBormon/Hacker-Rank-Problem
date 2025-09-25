#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b; 
    
    cin >> a;
    cin >> b;

    cout << a.size() << " " << b.size() << endl; 
    cout << a + b << endl;

    char original_a = a[0];

    a[0] = b[0];
    b[0] = original_a;

    cout << a << " " << b;

    return 0;
}