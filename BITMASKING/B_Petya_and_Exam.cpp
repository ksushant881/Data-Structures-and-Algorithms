#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

//0xAAAAAAAA means 10101010101010101010101010101010 in binary.
//we get all even bits of n.
const unsigned int ev=0xAAAAAAAA;
//0x55555555 means 01010101010101010101010101010101 in binary.
//we get all odd bits of n.
const unsigned int od=0x55555555;


bool solve(string str,string q,int n,set<char>good,set<char>bad){
    bool flag=true;
    f(i,n){
        if(str[i] == q[i]) continue;
        else{
            if(str[i] == '?'){
                if(good.count(q[i])) continue;
                else{
                    cout<<"NO"<<endl;
                    flag=false; break;
                }
            }
            else if(str[i] == '*'){
                if(bad.count(q[i])) continue;
                else{
                    cout<<"NO"<<endl;
                    flag=false; break;
                }
            }
            else{
                cout<<"NO"<<endl;
                flag=false; break;
            }
        }
    }
    return flag;
}

int main(){
fastio

int tc=1;

string s;
cin>>s;

set<char>good;
f(i,s.length()) good.insert(s[i]);
set<char>bad;

for(int i=0;i<26;i++){
    if(!good.count('a'+i)) bad.insert('a'+i);
}

// for(auto x:bad){
//     cout<<x<<" ";
// }
// cout<<endl;

string str;
cin>>str;
int n=str.length();
bool containsStar=false;
bool containsQuestionMark = false;
string temp="";

f(i,n){
    if(!containsStar && str[i] == '*'){
        containsStar = true;
    }
    if(!containsQuestionMark && s[i] == '?'){
        containsQuestionMark = true;
    }
    if(str[i] != '*') temp+=str[i];
}


cin >> tc;
f(casess,tc){
string q;
cin>>q;
if(n != q.length()){
    if(!containsStar){
        cout<<"NO"<<endl;
        continue;
    }
    else{
        if(solve(temp,q,n,good,bad)) cout<<"YES"<<endl;
    }
}
else if(n == q.length()){
    if(solve(str,q,n,good,bad)) cout<<"YES"<<endl;
}


}

}