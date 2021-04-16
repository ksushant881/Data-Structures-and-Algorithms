#include<iostream>
using namespace std;

int fact(int n){
    if(n==1)
        return 1;
    n=n*fact(n-1);
    return n;
}
int rank1(string s){
    int count=0;
    int rank=0;
    for(int i=0;i<s.length()-1;i++){
        count=0;
        for(int j=i+1;j<s.length();j++){
            if(s[j]<s[i])
                count++;
        }
        rank+=count*fact(s.length()-1-i);
    }
    return rank+1;
}


int lexRank(string str){
    int res=1;
    int n=str.length();
    int mul=fact(n);
    int count[256]={0};
    for(int i=0;i<n;i++){
        count[str[i]]++;

    }
    
}

//naive method by generating all permutations in lexicographical order
void perm(string s){
    
}

int main(){
    string s="string";
    cout<<rank1(s);
}

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
    rankOfString(s,index+1);
}