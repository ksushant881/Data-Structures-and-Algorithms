#include<bits/stdc++.h>
using namespace std;


//very big solution
//not passed
void subs(string s,int i,vector<string>&v,string temp=""){
    if(i==s.length()){
        v.push_back(temp);
        return;
    }
    subs(s,i+1,v,temp);
    subs(s,i+1,v,temp+s[i]);
}

string int_to_bin(int n){
    if(n==0)
        return "0";
    string s;
    while(n!=0){
        s+=to_string(n%2);
        n=n/2;
    }
    int size=s.length();
    int high=size-1;
    int low=0;
    while(high>low){
        swap(s[high],s[low]);
        high--;
        low++;
    }
    return s;
}


int main(){
    int cases;
    cin>>cases;
    while(cases--){
        if(cases<0)
            break;
    vector<string>v;
    string s;
    string temp;
    cin>>s;
    long long int  n=stoi(s,0,2);
    bool visited[n+1];
    fill(visited,visited+n+1,false);
    subs(s,0,v,temp);
    for(int i=1;i<v.size();i++){
        long long int key=0;
        key=stoi(v[i],0,2);
        visited[key]=true;
        
    }
    for(int i=0;i<=n;i++){
            if(visited[i]==false){
                cout<<int_to_bin(i)<<endl;
                break;
            }
    }
    }
}