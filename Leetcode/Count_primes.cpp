#include<bits/stdc++.h>
using namespace std;

//TLE result
    int countPrimes(int n) {
        int count=0;
        for(int i=2;i<n;i++){
            bool flag=true;
            for(int j=2;j<i;j++){
                if(i%j==0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                count++;
            
        }
        return count;
    }

        bool isPrime(int n){
            if(n==1) return false;
            if(n==2 || n==3) return true;
            if(n%2==0 || n%3==0) return false;
            for(int i=5;i*i<=n;i+=6){
                if(n%i==0 || n%(i+2)==0)
                    return false;
            }
            return true;
        }

        int countPrimes(int n) {
            int count=0;
            for(int i=1;i<n;i+=2){
                if(isPrime(i))
                    count++;
            }
            return count;
    }


        int countPrimes(int n) {
            int count=0;
            vector<bool>v(n,true);

            for(int i=2;i<n;i++){
                if(v[i]){
                    count++;
                    for(int j=i;j<n;j+=i){
                        v[j]=false;
                    }
                }
            }
            return count;
    }

int main(){


}