#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    vector<int> countBits(int num) {
        int n=num;
        vector<int>res(n+1,0);
        res[0]=0; if(n==0) return res;
        res[1]=1; if(n==1) return res;
        //res[2]=1; if(n==2) return res;
        int offset=1;
        for(int i=2;i<n+1;i++){
            if (offset * 2 == i){
                offset *= 2;
            }
            res[i]=res[i-offset]+1;     
        }
        return res;
    }

    vector<int> countBits(int num) {
        int n=num;
        vector<int>res(n+1,0);
        res[0]=0; if(n==0) return res;
        res[1]=1; if(n==1) return res;
        for(int i=2;i<n+1;i++){
            res[i]=res[i&(i-1)]+1;   
        }
        return res;
    
    }

    // 0 0
    // 1 1
    // 2 1
    // 3 2
    // 4 1
    // 5 2
    // 6 2
    // 7 3
    // 8 1
    // 9 2
    // 10 2
    // 11 3
    // 12 2
    // 13 3
    // 14 3
    // 15 4
    // 16 1

int main(){
fastio

}