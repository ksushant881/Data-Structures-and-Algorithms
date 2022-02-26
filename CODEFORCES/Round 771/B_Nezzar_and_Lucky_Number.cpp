#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int q,d;
    cin>>q>>d;
    vector<int>arr(q);
    f(i,q) cin>>arr[i];
    for(int i=0;i<q;i++){
        int k=arr[i]/d;
        int m=arr[i]%d;
        bool flag=false;
        while(k!=0){
            m+=d;
            k--;
            int temp=m;
            while(temp!=0){
                if(temp%10==d){
                    cout<<"YES\n";
                    flag=true;
                    break;
                }
                temp/=10;
            }
            if(flag) break;
        }
        if(!flag)cout<<"NO\n";
    }    

}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}