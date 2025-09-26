#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

class ErrorException : public exception {
private: 
    int num;
    string message; 
public: 
    ErrorException(const string& msg, int n) : num(n) {
        stringstream ss;
        ss << msg << " (Error Code: " << num << ")";
        message = ss.str();
    }

    const char* what() const noexcept override {
        return message.c_str();
    }

    int code() const {   
        return num;
    }
};

int main() {
    try {
        throw ErrorException("Invalid length detected:", 400);
    } catch (const ErrorException& e) {
        cout << "Caught Exception: " << e.what() << endl;
        cout << "Error code only: " << e.code() << endl;
    }
}
