#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int n,string s,int x,int y);

int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

int n;
cin>>n;
string str="(";
// solve(n,str,1,0);

}

}

void solve(int n,string s,int count1,int count2){
    if(count2 == n && count1 == n){
        cout<<s<<endl;
        return;
    }
    if(s.length() > 2*n) return;
    
    if(count1 != n){
        s.push_back('(');
        solve(n,s,count1+1,count2);
    }

    if(count1 > count2){ 
        s.pop_back();
        s.push_back(')');
        solve(n,s,count1,count2+1);
    }
}