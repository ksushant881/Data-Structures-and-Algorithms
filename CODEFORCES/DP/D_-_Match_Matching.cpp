#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n,m;
vector<char>arr;
int dataa[]={2,5,5,4,5,6,3,7,6};
set<string>st;
int max_len;
void dp(int mat,string s){
    if(mat < 0) return;
    if(mat==0) {
        if(s.length()>max_len){
            st.clear();
            st.insert(s);
            max_len=s.length();
        }
        else if(s.length()==max_len) st.insert(s);
        // cout<<s<<endl;
        return;
    }
    
    for(int i=0;i<arr.size();i++){
        s.pb(arr[i]);
        dp(mat-dataa[arr[i]-'0'-1],s);
        s.pop_back();
    }
}

void solve(){
    cin>>n>>m;
    max_len=0;
    f(i,m){
        int x;
        cin>>x;
        arr.pb('0'+x);
    }
    string s="";
    dp(n,s);
    // for(auto x:st) cout<<x<<endl;
    auto it=st.end();
    it--;
    cout<<*it;

}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}