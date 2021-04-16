#include<iostream>
using namespace std;

struct deque{
    int size,cap;
    int *arr;
    deque(int c){
        cap=c;
        size=0;
        arr=new int[cap];
    }

    bool isFull(){
        return (size==cap);
    }

    bool isEmpty(){
        return (size==0);
    }

    void insertRear(int x){
        if(isFull())
            return;
        arr[size]=x;
        size++;
    }

    void insertFront(int x){
        if(isFull())
            return;
        for(int i=0;i<size;i++)
            arr[i+1]=arr[i];
        arr[0]=x;
    }

    void deleteRear(){
        if(isEmpty())
            return;
        size--;

    }

    void deleteFront(){
        if(isEmpty()){
            return;
        }
        for(int i=0;i<size-1;i++)
            arr[i]=arr[i+1];
        size--;
    }


    int getFront(){
        if(isEmpty())
            return -1;
        return arr[0];
    }

    int getRear(){
        if(isEmpty())
            return -1;
        return arr[size-1];
    }

};

