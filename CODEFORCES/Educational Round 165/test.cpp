#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

bool isPlaindrome(string s){
    string rev = s;
    reverse(s.begin(),s.end());
    return s==rev;
}

bool isPossible(string s, int len){
    int n =s.length();
    for(int i=0;i<n-len;i++){
        // cout<<s.substr(i,len)<<" "<<len<<endl;
        if(!isPlaindrome(s.substr(i,len))) {
            // cout<<s.substr(i,len)<<" uo"<<endl;
            return true;
        }
    }
    return false;
}

int solve(string s){
    int n = s.length();

    int high = n, low=0, ans = 0;
    while(high>=low){
        int mid = (high-low)/2 + low;
        if(isPossible(s,mid)){
            ans = max(ans,mid); //find the longest non palindromic string cuz we have to minimize number of moves
            low = mid+1;
        }else {
            high = mid-1;
        }
    }
    return n-ans;
}

int main(){
    cout<<solve("aaabbaaa")<<endl; //3? should be 1
    cout<<solve("abcba")<<endl;    //1   
    cout<<solve("aaaaa")<<endl;    //5
}