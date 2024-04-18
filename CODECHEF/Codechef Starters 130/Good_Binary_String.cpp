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
    char prev = '0';
    vector<int>indexes;
    int count=0;
    for(int i=0;i<n;i+=2){
        if(s[i] == s[i+1]){
            continue;
        } else {
            if(s[i] == prev){
                indexes.push_back(i+1);
                prev = s[i+1];
            } else {
                indexes.push_back(i);
                prev = s[i];
            }
            count++;
        }
    }
    cout<<count<<endl;
    for(auto x:indexes){
        cout<<x+1<<" ";
    }
    cout<<endl;

}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}