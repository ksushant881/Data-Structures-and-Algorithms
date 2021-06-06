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
int n;
cin>>n;
string s;
cin>>s;

int d=0;
int k=0;
vector<vector<int>>v;
for(int i=0;i<n;i++){
    vector<int>temp;
    if(s[i]=='D') d++;
    else k++;
    int t = __gcd(d,k);
    temp={d,k,t};
    v.push_back(temp);
    
}
cout<<1<<" ";
for(int i=1;i<n;i++){
    int countd=v[i][0]/v[i][2];
    int countk=v[i][1]/v[i][2];
    int len = countd + countk;
    int a=0,b=0;
    bool flag=false;
    for(int j=1;j<(i+1)/len;j++){
        if(v[(len-1)*j][0]-a != countd && v[(len-1)*j][1]-b != countk){
            flag=true;
            break;
        }
        else{
            a=v[(len-1)*j][0];
            b=v[(len-1)*j][1];
        }
    }
    if(!flag) cout<<v[i][2]<<" ";
    else cout<<1<<" ";
}
cout<<endl;


}
}