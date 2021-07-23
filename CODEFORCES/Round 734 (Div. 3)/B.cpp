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

string s;
cin>>s;
int two_occ=0;
vector<int>arr(26,0);
int n=s.size();
for(int i=0;i<n;i++){
    arr[s[i]-'a']++;
}
int red = 0,green=0;
int temp1=0;
for(int i=0;i<26;i++){
    if(arr[i]>=2){
        red++;
        green++;
    }
    else if(arr[i]==1){
        temp1++;
    }
    if(temp1==2){
        red++;
        green++;
        temp1=0;
    }
}
cout<<red<<endl;
}
}