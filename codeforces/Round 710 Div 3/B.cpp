#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
int n,k;
cin>>n>>k;
string s;
cin >>s;
int i;
int count=0;
for(i=0;i<n;i++){
    if(s[i]=='*'){
        s[i]='x';
        count++;
        break;
    }
}
int j;
for(j=n-1;j>i;j--){
    if(s[j]=='*'){
        s[j]='x';
        count++;
        break;
    }
}
if(j-i<=1)
{
    cout<<count<<endl;
    continue;
}
int y;
while(i<j-k){
    for(y=i+k;y>=i+1;y--){
        if(s[y]=='*'){
            s[y]='x';
            count++;
            i=y;
            break;
        }
    }
}
cout<<count<<endl;
}
}

//. x * . x * x
//  i     i   j