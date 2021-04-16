#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int n,int m){
    if(n<0 || m<0)
        return 0;
    if(s1[n] == s2[m])
        return 1+lcs(s1,s2,n-1,m-1);
    else 
        return max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
}

set<string>string_set;
int lcs_string(string s1,string s2,int n,int m,string s=""){
    if(n<0 || m<0){
        string_set.insert(s);
        return 0;
    } 
    if(s1[n] == s2[m]){
        s=s+s1[n];
        return 1+lcs_string(s1,s2,n-1,m-1,s);
    }    
    else 
        return max(lcs_string(s1,s2,n-1,m,s),lcs_string(s1,s2,n,m-1,s));

}

int main(){
    string s1="ABCDGH";
    string s2="AEDFHR";
    int n=s1.length();
    int m=s2.length();
    string res="";
    //cout<< lcs(s1,s2,n-1,m-1)<<endl;
    lcs_string(s1,s2,n-1,m-1,res);
    for(auto x:string_set){
        if(x.length() == lcs(s1,s2,n-1,m-1)){
            reverse(x.begin(),x.end());
            cout<<x<<endl;
        }
            
    }
}