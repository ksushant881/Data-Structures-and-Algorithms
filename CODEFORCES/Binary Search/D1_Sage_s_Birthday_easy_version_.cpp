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
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    cout<<(n-1)/2<<"\n";
    sort(arr.begin(),arr.end());
    vector<int>ans(n);
    int j=1,i;
    for(i=0;i<n && j<n;i++){
        ans[j]=arr[i];
        j+=2;
    }
    j=0;
    for(;i<n && j<n;i++){
        ans[j]=arr[i];
        j+=2;
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}

void sendEmail(vector<string>sample){
    vector<string>first;
    sort(sample.begin(),sample.end());
    string domain="";
    first.push_back(sample[0]);
    for(int i=1;i<sample.size();i++){
        for(int j=0;j<sample[i].size();j++){
            if(d){
                first.push_back(sample[i]);
            }
        }
    }
}