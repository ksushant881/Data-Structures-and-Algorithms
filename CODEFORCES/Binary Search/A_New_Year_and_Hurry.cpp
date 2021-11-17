#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,k;
    cin>>n>>k;
    //total=4*60 240
    int time=240-k;
    int curr=0;
    int prob=1;
    while(1){
        if(prob > n){
            cout<<n;
            return;
        }
        int currProb = 5*prob;
        if(curr + currProb > time){
            cout<<prob-1;
            return;
        }
        else{
            curr = curr + currProb;
            prob++;
        }
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