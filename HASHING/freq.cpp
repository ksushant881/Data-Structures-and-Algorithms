#include<iostream>

using namespace std;
#include<unordered_map>

void freq(int arr[],int n){
    unordered_map<int,int>s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end())
            s[arr[i]]=1;
        else
        s[arr[i]]++;
    }
    for(auto e:s)
        cout<<e.first<<" "<<e.second<<" "<<endl;


}

void freq2(int arr[],int n){
    unordered_map<int,int>h;
    for(int i=0;i<n;i++){
        h[arr[i]]++;
    }
    for(auto e:h)
        cout<<e.first<<" "<<e.second<<" "<<endl;


}

int main(){
    int arr[]={2,3,4,2,4,5,6};
    freq2(arr,7);
}