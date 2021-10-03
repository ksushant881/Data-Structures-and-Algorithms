#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)
int k;
vector<vector<int>>dp(k,vector<int>(k,INT_MAX));

int solve(string &s,char letter,int start,int end,int ans,int n){
    // cout<<"start: "<<start<<" end:"<<end<<" "<<endl;
    if(start == end){ // n==1
        // cout<<ans<<endl;
        if(s[end] != letter) return 1+ans;
        else return ans;
    }
    int c1=n/2,c2=n/2;
    
    for(int i=start;i<start+n/2;i++){
        if(s[i] == letter) c1--;
    }
    for(int i=start+n/2;i<=end;i++){
        if(s[i]==letter) c2--;
    }
    return min(solve(s,letter+1,start+n/2,end,ans+c1,n/2),
    solve(s,letter+1,start,start+n/2-1,ans+c2,n/2));
}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

int n;
cin>>n;
k=n;
string s;
cin>>s;

cout<<solve(s,'a',0,n-1,0,n)<<endl;

}

}