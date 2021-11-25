#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if((n-b-1 > n/2-1 && a > b) || (n-b > n/2-1 && a < b) || (a-1-1 > n/2-1 && b < a) || (a-1 > n/2-1 && b > a)){
        cout<<-1<<endl;
        return;
    }
    vector<bool>use(n+1,false);
    cout<<a<<" ";
    use[a]=true;
    use[b]=true;
    int cnt=1;
    for(int i=b+1;i<=n;i++){
        if(!use[i]){
            use[i]=true;
            cout<<i<<" ";
            cnt++;
        }
    }
    if(cnt!=n/2){
        for(int i=a+1;i<=n;i++){
            if(i==b) continue;
            if(!use[i]){
                cout<<i<<" ";
                cnt++;
                use[i]=true;
                if(cnt==n/2) break;
            }
        }
    }

    cout<<b<<" ";
    for(int i=1;i<=n;i++){
        if(!use[i]) cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
fastio
int tc=1;
cin>>tc;
f(casess,tc){
   solve();
}
}