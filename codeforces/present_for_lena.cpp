#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define endl "\n"
#define mod 1000000007

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int n ;
cin >> n;
for(int i=0;i<=n;i++){
    for(int j=n;j>i;j--){
        cout<<"  ";
    }
    for(int j=0;j<=i;j++){
        cout<<j<<" ";
    }
    for(int j=i-1;j>=0;j--){
        cout<<j<<" ";
    }
    cout << endl;
}

for(int i=n-1;i>=0;i--){
    for(int j=n;j>i;j--){
        cout<<"  ";
    }
    for(int j=0;j<=i;j++){
        cout<<j<<" ";
    }
    for(int j=i-1;j>=0;j--){
        cout<<j<<" ";
    }
    cout << endl;
}
}