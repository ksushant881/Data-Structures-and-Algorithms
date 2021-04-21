#include<bits/stdc+++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isSame(string a,string b,int i1,int i2,int n1,int n2){
    if(i1>n1 || i2>n2 || n1<0 || n2<0)
        return false;
    if(a.substr(i1,n1-1) == b.substr(i2,n2-1))
        return true;

    return isSame(a,b,1,0,n1,n2)||isSame(a,b,0,1,n1,n2)||isSame(a,b,0,0,n1-1,n2)||isSame(a,b,0,0,n1,n2-1);
}

//variation of longest common substring

string subarray(string a,string b){
    int n1=a.length();
    int n2=b.length();
    vector<vector<int>>sub(n1,vector<int>v(n2,0));
    for(int i=0;i<n1;i++){
        sub[i][0] = 0;
    }
    for(int i=0;i<n2;i++){
        sub[0][i]=0;
    }
    for(int i=1;i<n1;i++){
        for(int j=1;j<n2;j++){

        }
    }

}

int main(){
fastio

int tc;
cin >> tc;
for(int i=0;i<tc;i++){
    string a,b;
    cin >> a >> b;
    int n1=a.length();
    int n2=b.length();
    cout<<isSame(a,b,0,0,n1,n2);
}

}