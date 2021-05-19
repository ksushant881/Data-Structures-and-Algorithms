#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution{
	public:

    bool checkNine(ll n){
        while(n!=0){
            int temp=n%10;
            if(temp==9)
                return true;
            n=n/10;
        }
        return false;
    }
    	long long findNth(long long N)
    {
        
    }
};

int main(){



}