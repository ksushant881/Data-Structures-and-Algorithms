#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
        int high=num;
        int low=1;
        while(high>=low){
            int mid=(high+low)/2;
            if(mid*mid==num)
                return true;
            else if(mid*mid>num)
                high=mid-1;
            else
                low=mid+1;
        }
        return false;
    }

//for when num is a big number and int cannot store it
    bool isPerfectSquare2(int num) {
        int high=num;
        int low=1;
        while(high>=low){
            int mid=low+(high-low)/2;
            int res=num/mid;
            int remain=num%mid;
            if(res==mid && remain==0)
                return true;
            else if(res<mid)
                high=mid-1;
            else
                low=mid+1;
        }
        return false;
    }

int main(){
    cout<<isPerfectSquare(144);
}