#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class node{
    public:
    int val;
    int posOfArr;
    ListNode* curr;
    node(int a,int b,ListNode* c){
        val=a;
        posOfArr=b;
        curr=c;
    }
};

struct CompareVal {
    bool operator()(node const* n1, node const* n2){
        return n1->val > n2->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        priority_queue<node*,vector<node*>,CompareVal>pq;
        for(int i=0;i<k;i++){
            // node* n = new node(lists[i]->val,i,list[i]);
            if(lists[i] !=NULL) pq.push(new node(lists[i]->val,i,lists[i]));
        }
        // while(!pq.empty()){
        //     cout<<pq.top()->val<<" "<<pq.top()->posOfArr<<" "<<pq.top()->curr->val<<endl;
        //     pq.pop();
        // }
        
        ListNode*ans=new ListNode(10);
        ListNode*res=ans;
        while(!pq.empty()){
            node *t = pq.top();
            // if(t->val == 4){
            //     while(!pq.empty()){
            //         cout<<pq.top()->val<<" "<<pq.top()->posOfArr<<" "<<pq.top()->curr->val<<endl;
            //         pq.pop();
            //     }
            // }
            pq.pop();
            ans->next=new ListNode(t->val);
            ans=ans->next;
            if(t->curr->next != NULL) pq.push(new node(t->curr->next->val,t->posOfArr,t->curr->next));
        }
        return res->next;
    }
};


int main(){

}