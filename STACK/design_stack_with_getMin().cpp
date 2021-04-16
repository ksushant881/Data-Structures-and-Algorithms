#include<bits/stdc++.h>
using namespace std;

class stack1{
    public:
    int cap;
    int top;
    int *arr;
    stack1(int x){
        cap=x;
        arr=new int[cap];
        top=-1;
    }
    bool push(int x){
        if(top==cap-1)
            return false;

        top++;
        arr[top]=x;
        return true;
    }

    bool pop(){
        if(top==-1)
            return false;
        int res=arr[top];
        top--;
        return true;
    }

    int peek(){
        if(top==-1)
            return 0;
        return arr[top];
    }

    int size(){
        return top+1;
    }

    bool isEmpty(){
        return (top==-1);
    }

};

class myStack{
    public:
    int cap;
    stack1 ms;
    stack1 as;

    myStack(int x){
        cap=x;
        ms = new stack1(cap);
        as = new stack1(cap);
    }

    // push pop isEmpty size peek 

    void push(int x){

    }

    bool isEmpty(){
        if(ms.top == -1)
            return true;
    }

};



int main(){

}