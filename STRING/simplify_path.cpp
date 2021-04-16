#include<bits/stdc++.h>
using namespace std;

string simplifyPath(string path) {
        deque<string>s;
        int n=path.length();
        string temp="";
        for(int i=0;i<n;i++){
                
                temp.erase();
                if(path[i]=='/' && s.back()!="/"){
                    temp="/";
                    s.push_back(temp);
                    continue;
                }
            else if(path[i]=='.'){
                int j=i;
                if(path[j+1]='/'){
                    continue;
                }
                else if(path[j+1]=='.' && path[j+2]=='/'){
                    s.pop_back();
                    if(s.empty()==true){
                        s.push_back("/");
                    }
                    else{
                        s.pop_back();
                    }
                    i=i+1;
                }
                else{
                    
                    while(path[j]!='/'){
                       
                        j++;
                    }
                     temp=path.substr(i,j-1);
                    i=j-1;
                    s.push_back(temp);
                }
            }
                else{
                     int j=i;
                    while(path[j]!='/'){
                       
                        j++;
                    }
                    temp=path.substr(i,j-1);
                    i=j-1;
                    s.push_back(temp);
                }
            
            cout<<temp<<endl;
              
            }
        string res="";
       while(s.empty()==false){
            res+=s.front();
            s.pop_front();
        } 
        return res;
        }

int main(){
    string s="/a/./b/../../c/";
    
    string res=simplifyPath(s);
    cout<<res;
    
}