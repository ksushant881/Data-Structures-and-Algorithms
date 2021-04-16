#include<iostream>
#include<queue>
#include<string>
using namespace std;

void fs(int n){
    queue<string>q;
    q.push("5");
    q.push("6");
    for(int i=0;i<n;i++){
        string u=q.front();
        cout<<u<<" ";
        q.pop();
        q.push(u+"5");
        q.push(u+"6");

    }
}
int main(){
    fs(5);
}