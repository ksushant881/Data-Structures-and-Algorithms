#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node*next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
//typedef struct Node Node;
void traverse2(Node*head){
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    traverse2(head->next);
}

Node* reverseList(Node *head)
    {
        if(head==NULL)
        return head;
        Node*prev,*curr,*front;
        prev=NULL;
        curr=front=head;
        while(front!=NULL){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
            
        }
        //head=prev;
        return prev;
    }

    //recursive approach
    Node* reverseList2(Node*prev,Node*curr,Node*front){
        if(front==NULL)
            return prev;
        front=curr->next;
        curr->next=prev;
        reverseList2(curr,front,front);
    }

    Node* reverseList3(Node*head){
        if(head==NULL)
            return head;
        if(head->next==NULL){
            return head;
        }

        Node* rest_head=reverseList3(head->next);
        Node*rest_tail=head->next;
        rest_tail->next=head;
        head->next=NULL;
        return rest_head;
    }

int main(){
    Node*head=new Node(10);
    head->next=new Node(15);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=new Node(25);
    head->next->next->next->next->next=new Node(30);
    traverse2(head);
    cout<<endl;
    head=reverseList(head);
    traverse2(head);
}