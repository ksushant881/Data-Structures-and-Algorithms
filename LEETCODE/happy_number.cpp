#include<bits/stdc++.h>
using namespace std;

    int extract(int n){
        int sum=0;
        int curr;
        while(n!=0){
            curr=n%10;
            sum!=pow(curr,2);
            n=n/10;
        }
        return sum;
    }
    

    
    bool isHappy(int n) {
        if(n==1)
            return true;
        if(n<10 && n!=1)
            return false;
        return isHappy(extract(n));
        
        
    }

int main(){
    cout<<isHappy(19);
}