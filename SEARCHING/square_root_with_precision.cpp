#include<bits/stdc++.h>
using namespace std;

float sqroot(int n,int precision){
    int high = n;
    int low=0;
    float ans;
    float mid;
    while(high >= low){
        mid = (high - low)/2 + low;
        if(mid*mid == n) {
            ans=mid;
            break;
        }
        else if(mid*mid > n){
            high = mid - 1;
        }
        else{
            low = mid + 1;
            ans = mid;
        }
    }   
    ans = mid;
    float increment = 0.1;
    for(int i=1;i<=precision;i++){
        while(ans*ans <= n){
            ans+=increment;
        }
        ans = ans - increment;
        increment = increment/10;
    }
    return ans;
}

int main(){
    //cout<<setprecision(25);
    cout<<sqroot(5,4)<<endl;
    cout<<sqroot(15,5)<<endl;
    cout<<sqroot(64,3)<<endl;

}