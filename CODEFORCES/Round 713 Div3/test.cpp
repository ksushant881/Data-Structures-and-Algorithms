#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int n, l, r, s;
    cin >> n >> l >> r >> s;
    l--; r--;
    for (int first = 1; first + (r - l) <= n; first++) {
        int sum = 0;
        for (int i = l; i <= r; i++) {
            sum += first + (i - l);
        }
        if (sum <= s && s - sum <= r - l + 1) {
            int needAdd = r - (s - sum) + 1;
            vector<int> ans(n);
            set<int> non_blocked;
            for (int i = 1; i <= n; i++) {
                non_blocked.insert(i);
            }
            for (int i = l; i <= r; i++) {
                ans[i] = first + (i - l);
                if (i >= needAdd) {
                    ans[i]++;
                }
                non_blocked.erase(ans[i]);
            }
            if (ans[r] > n) {
                continue;
            }
            non_blocked.erase(ans[r]);
            for (int i = 0; i < l; i++) {
                ans[i] = *non_blocked.begin();
                non_blocked.erase(non_blocked.begin());
            }
            for (int i = r + 1; i < n; i++) {
                ans[i] = *non_blocked.begin();
                non_blocked.erase(non_blocked.begin());
            }
            for (int i : ans) {
                cout << i << " ";
            }
            cout << "\n";
            return;
        }
    }
    cout << "-1\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
}