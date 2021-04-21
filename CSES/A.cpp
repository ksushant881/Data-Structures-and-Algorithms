#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio

int tc=1;
cin >> tc;
for(int m=0;m<tc;m++){
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int start=0,end=n-1;
    while(k){
        if(v[start]-1>=0){
            v[start]-=1;
            v[end]+=1;
            k--;
        }
        else{
            start++;
        }
        if(start==end){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}


}