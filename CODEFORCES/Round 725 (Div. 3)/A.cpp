#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >>v[i];
    int minn=INT_MAX;
    int maxx=INT_MIN;
    int a,b;
    for(int i=0;i<n;i++){
        if(v[i] > maxx){ 
            a=i;
            maxx=v[i];
        }
        if(v[i] < minn){
            b=i;
            minn=v[i];
        }
    }
    //cout<<a<<" "<<b<<" hre"<<" ";
    int res1=0;
    if(a>b){
        res1+=(b+1);
        res1+=(n-a);
        //cout<<res1<<" ";
        cout<<min({res1,a+1,n-b})<<endl;
    }
    else{
        res1+=a+1;
        res1+=(n-b);
        cout<<min({res1,b+1,n-a})<<endl;
    }
    
}
} 