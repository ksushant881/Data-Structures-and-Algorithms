#include<bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    // 
    int countVowelStrings(int n) {
        vector<vector<int>>dp(n+1,vector<int>(5,0));
        dp[1][0]=1;
        dp[1][1]=1;
        dp[1][2]=1;
        dp[1][3]=1;
        dp[1][4]=1;
        for(int i=2;i<=n;i++){
            int sum=0;
            for(int j=0;j<5;j++){
                sum+=dp[i-1][j];
            }
            dp[i][0]=sum;
            dp[i][1]=sum-dp[i-1][0];
            dp[i][2]=sum-dp[i-1][1]-dp[i-1][0];
            dp[i][3]=sum-dp[i-1][2]-dp[i-1][1]-dp[i-1][0];
            dp[i][4]=sum-dp[i-1][3]-dp[i-1][2]-dp[i-1][1]-dp[i-1][0];
        }
        return dp[n][0]+dp[n][1]+dp[n][2]+dp[n][3]+dp[n][4];
    }
};


//generating all combinations solution
//highly inefficient
class Solution2{
    public:
    int countVowelStrings(int n){
        int ans=0;
        vector<char>v={'a','e','i','o','u'};
        for(char c:v){
            ans+=count(n-1,c,v);
        }
        return ans;
    }

    int count(int length,char last_character,vector<char>v){
        if(length==0){
            return 1;
        }
        int temp=0;
        for(char c:v){
            if(last_character >= c){
                temp+=count(length-1,c,v);
            }
        }
        return temp;
    }
};

void print(vector<vector<int>>&v){
    for(auto x:v){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

//dp solution shorter
class Solution {
public:
    int countVowelStrings(int n) {
        vector<vector<int>>dp(n+1,vector<int>(6,0));
        
        for(int j=1;j<=5;j++){
            dp[1][j] = 1 + dp[1][j-1];
        }

        for(int i=2;i<=n;i++){
            for(int j=1;j<=5;j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }

        print(dp);
        return dp[n][5];
    }
};

//simple formula observation
class Solution3{
    public:
    int countVowelStrings(int n) {
        int res = 0, sum = 0;
        for (int i = 1; i <= n + 1; ++i) {
            sum += i * (i + 1) / 2;
            res += sum;
        }
        return res;
    }
};

//combinatronics soloution

    class Solution4 {
    public:
    int countVowelStrings(int n) {
        return (n+1)*(n+2)*(n+3)*(n+4)/24;
    }
};


int main(){

Solution s;
cout<<s.countVowelStrings(3);

}