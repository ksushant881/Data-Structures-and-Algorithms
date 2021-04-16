#include<bits/stdc++.h>
using namespace std;
int numWaterBottles(int numBottles, int numExchange) {
        int x=numBottles;
        int res=numBottles;
        int emp;
        while(x>=numExchange){
            int emp=x%numExchange;
            x=x/numExchange;
            res+=x;
            x+=emp;
                
            
                
            
        
        }
        return res;
        
    }
int main(){
    cout<<numWaterBottles(9,3);
}