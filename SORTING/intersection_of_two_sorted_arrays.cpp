#include<bits/stdc++.h>
using namespace std;

//naive approach
//works when array is not sorted as well
vector<int> intersection(int arr1[],int arr2[],int n1,int n2){
    unordered_set<int>s1;
    for(int i=0;i<n1;i++){
        s1.insert(arr1[i]);

    }
    unordered_set<int>s2;
    for(int i=0;i<n2;i++){
        if(s1.find(arr2[i])!=s.end())
            s2.insert(arr2[i]);
    }
    vector<int>v;
    for(int x:s2)
        v.push_back(x);

        return v;
}

//when array is sorted efficient approach
vector<int> intersection2(int arr1[],int arr2[],int n1,int n2){
    int i=0;
    int j=0;
    vector<int>v;
    int curr;
    while(i!=n1 && j!=n2){
        if(arr1[i]==arr2[j]){
            curr=arr1[i];
            i++;
            j++;
            v.push_back(curr);
        }
        else if(arr1[i]>arr2[j]){
            v.push_back()
        }
    }
}



int main(){

}