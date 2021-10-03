#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

bool check(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i] == '(') st.push('(');
        else{
            if(st.empty()) return false;
            else{
                st.pop();
            }
        }
    }
    if(st.empty()) return true;
    else return false;
}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

string s;
cin>>s;
int n=s.length();
string temp="";
vector<char>store={'A','B','C'};
bool flag=false;
for(int masks=0;masks<(1<<3);masks++){
    string temp="";
    char a,b,c;
    
    if(masks & (1<<0)) c='(';
    else c=')';
    if(masks & (1<<1)) b='(';
    else b=')';
    if(masks & (1<<2)) a='(';
    else a=')';

    for(int i=0;i<n;i++){
        if(s[i]=='A') temp+=a;
        if(s[i]=='B') temp+=b;
        if(s[i]=='C') temp+=c;
    }
    if(check(temp)) {
        // cout<<temp<<" this one"<<a<<b<<c<<endl;
        flag=true;
        break;
    }
}
if(flag){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}

}