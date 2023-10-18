#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode() : val(0), next(nullptr) {}
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)  return nullptr;     //default condition

        ListNode *tail=head;        
        for(int i=0;i<k;++i){
            if(tail==NULL)  return head;        
            tail=tail->next;
        }

        ListNode *newhead=reverse(head,tail);
        head->next=reverseKGroup(tail,k);       //recursion
        return newhead;
    }

    ListNode* reverse(ListNode *head,ListNode *tail){
        ListNode *prev=NULL;            //reversal of linked list
        ListNode *curr=head;
        

        while(curr!=tail && curr!=NULL){                  
            ListNode *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;          //it was causing the logical error
        }

        return prev;                    //returns first element of reversed LL''
    }
};