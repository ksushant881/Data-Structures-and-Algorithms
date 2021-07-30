#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode*reverse(ListNode*head,int k){
        ListNode*curr,*prev,*nxt;
        prev = NULL;
        curr = nxt = head;
        int c = 0;
        while(c <= k){
            nxt = curr ->next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
            c++;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp = head;
        int count = 0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        int left = count%k;
        ListNode*res = new ListNode(-1);
        ListNode*ans = res;
        temp = head;
        int c=0;
        ListNode*pass = head;
        while(temp!=NULL){
            temp = temp ->next;
            c++;
            if(c == k){
                c = 0;
                res->next = reverse(pass,k);
                res = pass;
                pass = temp -> next;
            }
        }

    }
};

int main(){

}   