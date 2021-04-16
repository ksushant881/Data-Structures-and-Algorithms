#include<iostream>
using namespace std;

// void fibb(int a,int b, int n){
//     int temp=a+b;
//     if(n==0)
//         cout<<temp;
    
    
    
//     fibb(b,temp,n-1);
// }

// //top down solution to get nth fibbonaci number
// int fib(int n){
//     if(n==0||n==1)
//         return n;
//     else    
//         return fib(n-1)+fib(n-2);
// }

//upper solution has time complexity O(2^n) or golden ratio to power n
//using DP optimization to O(n)
//memoization
int memo[6+1]={-1,-1,-1,-1,-1,-1,-1};
int fib_DP(int n){

    if(memo[n]==-1){
        int res;
        if(n==0||n==1)
            res=n;
        else    
            res=fib_DP(n-1)+fib_DP(n-2);
        memo[n]=res;
    }
    
    return memo[n];

}

//tabulation
int fibb(int n){
    int f[n+1];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}


int main(){
    int out=fibb(6);
    cout<<out<<endl;
    // int i=6;
    // while(i--)
    //     cout<<memo[i]<<" ";
}