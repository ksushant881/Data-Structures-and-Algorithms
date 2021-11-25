#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solution(int a, int b, int c){
    for (int i = 0; i * a <= c; i++) {
        if ((c - (i * a)) % b == 0) {
            cout << i <<" "<< (c - (i * a)) / b<<endl;
            return;
        }
    }
    cout << -1<<" "<<-1<<endl;
}

void solve(){
    int x,y;
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<0<<" "<<0<<endl;
        return;
    }
    if(x==0 && y!=0){
        if(y%2!=0){
            cout<<-1<<" "<<-1<<endl;
            return;
        }
        else{
            cout<<0<<" "<<y/2<<endl;
            return;
        }
    }
    if(x!=0 && y==0){
        if(x%2!=0){
            cout<<-1<<" "<<-1<<endl;
            return;
        }
        else{
            cout<<x/2<<" "<<0<<endl;
            return;
        }
    }
    int c=(y*y+x*x);
    if(c%2!=0){
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    c=c/2;
    solution(x,y,c);

}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}