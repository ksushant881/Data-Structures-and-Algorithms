#include<bits/stdc++.h>
using namespace std;

bool isPal(string s){
    int high=s.length()-1;
    int low=0;
    while(high>low){
        if(s[high]!=s[low])
            return false;
        high--;
        low++;
    }
    return true;
}

bool isPal2(string s,int i,int j){
    if(i>j)
        return true;
    if(s[i]==s[j])
        return isPal2(s,i+1,j-1);
    else
        return false;   
}

int pal(string s,int i,int j){
    if(isPal2(s,i,j))
        return 0;
    int res=99999;   
    for(int k=i;i<j;k++){
            res=min(res,1+pal(s,i,k)+pal(s,k+1,j));
            //cout<<res<<" ";
    } 
    return res; 
}

int main(){
    string s="ggee";
    int n=s.length()-1;
    cout<<isPal2(s,0,n);
    cout<<endl;
    cout << pal(s,0,n);
}