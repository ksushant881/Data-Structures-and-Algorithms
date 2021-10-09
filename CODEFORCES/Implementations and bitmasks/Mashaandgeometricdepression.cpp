#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/789/B
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){
ll b,q,l,m;
cin>>b>>q>>l>>m;
set<int>st;
f(i,m) {
    int x;
    cin>>x;
    st.insert(x);
}
if(abs(b) > l){
    cout<<0;
    return 0;
}
if( b==0){
    if(st.count(0)){
        cout<<0;return 0;
    }
    else {
        cout<<"inf";
        return 0;
    }
}
if(q==0){
    if(st.count(0)) if(b!=0 && !st.count(b) && abs(b)<=l) cout<<1; 
                    else cout<<0;
    else cout<<"inf";
    return 0;
}
if(abs(q)==1){
    if(st.count(b) && st.count(b*q)) cout<<0;
    else cout<<"inf";
    return 0;
}
int count=0;
vector<int>v;
    while (abs(b) <= l){
        v.push_back(b);
        b = b * q;
    }
    for (auto it : v){
        if (st.count(it) > 0)count++;
    }
    cout << v.size() - count << '\n';
}

}