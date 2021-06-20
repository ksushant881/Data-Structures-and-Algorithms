#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
fastio
 
int n;
cin>>n;
string s;
cin>>s;

int prev=-1;
set<int>diff;
for(int i=0;i<n;i++){
    if(s[i]=='1'){
        if(prev==-1){
            prev=i;
            continue;
        }

        else{
            diff.insert(i-prev);
            if(diff.size()>1){
                cout<<"NO";
                return 0;
            }
            prev=i;
    }
    }
    
}
cout<<"YES";
}