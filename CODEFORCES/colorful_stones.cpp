#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    string ins;
    cin >> s >> ins;
    int n=s.length();
    int t=ins.length();
    int inx=0;
    for(int i=0;i<t;i++){
        if(ins[i] == s[inx]){
            inx++;
        }
    }
    cout<<inx+1;
}