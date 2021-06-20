#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        ll n;
        cin >> n;
        if((n&(n-1))==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}