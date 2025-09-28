#include <iostream>
#include<cstdlib>
using namespace std; 

int main()
{
    int n;
    long long sum = 0, x;
    cin >> n; 
    for(int i = 0; i < n; i++) {
        cin >> x;
        sum+=x;
    }

    cout << llabs(sum) << endl;
}