#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPal(string s,int n)
{
    int end=n-1,strt=0;
    while(end>strt){
        if(end==strt) return 1;
        if(s[end]!=s[strt]) return false;
        else{
            end--;
            strt++;
        }
    }
    return 1;
}
void solve(){
    string s;
    cin>>s;
    int n=s.length();
    if(isPal(s,n)){
        cout<<"Yes";
        return;
    }
     int af = 0;
    int ab = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'a'){
            af++;
        }else{
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i] == 'a'){
            ab++;
        }else{
            break;
        }
    }

    if(ab > af){
        string add(ab-af, 'a');
        s.insert(0,add);
        if(isPal(s,s.length())){
            cout << "Yes\n";
            return ;
        }
    }
    cout << "No\n";

}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}