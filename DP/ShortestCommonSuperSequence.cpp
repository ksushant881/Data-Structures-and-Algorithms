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

//printing shotest common supersequence
string print(string s1,string s2){
    int n1=s1.length();
    int n2=s2.length();
    int arr[n1+1][n2+1];
    for(int i=0;i<=n1;i++) arr[i][0]=0;
    for(int i=0;i<=n2;i++) arr[0][i]=0;
    for(int i=01;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(s1[i-1]==s2[j-1]){
                arr[i][j]=1+arr[i-1][j-1];
            }
            else{
                arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            }
        }
    }
    string res="";
    int i=n1,j=n2;
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            res.push_back(s1[i-1]);
            i--;
            j--;
        }
        else{
            if(arr[i-1][j] > arr[i][j-1]){
                res.push_back(s1[i-1]);
                i--;
            }
            else{
                res.push_back(s2[j-1]);
                j--;
            }
        }
    }
    while(i>0){
        res.push_back(s1[i-1]);
        i--;
    }
    while(j>0){
        res.push_back(s2[j-1]);
        j--;
    }

    reverse(res.begin(),res.end());
    return res;
}



int main(){

string s1="AGGTAB";
string s2="GXTXAYB";
cout<<print(s1,s2);

}