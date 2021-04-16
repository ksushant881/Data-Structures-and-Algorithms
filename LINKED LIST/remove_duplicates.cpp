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

void traverse2(Node*head){
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    traverse2(head->next);
}

Node*dup(Node*head){
    if(head==NULL)
        return head;
    Node*temp;
    temp=head;
    Node*prev=head;
    while(temp!=NULL){
        if(temp->data==prev->data){
            temp=temp->next;
            prev->next=temp;
        }
        else{
            temp=temp->next;
            prev=prev->next;
        }
    }
    return head;
}

//de allocating the memory as well
Node*dup2(Node*head){
    Node*curr=head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->next->data==curr->data){
            Node*temp=curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }
        else{
            curr=curr->next;
            }
    }
    return head;
}

int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(20);
    head->next->next->next=new Node(30);
    head->next->next->next->next=new Node(30);
    head->next->next->next->next->next=new Node(30);

    Node*head1=new Node(2);
    traverse2(head1);
    cout<<endl;
    head1=dup(head1);
    traverse2(head1);
}