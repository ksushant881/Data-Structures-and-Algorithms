#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int w=0,b=0;
    string str;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            b++;
            while(s[i]=='B') i++;
            i--;
        }
        else {
            w++;
            while(s[i]=='W') i++;
            i--;
        }
    }
    cout<<min(w,b)<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}