#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int count1(string s){
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
            c++;
    }
    return c;
}

int count0(string s){
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0')
            c++;
    }
    return c;
}

bool isPal(string s,int i,int n){
    if(i>=n)
        return true;
    if(s[i]==s[n])
        return isPal(s,i+1,n-1);
    return false;
}

int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
    int a,b;
    cin >> a >> b;
    int A=a;
    int B=b;
    
    string s;
    cin >> s;
    int n=s.length();
    bool flag=false;
    
    for(int i=0;i<n;i++){
        if((s[i]=='1' && s[n-i-1]=='0') || (s[i]=='0' && s[n-i-1]=='1')){
            flag=true;
            break;
        }

        if(s[i]=='1' && s[n-i-1]=='?'){
            s[n-i-1]='1';
        }
        else if(s[i] == '0' && s[n-i-1]=='?'){
            s[n-1-i]='0';
        }
    }
    

    if(flag)
    {
        cout<<"-1"<<endl;
        continue;
    }
    a-=count0(s);
    b-=count1(s);
    for(int i=0;i<=n/2;i++){
        if(s[i] == '?'){
            if(a>1){
                s[i]='0';
                s[n-i-1]='0';
                a-=2;
            }
            else if(b>1){
                s[i]='1';
                s[n-i-1]='1';
                b-=2;
            }
        }
    }
    
    if(a==1 && b==1){
        cout<<"-1"<<endl;
        continue;
    }
    else if(a==1 && b==0){
        s[n/2]='0';
        //cout<<s<<endl;
    }
    else if(a==0 && b==1){
        s[n/2]='1';
        //cout<<s<<endl;
    }
    
    if(count0(s)==A && count1(s)==B){
        cout<<s<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
 
}
}