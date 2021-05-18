#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        vector<vector<string>>resVector;
        map<string,vector<string>>mp;
        int n=paths.size();
        for(int i=0;i<n;i++){
            int stringLen=paths[i].length();
            string temp="";
            string dir="";
            string fileName="";
            string fileContent="";
            bool flagDir = true;
            bool flagFile = true;
            bool flagContent = true;
            for(int j=0;j<stringLen;j++){
                if(paths[i][j]==' '){
                    flagDir=false;
                    continue;
                }
                if(flagDir) dir+=paths[i][j];
                if(paths[i][j]=='('){
                    flagFile = false;
                    continue;
                }
                if(!flagDir && flagFile) fileName+=paths[i][j];
                if(paths[i][j]==')'){
                    flagContent = false;
                    string res = dir+"/"+fileName;
                    mp[fileContent].push_back(res);
                    flagFile = true;
                    fileName = "";
                    flagContent=true;
                    fileContent = "";
                }
                if(!flagFile && flagContent) fileContent+=paths[i][j];
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second.size()!=1)
            resVector.push_back(it->second);
        }
        return resVector;
    }
};

int main(){
vector<string>v={"root/a 1.txt(abcd) 2.txt(efsfgh)","root/c 3.txt(abdfcd)","root/c/d 4.txt(efggdfh)"};
Solution s;
vector<vector<string>>res = s.findDuplicate(v);
cout<<res.size();

}