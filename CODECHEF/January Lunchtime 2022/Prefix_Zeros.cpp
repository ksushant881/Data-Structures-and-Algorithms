#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool solve2(int mid, string &s, int n, int k){
    int curr = 0;
    for (int i = mid - 1; i >= 0; i--){
        if (k < 0){
            return false;
        }
        int val = (int)(s[i] - '0');
        val += curr;
        val %= 10;
        k -= (10 - val) % 10;
        curr += (10 - val) % 10;
        if (k < 0){
            return false;
        }
    }
    return (k >= 0);
}

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int start = 1, end = n, ans = 0;
    while (start <= end){
        int mid = start - (start - end) / 2;
        if (solve2(mid,s,n,k)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout << ans << endl;
}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}
