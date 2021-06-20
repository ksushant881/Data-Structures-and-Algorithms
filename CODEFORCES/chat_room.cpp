#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
string s;
cin >> s;
vector<bool>vis(5,false);
string f="hello";
int k=0;
int n=s.size();
for(int i=0;i<n;i++){
    if(s[i]==f[k]){
        k++;
    }

    if(k==f.length()){
        cout<<"YES"<<endl;
        return 0;
    }
}
cout<<"NO"<<endl;
return 0;
}

