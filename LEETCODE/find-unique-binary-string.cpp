#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    vector<long>st;
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].length();
        generateAllStrings(n);
        for(auto x:nums){
            long k = convertToInteger(x);
            st[k] = -1;
        }
        int ans;
        for(int i=0;i<st.size();i++){
            if(st[i]!=-1){
                ans = i;
                break;
            }
        }
        
        return convertToBinary(ans,n);
    }
    
    void generateAllStrings(int len) {
        for(long i=0;i<(2<<len);i++){
            st.push_back(i);
        }
    }

    long convertToInteger(string s) {
        long num = 0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == '1'){
                num+=pow(2,s.length()-i-1);
            }
        }
        return num;
    }

    string convertToBinary(long k,int n){
        string s="";
        while(k>0){
            s+=to_string(k%2);
            k=k/2;
        }
        reverse(s.begin(),s.end());
        if(s.length()!=n){
            int m = n-s.length();
            string h = "";
            while(m--)h+="0";
            s=h+s;
        }
        return s;
    }
};

int main(){
    Solution s;
    vector<string>arr = {"0010100010110110","0001010111001111","0011000000011110","1111111100000110","1100010101110000","1010010110001001","1111110000110000","0111110011100110","1001100000100011","1111101100010010","1110111000110011","1101101010010101","1111011111110101","1001001011111000","1111011000101100","1001010101101000"};
    cout<<s.findDifferentBinaryString(arr);

}