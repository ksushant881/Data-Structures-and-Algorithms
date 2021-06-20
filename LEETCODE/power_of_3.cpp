#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPowerOfThree(int n) {
        return fmod(log10(n)/log10(3), 1)==0;
}


//t is the max power of three
//cool logic
bool isPowerOfThree(int n) {
        if (n<=0) return false;
        int t = pow(3,(int)(log(INT_MAX)/log(3)));
        return (t%n == 0);
}

//naive solution
bool isPowerOfThree(int n) {
        bool flag=true;

        if(n<=0)
            return false;
        for(long long int i=1;;i=i*3){
            if(i==n)
                break;
            if(i>n)
            {
                flag=false;
                break;
            }
        }
        return flag;
}

int main(){
fastio
 

}