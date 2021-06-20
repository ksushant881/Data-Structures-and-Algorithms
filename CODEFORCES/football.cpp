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
 
string s;
cin >> s;
int n=s.length();
int local=1;
if(n<7){
    cout<<"NO";
    return 0;
}
for(int i=1;i<n;i++){
    if(s[i-1] == s[i]){
        local++;
    }
    else{
        local=1;
    }
    if(local == 7){
        cout<<"YES";
        return 0;
    }
}
cout<<"NO";
}