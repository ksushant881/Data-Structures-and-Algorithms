#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(){
        
        next=NULL;
    }
    Node(int x){
        data=x;
        next=NULL;
    }
    Node(int x,Node*link){
        data=x;
        next=link;
    }
};

//approach 1 O(n^2)
//not correct implementation
bool loop1(Node*head){
    Node*temp=head;
    unordered_set<Node*>s;
    //store address of each node
    while(temp!=NULL){
       
        s.insert(temp);
       
        temp=temp->next;
        if(s.find(temp)!=s.end())
            return true;
    }
    return false;
}

//approach 2 to change the class and add a visited parameter to every node
//while traversing we will change the value of that parameter

//approach 3
bool loop3(Node*head){
    Node*temp;
    Node*curr=head;
    Node*prev=head;
    while(curr!=NULL){
        if(curr->next==NULL)
            return false;
        curr=curr->next;
        prev->next=temp;
        prev=curr;
        if(curr->next==temp)
            return true;
    }
    return false;
}

//approach 4 using hashset
bool loop4(Node*head){
    unordered_set<Node*>s;
    while(head!=NULL){
        if(s.find(head)!=s.end())
            return true;
        s.insert(head);
        head=head->next;
    }
    return false;
}

//floyd cycle detection algorithm
bool loop(Node*head){
    Node*slow,*fast;
    slow=fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

int main(){
    Node*head=new Node(10);
    Node*a=new Node(15);  
    Node*b=new Node(12);
    Node*c=new Node(20);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=a;
    
    Node*head1=new Node(10);
    Node*z=new Node(4);
    head1->next=z;
    
    cout<<loop4(head);
    

   
}