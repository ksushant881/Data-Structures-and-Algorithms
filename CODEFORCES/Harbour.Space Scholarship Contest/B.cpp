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

string s,t;
cin>>s>>t;
int n1=s.length();
int n2=t.length();
int len = n1-1;
int last;
bool flag = false;
//if(n2>=n1) len = n1-1;
for(int i=0;i<=len;i++){
    int j;
    string res="";
    for(j=0;j<n2;j++){
        if(i+j >= n1) break;
        if(s[i+j] != t[j]){
            break;
        }
        else{
            res+=s[i+j];
            //cout<<res<<endl;
        }
    }
    int last = i+j-2;
    //if(i+j==n1) last = n1-2;
    for(int k=last;k>=0 && j<n2;k--){
        if(s[k]!=t[j]){
            break;
        }
        else{
            j++;
            res+=s[k];
        }
    }
    if(res == t){
        cout<<"YES"<<endl;
        flag = true;
        break;
    }
}
//cout<<res<<endl;
if(!flag){
    cout<<"NO"<<endl;
}

}
}