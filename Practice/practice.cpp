#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

// class ErrorException : public exception {
// private: 
//     int num;
//     string message; 
// public: 
//     ErrorException(const string& msg, int n) : num(n) {
//         stringstream ss;
//         ss << msg << " (Error Code: " << num << ")";
//         message = ss.str();
//     }

//     const char* what() const noexcept override {
//         return message.c_str();
//     }

//     int code() const {   
//         return num;
//     }
// };

int main() {
    int arr[5] = {0,20,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
