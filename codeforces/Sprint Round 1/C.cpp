#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void solve(int a1,int a2,int a3){
    for(int i=1;i*i<=a1;i++){
        if(a1%i==0){
            int m=i;
            int n=a1/i;
            if(a2%m==0 && a3%n==0 && a2/m==a3/n){
                cout<<4*(m+n+(a2/m))<<"\n";
                return;
            }
            if(a2%n==0 && a3%m==0 && a2/n==a3/m){
                cout<<4*(m+n+(a2/n))<<"\n";
                return;
            }
        }
    }
}

int main(){
fastio
 
int l,b,h;
int a1,a2,a3;
cin>>a1>>a2>>a3;
int x=max({a1,a2,a3});

solve(a1,a2,a3);

//TLE on TC22
// for(int i=1;i<=x;i++){
//     for(int j=1;j<=x;j++){
//         for(int k=1;k<=x;k++){
//             if(i*j == a1 && j*k == a2 && i*k == a3){
//                 l=i;
//                 b=j;
//                 h=k;
//                 cout<<4*(l+b+h)<<"\n";
//                 return 0;
//             }
//         }
//     }
// }


}