#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void solve(){
    vector<vector<int>> v;
    f(i,3){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    int x1=v[0][0],y1=v[0][1],x2=v[1][0],y2=v[1][1],x3=v[2][0],y3=v[2][1];
    float ans=0.0;
    if(y2-y1==0 && y3<y2){
        ans+=abs(x2-x1);
        // cout<<ans<<endl;
    }
    if(y3-y2==0 && y1<y3){
        ans+=abs(x3-x2);
    }
    if(y1-y3==0 && y2<y1){
        ans+=abs(x3-x1);
    }
    cout << fixed << setprecision(9) <<ans<< endl;

}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}