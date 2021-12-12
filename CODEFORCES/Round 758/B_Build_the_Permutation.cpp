#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b > n-2 || abs(a-b)>1){
        cout<<-1<<endl;
        return;
    }
    int mx=n;
    int mn=2;
    if(a>b){
        bool flag=true;
        cout<<1<<" ";
        int cnt=1;
        for(int i=1;i<=a+b;i++){
            if(flag){
                cout<<mx<<" ";
                mx--;
            }
            else{
                cout<<mn<<" ";
                mn++;
            }
            flag=!flag;
            cnt++;
        }
        int k = n-cnt;
        while(k--){
            cout<<mx<<" ";
            mx--;
        }
    }
    else if(a<b){
        bool flag=true;
        cout<<mx<<" ";
        mx--;
        mn=1;
        int cnt=1;
        for(int i=1;i<=a+b;i++){
            if(flag){
                cout<<mn<<" ";
                mn++;
            }
            else{
                cout<<mx<<" ";
                mx--;
            }
            flag=!flag;
            cnt++;
        }
        int k = n-cnt;
        while(k--){
            cout<<mn<<" ";
            mn++;
        }
    }
    else{
        bool flag=true;
        cout<<1<<" ";
        int cnt=1;
        for(int i=1;i<=a+b;i++){
            if(flag){
                cout<<mx<<" ";
                mx--;
            }
            else{
                cout<<mn<<" ";
                mn++;
            }
            flag=!flag;
            cnt++;
        }
        int k = n-cnt;
        while(k--){
            cout<<mn<<" ";
            mn++;
        }
    }
    cout<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}