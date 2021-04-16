// #include<bits/stdc++.h>

// using namespace std;

// string int_to_bin(int n){
//     if(n==0)
//         return "0";
//     string s;
//     while(n!=0){
//         s+=to_string(n%2);
//         n=n/2;
//     }
//     int size=s.length();
//     int high=size-1;
//     int low=0;
//     while(high>low){
//         swap(s[high],s[low]);
//         high--;
//         low++;
//     }
//     return s;
    
// }

// void subs(string s,int i,vector<string>&v,string temp=""){
//     if(i==s.length()){
//         v.push_back(temp);
//         return;
//     }
//     subs(s,i+1,v,temp);
//     subs(s,i+1,v,temp+s[i]);
// }

// int main(){
//     string s="10";
// //    set<long long int>st;
// //    vector<string>v;
// //    string temp;
// //     subs(s,0,v,temp);
// //     for(int i=1;i<v.size();i++){
// //         long long int  n;
// //         n=stoi(v[i],0,2);
// //         st.insert(n);
// //         //cout<<n<<" ";
// //     }
// //     for(auto x:st)
// //         cout<<x<<" ";
// //    // cout<<int_to_bin(3);
//     int n=3;
//     string t="1011111110";
//     cout<<stoi(t,0,2);
// }

#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int dp[n+1];
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]*i;
    }
    return dp[n];
}
int num=0;
int rankOfString(string s,int index){
    if(index == s.length()-1)
        return 1;
    int count=0;
    for(int i=index+1;i<s.length();i++){
        if(s[i]<s[index])
            count++;
    }
    
    num+=(count*fact(s.length()-index));
    cout<<num<<" ";
    rankOfString(s,index+1);
}

int main(){
    rankOfString("STRING",0);
    //cout<<num;
}