#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    void gen(string &num,int n){
        int i=-1;
        for(i=n-1;i>0;i--){
            if(num[i-1]<num[i]){
                break;
            }
        }
        i--;
        int k=-1;
        for(k=n-1;k>i;k--){
            if(num[k]>num[i]){
                break;
            }
        }
        swap(num[i],num[k]);
        sort(num.begin()+i+1,num.end());
    }
    
    void rotate(string &s,int start,int end){
        char temp=s[end];
        int x=start;
        while(x!=end){
            s[x+1]=s[x];
            x++;
        }
        s[start]=temp;
        return;
    }
    
    int countSwaps(string &res,int i,string &num,int n){
        int j;
        for(j=i+1;j<n;j++){
            if(num[j]==res[i])
                break;
        }
        int count=j-i;
        rotate(num,i,j);
        return count;
    }
    
    int getMinSwaps(string num, int k) {
        int n=num.length();
        string res=num;
        while(k--){
            gen(res,n);
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(res[i]!=num[i]){
                count+=countSwaps(res,i,num,n);
            }
        }
        return count;
    }

int main(){
fastio

}