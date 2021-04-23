#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


bool count(int i,int j,string &s){
    int count0 = 0;
    int count1 = 0;
    for(int k=i;k<=j;k++){
        if(s[k]=='1')
            count1++;
        if(s[k]=='0')
            count0++;
    }
    return (count1==count0);
}

bool isCont(string &s,int i,int j){
    int change = 0;
    for(int k=i+1;k<=j;k++){
        if(s[k]!=s[k-1]){
            change++;
            if(change == 2){
                return false;
            }
        }
    }
    return true;
}

int main(){
fastio

string s="00110011";
int n=s.length();
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(isCont(s,i,j) && count(i,j,s)){
            cout<<isCont(s,i,j)<<" "<<count(i,j,s)<<" "<<s.substr(i,j)<<endl;
        }
            
    }
}
//cout<<isCont("1001",0,3)<<endl;
// int i=0;
// int j=2;
// cout << (count0(i,j,s) == count1(i,j,s));
 
}
