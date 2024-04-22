#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    long n,k;
    cin>>n>>k;
    vector<long>ans;
    int sum=0;
    int m = 1;
    while(m < k){
        m = (m<<1);
    }
    if(n==1){
        cout<<k<<endl;
        return;
    }
    
    while(m>0){
        if(m-1 <=k){
            break;
		} else {
			m=m/2;
		}
    }
    cout<<m-1<<" "<<k-m+1<<" ";
    n-=2;
    while(n--){
        cout<<"0"<<" ";
    }
    cout<<endl;

}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}