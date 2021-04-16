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

bool loop(Node*head){
    Node*temp=new Node();
    Node*curr=head;
    Node*prev;
    while(curr!=NULL){
        if(curr->next==temp)
            return true;
        prev=curr;
        curr=curr->next;
        prev->next=temp;
    }
    return false;
}

void removeLoop(Node*head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
            break;
    }
    if(slow!=fast)
        return;
    slow=head;
    while(fast->next!=slow->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
    
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
    cout<<loop(head);
}