#include<iostream>
using namespace std;

bool pal(int n){
    int temp=n;
    int temp2=0;
        int x;
    while(temp!=0){
        x=temp%10;
        temp2=temp2*10+x;
        temp=temp/10;
    }
    if(n==temp2)
        return true;
    return false;
}

int main(){
    cout<<pal(1234);
}