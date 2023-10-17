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
    ListNode* mergeKLists(vector<ListNode*>& lists){
        ListNode *ans=new ListNode(0);

        for(ListNode *list: lists){
            ans->next=merge(ans->next,list);
        }

        return ans->next;
    }

    ListNode *merge(ListNode *list1,ListNode *list2){
        ListNode *ans=new ListNode(0);
        ListNode *ptr=ans;

        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                ptr->next=list1;
                list1=list1->next;
            }
            else{
                ptr->next=list2;
                list2=list2->next;
            }
            ptr=ptr->next;
        }
        if(list1==NULL)
            ptr->next=list2;
        else{
            ptr->next=list1;
        }
        return ans->next;
    }
};