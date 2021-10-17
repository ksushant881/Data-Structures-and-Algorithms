#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){
int n,m;
cin>>n>>m;
vector<vector<int>>arr;
set<int>st;
f(i,m){
    int x,y,z;
    cin>>x>>y>>z;
    st.insert(y);
}
int root;
for(int i=1;i<=n;i++){
    if(st.find(i) == st.end()){
        root=i;
        break;
    }
}
for(int i=1;i<=n;i++){
    if(i!=root){
        cout<<root<<" "<<i<<endl;
    }
}



}

}