#define io(v) cin >> v
#define toStr(x) "Result ="
#define INF 1000000;
#define FUNCTION(name, op) \
int name(int &a, int b) { if(b op a) a = b; return a; }
#define foreach(container, index) for(size_t index = 0; index < container.size(); ++index)

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}