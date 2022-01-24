#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string s,t;
    cin>>s>>t;
    if((s.length() < t.length())){
        cout<<"NO"<<endl;
        return;
    }
    int k=t.length()-1;
    int n=s.length()-1;
    while(n>=0){
        if(s[n] == t[k]){
            n--;
            k--;
        }
        else{
            n-=2;
            
        }
        if(k<0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}