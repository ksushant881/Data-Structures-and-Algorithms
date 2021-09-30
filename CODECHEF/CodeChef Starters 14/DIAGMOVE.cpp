
#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(int x,int y){

}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

int x,y;
cin>>x>>y;
int sum=x+y;
if(sum<=0) sum*=-1;
if((x+y)%2==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}

}