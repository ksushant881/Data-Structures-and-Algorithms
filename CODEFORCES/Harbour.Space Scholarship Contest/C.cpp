#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int main(){
fastio

ll tc = 1;
cin >> tc;
for(ll cassess = 1; cassess <= tc; cassess++){

string s;
cin>>s;
vector<int>t1;
vector<int>t2;
int left1=5;
int left2=5;
bool flag = true;
for(int i=0;i<10;i++){
    if(flag){
        if(s[i] == '1'){
            for(int i=0;i<t1.size();i++){
                t1[i] = t1[i]+1;
            }
            if(t1.size()==0){
                t1.push_back(1);
            }
        }
        else if(s[i] == '?'){
            int curr = t1[t1.size()-1];
            t1.push_back(curr+1);
            if(curr == -1) t1.push_back(1);
        }
        left1--;
        flag=false;
    }
    else{
        if(s[i] == '1'){
            for(int i=0;i<t2.size();i++){
                t2[i] = t2[i]+1;
            }
            if(t2.size()==0){
                t2.push_back(1);
            }
        }
        else if(s[i] == '?'){
            int curr = t2[t2.size()-1];
            t2.push_back(curr+1);
            if(curr == -1) t2.push_back(1);
        }
        left2--;
        flag=true;
    }
    
}

}
}