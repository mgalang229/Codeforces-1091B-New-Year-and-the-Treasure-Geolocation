#include <bits/stdc++.h>
using namespace std;

void test_cases() {
	int n;
	cin >> n;
	vector<int> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	map<pair<int, int>, int> mp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			mp[make_pair(x[i] + a[j], y[i] + b[j])]++;
		}
	}
	for (pair<pair<int, int>, int> p : mp) {
		if (p.second == n) {
			cout << p.first.first << " " << p.first.second;
		}
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	//cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_cases();
	}
}
