#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int count1(string s){
    int c=1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
            c++;
    }
    return c;
}

int count0(string s){
    int c=1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0')
            c++;
    }
    return c;
}

bool isPal(string s,int i,int n){
    if(s[i]==s[n-1])
        return true;
    else
        return false;
    return isPal(s,i+1,n-1);
}

int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
    int a,b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n=s.length();
    for(int i=0;i<n/2;i++){
        if(s[i]=='0')
            a--;
        if(s[i]=='1')
            b--;
        if(s[i]=='1' && s[n-i-1]=='?'){
            s[n-i-1]='1';
            b--;
    }
        if(s[i] = '0' && s[n-i-1]=='?'){
            s[n-1-i]='0';
            a--;
        }
    }

    for(int i=0;i<n/2;i++){
        if(s[i] == '?'){
            if(a!=0){
                s[i]='0';
                s[n-i-1]='0';
                a-=2;
            }
            else if(b!=0){
                s[i]='1';
                s[n-i-1]='1';
                b-=2;
            }
        }
    }
    cout<<s<<endl;

 
 
}
}