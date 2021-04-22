#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc;
cin >> tc;
for(int i=0;i<tc;i++){
    int a;
    cin >> a;
    set<int>st;
    for(int i=3;i<50;i++){
        st.insert(((i-2)*180)/i);
    }
    if(st.count(a))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}