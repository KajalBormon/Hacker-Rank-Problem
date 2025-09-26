#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string data = "101 John 3.9";

    stringstream ss(data);
    int id;
    string name;
    float gpa;

    ss >> id >> name >> gpa;

    cout << "ID: " << id << ", Name: " << name << ", GPA: " << gpa << endl;
    // Output: ID: 101, Name: John, GPA: 3.9
}
