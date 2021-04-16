#include<bits/stdc++.h>
using namespace std;
int maxPower(string s) {
        int n=s.length();
        int local=1;
        int global=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                local++;
                if(local>global)
                    global=local;
            }
            else{
                local=1;
            }
        }
        return global;
    }
int main(){
    string s="abbcccddddeeeeedcba";
    cout<<maxPower(s);
}