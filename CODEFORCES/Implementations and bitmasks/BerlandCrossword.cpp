#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

int countSetBits(int n){
    int c=0;
    // cout<<n<<" ";
    while(n){
        n=n&(n-1);
        c++;
    }
    // cout<<c<<endl;
    return c;
}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

int n,u,r,d,l;
bool flag=false;
cin>>n>>u>>r>>d>>l;
for(int upperMasks=0;upperMasks<(1<<n);upperMasks++){
    for(int rightMasks=0;rightMasks<(1<<n);rightMasks++){
        for(int downMasks=0;downMasks<(1<<n);downMasks++){
            for(int leftMasks=0;leftMasks<(1<<n);leftMasks++){
                if(countSetBits(upperMasks) == u &&
                    countSetBits(rightMasks) == r &&
                    countSetBits(downMasks) == d &&
                    countSetBits(leftMasks) == l){
                        flag=true;
                        cout<<upperMasks<<" "<<rightMasks<<" "<<downMasks<<" "<<leftMasks<<endl;
                        break;
                    }
}
if(flag) break;
}
if(flag) break;
}
if(flag) break;

}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}

}