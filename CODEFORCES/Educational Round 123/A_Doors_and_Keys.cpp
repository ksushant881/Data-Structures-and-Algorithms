#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void solve(){
    string s;
    cin>>s;
    bool r,g,b;
    r=g=b=0;
    f(i,s.length()){
        if(s[i]=='r')r=1;
        else if(s[i]=='b')b=1;
        else if(s[i]=='g')g=1;
        else if(s[i]=='R'){
            if(r)continue;
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(s[i]=='B'){
            if(b)continue;
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(s[i]=='G'){
            if(g)continue;
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;

}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}