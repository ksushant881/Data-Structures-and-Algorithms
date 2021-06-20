#include<bits/stdc++.h>
using namespace std;

class Solution1 {
public:

    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.length();
        int n2=s2.length();
        int n3=s3.length();
        int j=0,k=0;
        int i=0;
        while(i < n3){
            if(s3[i]==s1[j]){
                
                j++;
                i++;
                
            }
            else if(s3[i]==s2[k]){
                cout<<s3[i];
                k++;
                i++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

class Solution2 {
public:
    bool rec(string s1,int n1,string s2,int n2,string s3,int n3,int i,int j,int k){
        if(i==n1 && j==n2){
            return (k==n3)?true:false;
        }
        else if(i==n1){
            return s3.substr(k,n3-k) == s2.substr(j,n2-j);
        }
        else if(j==n2){
            return s3.substr(k,n3-k) == s1.substr(i,n1-i);
        }
        return (s1[i]==s3[k] && rec(s1,n1,s2,n2,s3,n3,i+1,j,k+1) | (s2[j]==s3[k] && rec(s1,n1,s2,n2,s3,n3,i,j+1,k+1)));

    }

    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.length();
        int n2=s2.length();
        int n3=s3.length();
        if(n1+n2 != n3) return false;
        return rec(s1,n1,s2,n2,s3,n3,0,0,0);
    }
};

int main(){

        Solution2 s;
        string s1, s2, s3;
        s1="aabcc";
        s2= "dbbca";
        s3= "aadbbcbcac";
        cout<<s.isInterleave(s1,s2,s3)<<endl;
    

}