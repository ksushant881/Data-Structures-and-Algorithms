#include<bits/stdc++.h>
using namespace std;

bool pal(string s,int st,int en){
    if(st>=en)
        return true;
    if(s[st]==s[en]){
        return pal(s,st+1,en-1);
    }
    return false;
}

int main(){
    cout<<pal("nitinq",0,5);
}