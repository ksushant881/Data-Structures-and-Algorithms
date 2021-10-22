#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

//0xAAAAAAAA means 10101010101010101010101010101010 in binary.
//we get all even bits of n.
const unsigned int ev=0xAAAAAAAA;
//0x55555555 means 01010101010101010101010101010101 in binary.
//we get all odd bits of n.
const unsigned int od=0x55555555;
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    f(i,n) cin>>arr[i];
        
    vector<ll> temp1(n, n);
    stack<ll> st;

    for (ll i = n - 1; i >= 0; i--){
        while (!st.empty() and arr[st.top()] < arr[i])
            st.pop();

        if (!st.empty())
            temp1[i] = st.top();
        st.push(i);
    }

    while (st.size() > 0){
        st.pop();
    }

    vector<ll> temp2(n, -1);
    for (ll i = 0; i < n; i++){
        while (!st.empty() and arr[st.top()] <= arr[i])
            st.pop();
        if (!st.empty())
            temp2[i] = st.top();

        st.push(i);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++){
        ll left = i - temp2[i];
        ll right = temp1[i] - i;

        ll tri = ((right) * (right + 1)) >> 1;
        ll sq = (right) * (n - temp1[i]);

        ll contribution = (((tri + sq) % mod) * (arr[i])) % mod;
        contribution = (left * contribution) % mod;
        ans = (ans + contribution) % mod;
    }

    cout << ans << endl;
}



int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}