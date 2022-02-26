#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
bool check(string s){
    int n=s.length();
    if(n==1) return 1;
    int i=0,j=n-1;
    while(j>i){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}

void solve(){
    string s;


    cin >> s;
    string str = s;



    reverse(all(s));
    int n = s.length(), m = str.length();

    int ans = 0;
    for (int i = m - 1, j = m - 1; i >= 0; ){
        while (i >= 0 && s[i] != str[j]){
            i--;
            ans++;
        }
        if (i >= 0){
            i--;
            j--;
        }
    }
    cout << ans<<"\n";

}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}

