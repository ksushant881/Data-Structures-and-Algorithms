#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPal(string s,int start,int end){
    while(end>start){
        if(end == start) return true;
        if(s[end]!=s[start]) return false;
        start++;
        end--;
    }
    return true;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1 || (n==2 && (s=="10" || s=="01"))){
        cout<<"YES"<<endl;
        return;
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