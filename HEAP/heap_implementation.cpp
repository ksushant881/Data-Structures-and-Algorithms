#include<bits/stdc++.h>
using namespace std;

//complete binary tree

//left(i)=2*i+1
//right(i) = 2*i+2
//root = floor(i-2)

class MinHeap{
    public:
    int *arr;
    int capacity;
    int size;
    
    MinHeap(int x){
        capacity = x;
        arr=new int[capacity];
        size=0;
    }

    int left(int i){
        return 2*i+1;
    }
    
    int right(int i){
        return 2*i+2;
    }
       

    int root(int i){
        return (i-1)/2;
    }

    void insert(int item){
        if(size == capacity)
            return;
        int curr = size;
        arr[curr] = item;
        size++;
        
        while(arr[root(curr)] > item){
            swap(arr[curr],arr[root(curr)]);
            curr = root(curr);
        }
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};



class MaxHeap{
    public:
    int capacity;
    int size;
    int *arr;

    MaxHeap(int x){
        capacity = x;
        size=0;
        arr= new int[capacity];
    }

    int left(int i){
        return 2*i+1;
    }

    int right(int i){
        return 2*i+2;
    }

    int root(int i){
        return (i-1)/2;
    }

    void insert(int item){
        if(size == capacity)
            return;
        int curr=size;
        arr[curr]=item;
        size++;
        while(arr[root(curr)] < item){
            swap(arr[root(curr)],arr[curr]);
            curr = root(curr);
        }
    }
};

int main(){
    MinHeap test(10);
    test.insert(10);
    test.insert(20);
    test.insert(15);
    test.insert(40);
    test.insert(50);
    test.insert(100);
    test.insert(25);
    test.insert(45);
    test.print();
    test.insert(12);
    cout<<"\n";
    test.print();


    
}