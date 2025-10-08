#include<iostream>
#include <algorithm>
using namespace std;

struct Workshop {
    int start_time;  
    int duration;    
    int end_time;    
};

struct Available_Workshops {
    int n;           
    Workshop* ws;    
};

Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* aw = new Available_Workshops;
    
    aw->n = n;

    aw->ws = new Workshop[n];

    for (int i = 0; i < n; i++) {
        aw->ws[i].start_time = start_time[i];
        aw->ws[i].duration = duration[i];
        aw->ws[i].end_time = start_time[i] + duration[i]; 
    }

    return aw;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    int n = ptr->n;          
    Workshop* ws = ptr->ws;  

    sort(ws, ws + n, [](const Workshop &a, const Workshop &b) {
        return a.end_time < b.end_time;
    });

    int count = 0;          
    int lastEndTime = 0;    

    for (int i = 0; i < n; i++) {
        if (ws[i].start_time >= lastEndTime) {
            count++;                           
            lastEndTime = ws[i].end_time;     
        }
    }

    return count;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
