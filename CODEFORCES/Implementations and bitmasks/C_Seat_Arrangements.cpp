#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=1;i<=n;i++)
#define N 2010
void solve(){

}
int n,m,k;
int sumR[N][N],sumC[N][N];
int mat[N][N];

int main(){
fastio
cin>>n>>m>>k;
vector<vector<char>>g(n+1,vector<char>(m+1));
f(i,n) {
    f(j,m){
        cin>>g[i][j];
        if(g[i][j] == '*') mat[i][j] = 0;
        else mat[i][j] = 1;
    }
}

for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        sumR[i][j] = sumR[i][j-1] + mat[i][j];
    }
}
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        sumC[i][j] = sumC[i][j-1] + mat[j][i];
    }
}
int ans=0;
for(int i=1;i<=n;i++){
    for(int j=k;j<=m;j++){
        if(sumR[i][j] - sumR[i][j-k] == k) ans++;
    }
}
for(int i=1;i<=m;i++){
    for(int j=k;j<=n;j++){
        if(sumC[i][j] - sumC[i][j-k] == k) ans++;
    }
}
if(k==1) ans=ans/2;
cout<<ans<<endl;
return 0;






}