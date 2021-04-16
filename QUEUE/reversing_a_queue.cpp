#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseq(queue<int>&q){
    stack<int>st;
    while(q.empty()==false){
        int u=q.front();
        st.push(u);
        q.pop();
    }
    //q.clear();
    while(st.empty()==false){
        int u=st.top();
        q.push(u);
        st.pop();
    }

    // while(q.empty()==false){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }


}

//recursive solution
void reverseq2(queue<int>&q){
    if(q.empty())
        return;
    int x=q.front();
    q.pop();
    reverseq2(q);
    q.push(x); 
}

void printq(queue<int>q){
     while(q.empty()==false){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){
    queue<int>q;
    q.push(10);
    q.push(5);
    q.push(15);
    q.push(20);
    reverseq(q);
    printq(q);

}

