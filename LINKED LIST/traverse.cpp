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


//iterative
void traverse(Node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

//recursive
void traverse2(Node*head){
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    traverse2(head->next);
}

//insert at first
Node* insertFirst(Node*head,int x){
    Node*add=new Node(x);
    add->next=head;
    head=add;
    return head;
}

int main(){
    Node*head=new Node(10);
    head->next=new Node(15);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=new Node(25);
    head->next->next->next->next->next=new Node(30);
    head=insertFirst(head,9);
    traverse2(head);
}