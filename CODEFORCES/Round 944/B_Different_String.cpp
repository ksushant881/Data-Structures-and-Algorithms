#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    string s;
    cin>>s;
    set<char>st;
    f(i,s.length()){
        st.insert(s[i]);
    }
    if(st.size()==1){
        cout<<"NO"<<endl;
    }else {
        cout<<"YES"<<endl<<s[s.length()-1]+s.substr(0,s.length()-1)<<endl;
    }
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}