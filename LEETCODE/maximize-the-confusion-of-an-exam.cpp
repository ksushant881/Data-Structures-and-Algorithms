#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int maxConsecutiveAnswers(string str, int k) {
        int n = str.length(), left = 0, res = 0, cnt = 0;
        //F
        for(int i=0;i<n;i++){
            if(str[i]=='F') cnt++;
            while(cnt>k){
                if(str[left]=='F') cnt--;
                left++;
            }
            res = max(res,i-left+1);
        }
        
        left = 0,cnt = 0;
        //T
        for(int i=0;i<n;i++){
            if(str[i]=='T') cnt++;
            while(cnt>k){
                if(str[left]=='T') cnt--;
                left++;
            }
            res = max(res,i-left+1);
        }
        return res;
    }
};

int main(){
    Solution s;
    string str = "TTFTTFTT";
    cout<<s.maxConsecutiveAnswers(str,1)<<endl;
}