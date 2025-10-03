#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k)
{
    // Write your code here.
    deque<int> dq;

    for (int i = 0; i <= n - k; i++)
    {
        deque<int> d(arr + i, arr + i + k);

        int maxValue = 0; 
        
        for(int x : d){
            if(x > maxValue){
                maxValue = x; 
            }
        }
        dq.push_back(maxValue);
    }

    for (int j = 0; j < (int)dq.size(); j++)
    {
        cout << dq[j] << " ";
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}

// test case
//  1
//  5 2
//  3 4 6 3 4

// 7 4
// 3 4 5 8 1 4 10

//Time execution error