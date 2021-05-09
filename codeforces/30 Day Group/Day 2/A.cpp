#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
string s;
cin>>s;
int n=s.length();
pair<int,int>p={0,0};
unordered_map<int,int>st;
st.insert(p);
for(int i=0;i<n;i++){
    if(s[i]=='L'){
        p.first-=1;
    }

    else if(s[i]=='R'){
        p.first+=1;
    }

    else if(s[i]=='U'){
        p.second+=1;
    }

    else if(s[i]=='D'){
        p.second-=1;
    }
    if(st.count(p.first)){
        auto it=st.find(p.first);
        if(it->second==p.second){
            cout<<"BUG";
            return 0;
        }
    }
    st.insert(p);
}
cout<<"OK";
}