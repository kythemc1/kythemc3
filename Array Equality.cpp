#include <bits/stdc++.h>
using namespace std;

void Solve() {
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++) {
		int n,m;
		cin >> n >> m;
		int a[n+1], b[m+1];
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= m; i++) cin >> b[i];
		if(n != m) {
			cout <<"0" <<endl;
		} else {
			bool check = true;
			for(int i = 1; i <= n; i++) {
				if(a[i] != b[i]) {
					check = false;
					break;
				}
			}
			if(check == true) {
				cout << "1" << endl;
			} else {
				cout << "0" << endl;
			}
		}
		
	}
}

int main() {
	Solve();
	return 0;
}
