#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int main(){
fastio

ll tc = 1;
cin >> tc;
for(ll cassess = 1; cassess <= tc; cassess++){

int n;
cin>>n;
vector<string>v(n);
vector<vector<int>>arr(n,vector<int>(26));
for(int i=0;i<n;i++){
    cin>>v[i];
    for(int j=0;j<v[i].length();j++){
        arr[i][v[i][j]-'a']++;
    }
}



}
}