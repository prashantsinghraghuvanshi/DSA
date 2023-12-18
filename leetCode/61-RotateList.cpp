#include<bits/stdc++.h>
using namespace std;

 // Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        int cnt=1;
        //placing tail at the end of the list
        ListNode *last=head;
        while(last->next!=NULL){
            last=last->next;
            cnt++;
        }
        k=k%cnt;
        if(k==0)    return head;
        ListNode *curr=head;
        for(int i=1;i<cnt-k;i++){
            curr=curr->next;
        }
        last->next=head;
        head=curr->next;
        curr->next=NULL;
        return head;
    }
};