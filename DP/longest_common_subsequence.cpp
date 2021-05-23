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

//Efficient solution by DP
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
}//returns the length of lcs

//To get length of LCS and also the string LCS
//not much efficient
    pair<int,string> printLCS(string s1,string s2,int n1,int n2){
        pair<int,string> arr[n1+1][n2+1];
        for(int i=0;i<=n1;i++) arr[i][0]=make_pair(0,"");
        for(int i=0;i<=n2;i++) arr[0][i]=make_pair(0,"");
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                if(s1[i-1]==s2[j-1]){
                    string str=arr[i-1][j-1].second;
                    str+=s1[i-1];
                    arr[i][j]=make_pair(str.length(),str);
                }
                else{
                    if(arr[i-1][j].first > arr[i][j-1].first)
                        arr[i][j]=arr[i-1][j];
                    else
                        arr[i][j]=arr[i][j-1];
                }
            }
        }

        for(int i=0;i<=n1;i++){
            for(int j=0;j<=n2;j++){
                cout<<arr[i][j].first<<" "<<arr[i][j].second<<"|";
            }
            cout<<endl;
        }
        return arr[n1][n2];
    }

//Efficient printing of LCS
string printLCS2(string s1,string s2){
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
    while(i>0 || j>0){
        if(s1[i-1]==s2[j-1]){
            res.push_back(s1[i-1]);
            i--;
            j--;
        }
        else{
            if(arr[i-1][j] > arr[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    return res;
}

int main(){
    string s1="ABCDGH";
    string s2="AEDFHR";
    int n=s1.length();
    int m=s2.length();
    // string res="";
    // //cout<< lcs(s1,s2,n-1,m-1)<<endl;
    // lcs_string(s1,s2,n-1,m-1,res);
    // for(auto x:string_set){
    //     if(x.length() == lcs(s1,s2,n-1,m-1)){
    //         reverse(x.begin(),x.end());
    //         cout<<x<<endl;
    //     }
    // }
    cout<<lcs(s1,s2)<<" "<<printLCS2(s1,s2);
}