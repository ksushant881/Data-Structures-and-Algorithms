#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int main(){
fastio
int n;
cin>>n;
vector<int>arr(n);
f(i,n)cin>>arr[i];
vector<int>temp=arr;
int alice=0,bob=0,a=0,b=n-1;
vector<char>vis(n,false);
while(b >= a){
    if(a == b){
        if(arr[a]==temp[a]) alice++;
        else {
            if(vis[a]=='a') alice++;
            else bob++;
        }
        break;
    }
    arr[b]--;
    vis[b]='b';
    arr[a]--;
    vis[a]='a';
    if(arr[b]==0) {
        bob++; 
        b--;
    }
    if(arr[a]==0){
        alice++;
        a++;
    }
}
cout<<alice<<" "<<bob<<endl;

}