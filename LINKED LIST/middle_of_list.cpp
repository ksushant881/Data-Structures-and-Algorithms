#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

int middle(Node*head){
    int n=0;
    Node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        n++;
    }
    n=n/2;
    temp=head;
    while(n!=0){
        temp=temp->next;
        n--;
    }
    return temp->data;
}

void middle2(Node*head){
    
    if(head==NULL)
        return;
    Node*slow,*fast;
    slow=fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<< slow->data;
}

int main(){
    Node*head=new Node(10);
    head->next=new Node(15);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=new Node(25);
    head->next->next->next->next->next=new Node(30);
    middle2(head);
}