#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2){
    int n1=s1.length();
    int n2=s2.length();
    int arr[n1+1][n2+1];
    for(int i=0;i<=n1;i++){
        arr[i][0]=0;
    }
    for(int i=0;i<=n2;i++){
        arr[0][i]=0;
    }
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(s1[i-1]==s2[j-1]){
                arr[i][j]=1+arr[i-1][j-1];
            }
            else{
                arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            }
        }
    }
    return arr[n1][n2];
}

int shortestCommonSupersequence(string s1,string s2){
    int l=lcs(s1,s2);
    int n1=s1.length();
    int n2=s2.length();
    return n1+n2-l;
}

int main(){

string s1="AGGTAB";
string s2="GXTXAYB";
cout<<shortestCommonSupersequence(s1,s2);

}