#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

int main() {
    for(int i = 0; i<=10; i++) {
        if(i > 2) {
            continue; 
        }
        cout << "hi ";
    }
}
