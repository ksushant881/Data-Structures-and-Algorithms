#include<bits/stdc++.h>
using namespace std;

class Solution2 {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<set<char>>v;

        for(int i=0;i<n;i++){
            set<char>st;
            for(int j=0;j<words[i].length();j++){
                st.insert(words[i][j]);
            }
            v.push_back(st);
        }

        int res=0;
        for(int i=0;i<n;i++){
            // cout<<"i = "<<i<<endl;
            // for(auto x:v[i]) cout<<x<<" ";
            // cout<<" "<<endl;
            for(int j=0;j<n;j++){
                // for(auto x:v[j]) cout<<x<<" ";
                // cout<<" "<<endl;
                bool flag=true;
                for(auto x:v[i]){
                    if(v[j].count(x)){
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    int temp=words[i].size()*words[j].size();
                    res=max(res,temp);
                }
            }
        }
        return res;
    }
    
};

class Solution{
    public:
        int maxProduct(vector<string>& words){
            int n=words.size();
            int res=0;
            int mask[n];
            fill(mask,mask+n,0);
            for(int i=0;i<n;i++){
                for(auto &ch:words[i]){
                    mask[i] |= 1 << (ch-'a');
                }
                for(int j=0;j<i;j++){
                    if((mask[i] & mask[j]) == 0){
                        int temp=words[i].size()*words[j].size();
                        res=max(res,temp);
                    }
                }
            }
            return res;
        }
};


int main(){

vector<string>words1={"abaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacw","baz","foo","bar","xtfn","abcdef"};
vector<string>words2={"a","ab","abc","d","cd","bcd","abcd"};
vector<string>words3={"a","aa","aaa","aaaa"};
Solution s;
cout<<s.maxProduct(words1)<<endl;
cout<<s.maxProduct(words2)<<endl<<s.maxProduct(words3)<<endl;

}