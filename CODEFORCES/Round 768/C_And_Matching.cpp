#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, k;
	cin >> n >> k;

	if (k == n-1) {
		if (n==4) {
			cout << -1 << endl;
			return;
		}

		vector<pair<int,int>> ans;

		ans.emplace_back(0, 1);
		ans.emplace_back(n-2, n-1);
		ans.emplace_back(2, n-4);
		ans.emplace_back(3, n-3);

		rep(i, (n/2)-4) ans.emplace_back(i+4, n-1-(i+4));

		for (auto x : ans)
			cout << x.first << ' ' << x.second << endl;

		return;
	} 

	vector<pair<int,int>> ans;
	rep(i, (n/2)) ans.emplace_back(i, n-(i+1));

	if (k < n/2) {
		ans[0].second = ans[k].second;
		ans[k].second = n-1;
	} else {
		ans[0].second = ans[n-k-1].first;
		ans[n-k-1].first = n-1;
	}

	for (auto x : ans)
			cout << x.first << ' ' << x.second << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}