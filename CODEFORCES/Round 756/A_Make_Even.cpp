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
    int n=s.length();
    if(n==1 && stoi(to_string(s[0]))%2!=0){
        cout<<-1<<endl;
        return;
    }
    if(stoi(to_string(s[n-1]))%2 == 0){
        cout<<0<<endl;
        return;
    }
    if(stoi(to_string(s[0]))%2 == 0){
        cout<<1<<endl;
        return;
    }
    bool flag=false;
    f(i,n){
        if(stoi(to_string(s[i]))%2==0){
            flag=true;
            cout<<2<<endl;
            return;
        }
    }
    if(!flag) cout<<-1<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}