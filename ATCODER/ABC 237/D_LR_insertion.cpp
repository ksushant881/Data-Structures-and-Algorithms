#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <list>

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
     list<int> l = {0};
    auto it = l.begin();

    for(int i=1;i<=s.size();i++){
        if(s[i-1] == 'L'){
            auto temp = l.insert(it, i);
            it = temp;
        }else{
            advance(it, 1);
            auto temp = l.insert(it, i);
            it = temp;
        }

    }

    for (auto i = l.begin();
         i != l.end();
         i++)
        cout << *i << " ";

    cout << "\n";

}

int32_t main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}