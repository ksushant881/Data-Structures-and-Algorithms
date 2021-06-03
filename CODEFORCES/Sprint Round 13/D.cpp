#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 

    int n;
    cin>>n;
if(n%2==0){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            cout<<2*i-1<<" ";
        }
        else{
            cout<<2*i<<" ";
        }
    }
    for(int i=1;i<=n;i++){
        if(i%2==1){
            cout<<2*i<<" ";
        }
        else{
            cout<<2*i-1<<" ";
        }
    }
    cout<<endl;
}
 
 

}