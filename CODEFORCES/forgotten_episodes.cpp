#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    unordered_set<ll>st;
    for(int i=0;i<n;i++)
        st.insert(i+1);
    for(int i=0;i<n;i++){
        ll ep;
        cin >> ep;
        st.erase(ep);
    }
    auto it=st.begin();
    cout<<*it;
    }
