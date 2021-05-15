#include<bits/stdc++.h>
using namespace std;

bool checkInteger(string s,int n){
    for(int i=0;i<n;i++){
        if(s[i]=='.'||s[i]=='e'||s[i]=='E')
            return false;
    }
}

bool checkDecimal(string s,int n){
    for(int i=0;i<n;i++){

    }
}

bool isNumber(string s) {
    int n=s.length();
    pair<bool,int> occ1={false,-1};
    pair<bool,int> occ2={false,-1};
    for(int i=0;i<n;i++){
        if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'||s[i]=='.'||s[i]=='e'||s[i]=='E')
            continue;
        if(s[i]=='e') {occ1={true,i};}
        if(s[i]=='E') {occ2={true,i};}
        else return false;
    }

    if(occ1 && occ2) return false;
    if(occ)
}

int main(){



}