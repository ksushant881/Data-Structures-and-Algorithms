#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//lcs variation problem
    int minDistance(string word1, string word2) {
        int n1=word1.length();
        int n2=word2.length();
        int arr[n1+1][n2+1];
        for(int i=0;i<n1+1;i++){
            arr[i][0]=0;
        }
        for(int i=0;i<n2+1;i++)
            arr[0][i]=0;
        for(int i=1;i<n1+1;i++){
            for(int j=1;j<n2+1;j++){
                if(word1[i-1]==word2[j-1])
                    arr[i][j]=arr[i-1][j-1]+1;
                
                else
                    arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            }
        }
        return n1+n2-2*arr[n1][n2];
    }

int main(){
fastio

}