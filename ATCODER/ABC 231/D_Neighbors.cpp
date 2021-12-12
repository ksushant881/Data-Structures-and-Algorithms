#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    ll n, m;
    cin >> n >> m;

    vector<int> a(m), b(m);
    f(i, m) cin >> a[i] >> b[i], a[i]--, b[i]--;

    vector<vector<int>> g(n);
    f(i, m) {
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    vector<bool> visited(n, false);

    f(i, n) {
        if (visited[i]) continue;
        queue<ll> q;
        q.push(i);
        visited[i] = true;

        ll ncnt = 0;
        ll mcnt = 0;

        while (!q.empty()) {
            auto t = q.front(); q.pop();
            if (g[t].size() > 2) {
                cout<<"No";
                return;
            }
            ncnt++;
            mcnt += g[t].size();
            for (auto tt: g[t]) {
                if (!visited[tt]) {
                    q.push(tt);
                    visited[tt] = true;
                }
            }
        }

        if (mcnt != ncnt * 2 - 2) {
            cout<<"No";
            return;
        }
    }

    cout<<"Yes";
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}