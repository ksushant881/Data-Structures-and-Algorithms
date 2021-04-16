#include<bits/stdc++.h>
using namespace std;

void fillSet(string s,unordered_set<char>&st){
        for(int i=0;i<s.length();i++){
            st.insert(s[i]);
        }
    }

int main(){
    unordered_set<char>one;
    unordered_set<char>two;
    string s1="hello";
    string s2="lloeh";
    fillSet(s1,one);
    fillSet(s2,two);
    cout<<(one == two);
}