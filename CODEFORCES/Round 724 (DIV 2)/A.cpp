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
 bool flag=true;
 unordered_set<int>st;
 for(int i=0;i<n;i++){
     int x;
     cin>>x;
    if(x<0){
         flag=false;
     }
     st.insert(x);
 }
unordered_set<int>st1=st;
if(!flag){
    cout<<"NO"<<endl;
}
if(flag){
    for(int i=0;i<40;i++){
        st=st1;
        int x=st.size();
        for(auto x:st){
            for(auto y:st){
                if(x!=y){
                    int k=abs(x-y);
                    st1.insert(k);
                }
            }
        }
        if(st1.size()==x){
            break;
        }
        x=st1.size();
        if(x > 300){
            cout<<"NO"<<endl;
            break;
        }
    }

    if(st1.size() > 300) continue;
    cout<<"YES"<<endl;
    cout<<st1.size()<<endl;
    for(auto x:st1){
        cout<<x<<" ";
    }
    cout<<endl;
}
}
}