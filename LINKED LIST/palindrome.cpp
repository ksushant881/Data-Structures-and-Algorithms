#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    char data;
    Node*next;
    Node(int x){
        data=x;
        next=NULL;
    }
    Node(int x,Node*link){
        data=x;
        next=link;
    }
};

//naive approach
bool pal(Node*head){
    stack<char>st;
    Node*temp=head;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(temp->data != st.top())
            return false;
        st.pop();
        temp=temp->next;
    }
    return true;
}

Node* reverse(Node*head){
    if(head==NULL || head->next==NULL)
        return head;
    Node*revHead=reverse(head->next);
    Node*revLast=head->next;
    revLast->next=head;
    head->next=NULL;
}

//efficient approach
bool pal2(Node*head){
    Node*temp;
    Node*fast=head;
    Node*slow=head;
   
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    temp=reverse(slow->next);
    Node*start=head;
    while(temp!=NULL){
        if(start->data != temp->data)
            return false;
        start=start->next;
        temp=temp->next;
    }
    return true;
    


}

int main(){
    Node*head=new Node('G');
    Node*a=new Node('F');
    Node*b=new Node('G');
    Node*c=new Node('K');
    head->next=a;
    a->next=b;
    b->next=c;
    cout<<pal2(head);
}