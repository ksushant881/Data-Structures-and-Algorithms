#include<bits/stdc++.h>
using namespace std;

//using extra space
void divisors(int n){
    set<int>st;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            st.insert(i);
            st.insert(n/i);    
        }
    }
    for(auto x:st){
        cout<<x<<" ";
    }
}

void divisors2(int n){
    vector<int>v;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i*i!=n) v.push_back(n/i);
        }
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
}



int main(){
    divisors2(25);
}