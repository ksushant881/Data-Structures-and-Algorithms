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
int parse(string number){
    int n=number.length();
    int i;
    for( i=1;i<n;i++){
        if(number[i]!=number[i-1]) break;
    }
    if(i==n) return 0;
    for(i=1;i<n;i++){
        if(number[i] >= number[i+1]) break;
    }
    if(i==n) return 1;
    return 2;
}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){
int n;
cin>>n;
map<string ,vector<int>>mp;
//0 - taxi 1-pizza 2-girls
f(i,n){
    int x;
    string name;
    cin>>x>>name;
    f(k,x){
        string num;
        cin>>num;
        int ans = parse(num);
        mp[name][ans]++;
    } 
}
int taxi=-1,pizza=-1,pizza=-1;
string t_ans,p_ans,g_ans;
for(map<string,vector<int>>::iterator it=mp.begin();it!=mp.end();it++){
    if(it->second[0] > taxi){
        taxi = it->second[0];
        t_ans = it->first;
    }
    if(it->second[1] > pizza){
        pizza = it->second[0];
        p_ans = it->first;
    }
    if(it->second[2] > pizza){
        pizza = it->second[0];
        g_ans = it->first;
    }
    
}
cout<<"If you want to call a taxi, you should call: "<<t_ans<<". "<<endl;
cout<<"If you want to order a pizza, you should call: "<<p_ans<<"."<<endl;
cout<<"If you want to go to a cafe with a wonderful girl, you should call: "<<g_ans<<".";


}

}