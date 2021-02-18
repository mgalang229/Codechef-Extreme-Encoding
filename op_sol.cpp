#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	for (int qq = 1; qq <= tt; qq++) {
		int n;
		cin >> n;
		vector<int> A(n);
		for (int i = 0; i < n; i++) {
			cin >> A[i];	
		}
		vector<int> a, b;
		for (int i = 0; i < n; i++) {
			// i just changed the "pow(2, 16)" in my original solution to "1 << 16"
			int y = A[i] / (1 << 16);
			int x = A[i] - (y * (1 << 16));
			a.emplace_back(x);
			b.emplace_back(y);
		}
		cout << "Case " << qq << ":\n";
		for (int i = 0; i < (int) a.size(); i++) {
			cout << a[i] << " ";
		}
		cout << '\n';
		for (int i = 0; i < (int) b.size(); i++) {
			cout << b[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
