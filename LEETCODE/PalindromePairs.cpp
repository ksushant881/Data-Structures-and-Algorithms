#include<bits/stdc++.h>
using namespace std;

//using hash map
//complexity n*k*k where k is the average length of words
class Solution1 {
public:
    bool isPal(string s){
        int n=s.length();
        int high = n-1;
        int low = 0;
        while(high > low){
            if(s[high] != s[low]) {
                return false;
            }
            else{
                high--;
                low++;
            }
        }
        return true;
    }

    vector<vector<int>> palindromePairs(vector<string>& words) {
        int n=words.size();
        vector<vector<int>>res;
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){
            string key = words[i];
            reverse(key.begin(),key.end());
            //storing the words in reverse order beacuase for example we make a palindrome by 
            //concatinating a string at the end of other
            //the first j characters should match the last j characters of other string reversly
            //  eg.: string1 = a b c x x      string2 =  b c a
            //they will make a plaindrome when we concatenate like string1+string2
            //so if we store the reverse of each string already and compare it with first 
            //string2.size() characters of string1
            //and if they match the original string2 will make a palindrome with a condition that 
            //the remaining
            //string of string1 is a palindrome itself
            //thats the whole algorithm
            mp[key] = i;
        }

        if(mp.find("")!=mp.end()){
            for(int i=0;i<n;i++){
                if(words[i] == "") continue;
                if(isPal(words[i])){
                    res.push_back({mp[""],i});
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].size();j++){
                string left = words[i].substr(0,j);
                string right = words[i].substr(j,words[i].size() - j);
                
                if(mp.find(left)!=mp.end() && isPal(right) && mp[left]!=i){
                    res.push_back({i,mp[left]});
                }
                
                if(mp.find(right)!=mp.end() && isPal(left) && mp[right]!=i){
                    res.push_back({mp[right],i});
                }
            }
        }
        return res;
    }
};

class Solution{
    private:
        struct trieNode{
            trieNode*children[26];
            bool end;
        };

    public:

};


int main(){

vector<string>v1={"abcd","dcba","lls","s","sssll"};
vector<string>v2={"bat","tab","cat"};
vector<string>v3={"a",""};
Solution s;


}