#include<bits/stdc++.h>
#include<string>
using namespace std;

class Solution2 {
    public:

    pair<int,string> help(string s1,string s2,int n1,int n2){
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

    string shortestSuperstring(vector<string>& words) {
        string s1="AGGTAB";
        string s2="GXTXAYB";
        int n1=s1.length();
        int n2=s2.length();
        auto res=help(s1,s2,n1,n2);
        cout<<res.first<<" "<<res.second;
        return s1;
    }
};

class Solution {
public:
    string shortestSuperstring(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                
            }
        }
    }
};

int main(){

Solution s;
vector<string>v={"alex","loves","leetcode"};
s.shortestSuperstring(v);

}