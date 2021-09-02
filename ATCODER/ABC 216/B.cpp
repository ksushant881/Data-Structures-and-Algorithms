#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
fastio

int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

int n;
cin>>n;
set<string>st;
bool flag=false;
for(int i=0;i<n;i++){
    string fam;
    cin>>fam;
    string given;
    cin>>given;
    string s = fam + " " + given;
    if(st.count(s)){
        flag=true;
    }
    else{
        st.insert(s);
    }

}
if(flag){
    cout<<"Yes";
}
else{
    cout<<"No";
}

}

}