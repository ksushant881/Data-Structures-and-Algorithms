#include<bits/stdc++.h>
using namespace std;

string enc(string s){
    int n=s.length();
    int m=n-1;
    for(int i=0;i<n;i++){
        s[i]+=m;
        m--;
    }
    return s;
}

int main(){
    string st="abcde";
    cout<<enc(st);
}