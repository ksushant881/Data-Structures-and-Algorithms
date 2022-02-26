#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n,m;
int arr[30][30];
int dp[30][30][30][30];
bool util(ll a, ll b, ll c, ll d){
	for(int i=a;i<=c;i++){
		for(int j=b;j<=d;j++){
			if(arr[i][j]){
				return false;
			}
		}
	}
	return true;
}

void solve(){
    cin>>n>>m;
    int ans=0;
    f(i,n){
        string s;
        cin>>s;
        f(j,m) {
            arr[i][j]=(s[j]=='1');
        }
    }
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            for(int c=a;c<n;c++){
                for(int d=b;d<m;d++){
                    if(dp[a][b][c-1][d] && dp[a][b][c][d-1]){
                        dp[a][b][c][d]=1;
                        ans=max(ans,c-a+1+d-b+1);
                    }
                    else if(dp[a][b][c][d]==-1)
                        if (util(a,b,c,d)){
                            dp[a][b][c][d]=1;
                            ans=max(ans,c-a+1+d-b+1);
                        }
                        else dp[a][b][c][d]=0;
                }
            }
        }
    }
    cout<<ans*2;
}

int main(){
fastio
int tc=1;
memset(dp,-1,sizeof(dp));
// cin >> tc;
f(casess,tc){
   solve();
}
}