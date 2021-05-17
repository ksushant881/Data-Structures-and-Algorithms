#include<bits/stdc++.h>
using namespace std;

bool compare(string &s1,string &s2)
{
    return s1.size() < s2.size();
}

int longestStrChain(vector<string>& words) {
    int n=words.size();
    map<string,int>mp;
    sort(words.begin(),words.end(),compare);
       for(int i=0;i<n;i++){
        mp[words[i]]=1;
        for(int j=0;j<words[i].length();j++){
            string s;
            s=words[i].substr(0,j);
            s+=words[i].substr(j+1,words[i].length()-j-1);
            if(mp.count(s)){
                auto it=mp.find(s);
                mp[words[i]]=max(mp[words[i]],it->second+1);
            }
        }
    }
    int res=0;
    string s;
    for(auto it=mp.begin();it!=mp.end();it++){
        //cout<<it->first<<" "<<it->second<<endl;
        if(it->second > res) {res=it->second;s=it->first;}
    }
    //cout<<s<<endl;
    return res;
}

int main(){
    vector<string>words={"xbc","pcxbcf","xb","cxbc","pcxbc"};
    cout<<longestStrChain(words);

}