#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

/*
Grouping by modulo operator
Operations by solve() algo:
Flip only if we have preceding 1 without being in any pair
Flip if last elemnt is 1
Flipping only the 0 on the right of any 1 gives optimal answer beacause
this flip will help in resolving next 1 as well

*/

int solve(vector<int>&arr){
    int n=arr.size();
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            if(i-1>=0 and arr[i-1]==1){
                //
            }
            else if(i+1 < n and arr[i+1]==1) {
                //
            }
            else if(i == n-1){
                cnt++;
                arr[i]=0;
            }
            else {
                arr[i+1]=1;
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

int n,k;
cin>>n>>k;
string s;
cin>>s;
int steps=0;
vector<int>arr[k];
f(i,n){
    arr[i%k].push_back(s[i]-'0');
}
int ans=0;
f(i,k){
    ans+=solve(arr[i]);
}
cout<<ans<<endl;

}

}