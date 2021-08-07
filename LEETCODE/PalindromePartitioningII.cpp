#include<bits/stdc++.h>
using namespace std;

 class Solution {
    public:
        int minCut(string s) {
            if(s.empty()) return 0;
            int n = s.size();
            vector<vector<bool>> pal(n,vector<bool>(n,false));
            vector<int> d(n);
            for(int i=n-1;i>=0;i--)
            {
                d[i]=n-i-1;
                for(int j=i;j<n;j++)
                {
                    if(s[i]==s[j] && (j-i<2 || pal[i+1][j-1]))
                    {
                       pal[i][j]=true;
                       if(j==n-1)
                           d[i]=0;
                       else if(d[j+1]+1<d[i])
                           d[i]=d[j+1]+1;
                    }
                }
            }
            return d[0];
        }
    };

int main(){

}