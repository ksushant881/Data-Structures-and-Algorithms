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

void nth(Node*head,int n){
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    temp=head;
    int x=count-n;
    while(x!=0){
        temp=temp->next;
        x--;
    }
    cout<<temp->data;
}

void nth2(Node*head,int n){
    if(head=NULL)
        return;
    Node*temp1,*temp2;
    temp1=head;
    temp2=head;
    for(int i=0;i<n;i++){
        if(temp2==NULL)
            return;
        temp2=temp2->next;
    }
    while(temp2!=NULL){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    cout<<temp1->data;


}



int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    //head->next->next->next->next->next=new Node(30);
    nth2(head,2);
}