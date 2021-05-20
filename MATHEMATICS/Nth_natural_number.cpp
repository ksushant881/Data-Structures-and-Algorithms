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
    	long long findNth(long long N){
        ll count=0;
        ll curr=1;
        while (1)
        {
            if(!checkNine(curr)){
                count++;
                if(count==N){
                    break;
                }
            }
        }
        return curr;
    }
};

class Solution2{
	public:
    	long long findNth(long long N){
            ll res=0;
            ll x=0;
            vector<int>digits;
            while(N!=0){
                
                digits.push_back(N%10);
                N=N/10;

            }
            for(int i=0;i<digits.size();i++){
                res+=(pow(9,i)*digits[i]);
            }

            return res;
    }
};

int main(){

Solution2 s;
cout<<s.findNth(9);

}