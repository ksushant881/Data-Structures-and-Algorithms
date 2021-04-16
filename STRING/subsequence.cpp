#include<iostream>
#include<vector>
using namespace std;

void sub(string s1,string s2,vector<string>v){

}

bool sub2(string s1,string s2){
    int n1=s1.length();
    int n2=s2.length();
    int i=0;
    int j=0;
   for(i=0;i<n1 && j<n2;i++){
       if(s1[i]==s2[j])
            j++;
   }
    return (j==n2);
}

bool sub3(string s1,string s2,int n,int m){
     if(m==0)
        return true;
    if(n==0)
        return false;
    if(s1[n-1]==s2[m-1])
        return sub3(s1,s2,n-1,m-1);
    else    
        return sub3(s1,s2,n-1,m);
}

int main(){
    string s1="ABCD";
    string s2="AA";
    cout<<sub3(s1,s2,4,2);
}