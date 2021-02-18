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
		// view the image in this repository for better understanding
		// basically, just reverse the operations from the code snippet given in the problem
		vector<int> a, b;
		for (int i = 0; i < n; i++) {
			// divide the a[i] by 2 ^ 16 to get the second component
			int y = A[i] / pow(2, 16);
			// get the difference of a[i] and product of the second component and 2 ^ 16 to get the first component
			int x = A[i] - (y * pow(2, 16));
			// insert the first components in the 'a' array
			a.emplace_back(x);
			// insert the second components in the 'b' array
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