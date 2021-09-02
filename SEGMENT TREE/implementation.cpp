#include<bits/stdc++.h>
using namespace std;

class parent{
    public:
    void print(vector<int>arr){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        return;
    }
};

//simple approach to update and get sum queries
class parent :class simple{
    public:
    
    vector<int>arr;
    
    void update(int index,int val){ //O(1)
        arr[index]=val;
    }
    
    int getSum(int i,int j){ //O(n)
        int sum=0;
        for(int k=i;k<=j;k++){
            sum+=arr[k];
        }
        return sum;
    }

    
};

//second approach
class second{
    public:
    vector<int>arr;

};

int main(){
    vector<int>arr={10,20,30,40,50,60,70};
    simple s;
    s.arr=arr;

}