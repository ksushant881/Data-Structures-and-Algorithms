//Problem link : https://codeforces.com/problemset/problem/1512/D
#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int con;
void sub(vector<ll>b,int n,vector<vector<ll>>&res,vector<ll>temp){
    if(n==0){
        if(temp.size() == con){
            res.push_back(temp);
        }
    }
    sub(b,n-1,res,temp);
    temp.push_back(b[n-1]);
    sub(b,n-1,res,temp);
}

int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
int n;
cin >> n ;
con = n;
vector<ll>b(n+2);
ll sum=0;
multiset<ll>st;
for(int i=0;i<n+2;i++){
    cin >> b[i];
    sum+=b[i];
    st.insert(b[i]);
}
ll x;
ll sumA;
// sum = 2*sumA + x
// x = sum - 2*sumA


}
}