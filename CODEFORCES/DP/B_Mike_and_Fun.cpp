#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,m,q;
bool arr[505][505];
int cache[505][505];
int s;
int row;

void pre(){
    int cnt=0;
    s=0;
    f(i,n){
        int curr=0;
        f(j,m){
            if(arr[i][j]){
                cnt++;
                cache[i][j] = cnt;
                curr=max(curr,cnt);
            }
            else cnt = 0;
        }
        if(curr > s){
            s=curr;
            row=i;
        }
    }
}

void test(int x,int y){
    int cnt=0;
    if(row==x){
        int curr = 0;
        f(j,m){
            if(arr[row][j]){
                cnt++;
                curr = max(curr,cnt);
            }
            else cnt=0;
        }
        s=curr;
        cout<<curr<<endl;
    }
    else{
        f(j,m){
            if(arr[x][j]){
                cnt++;
                cache[x][j] = cnt;
                s = max(s,cnt);
            }
            else 
                cnt=0;
        }
    }
    
}

void solve(){
    cin>>n>>m>>q;
    f(i,n) f(j,m) cin>>arr[i][j];
    pre();
    while(q--){
        int x,y;
        cin>>x>>y;
        arr[x-1][y-1]=!arr[x-1][y-1];
        test(x-1,y-1);
        cout<<s<<endl;
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