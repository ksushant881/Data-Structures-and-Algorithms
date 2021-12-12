#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int x1,x2,p1,p2;
    cin>>x1>>p1>>x2>>p2;
    int dig1=p1,dig2=p2;
    int k1=x1;
    while(k1){
        dig1++;
        k1/=10;
    }
    int k2=x2;
    while(k2){
        dig2++;
        k2/=10;
    }
    if(dig1 > dig2){
        cout<<">"<<endl;
    }
    else if(dig2 > dig1){
        cout<<"<"<<endl;
    }
    else{
        int m1=dig1-p1,m2=dig2-p2;
        if(m1==m2){
            if(x1>x2){
                cout<<">"<<endl;
                return;
            }
            else if(x2>x1){
                cout<<"<"<<endl;
                return;
            }
            else{
                cout<<"="<<endl;
                return;
            }
        }
        ll y1,y2;
        if(m1>m2){
            int q=m1-m2;
            y1=x1;
            y2=x2*pow(10,q);
        }
        else if(m2>m1){
            int q=m2-m1;
            y2=x2;
            y1=x1*pow(10,q);
        }
        
        if(y1>y2){
            cout<<">"<<endl;
        }
        else if(y1<y2){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}