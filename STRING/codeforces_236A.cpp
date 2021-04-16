#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="wjmzbmr";
    //cin>>s;
    unordered_set<char>st;
    int n=s.length();
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }
    if(st.size()%2!=0)
        cout<<"IGNORE HIM !";
    else
    cout<<"CHAT WITH HER !";
}