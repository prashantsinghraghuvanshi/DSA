#include<bits/stdc++.h>
using namespace std;

struct ListNode {               //LL def.
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
        if(list1==NULL) return list2;       //default conditions
        if(list2==NULL) return list1;       //now first element of list1
        if(list1->val>list2->val)   swap(list1,list2);  //should be smallest
        ListNode* head=list1;
        while(list1!=NULL && list2!=NULL){
            ListNode* last=NULL;            //create a dummy node
            while(list1!=NULL && list1->val<=list2->val){
                last=list1;                 //store the data
                list1=list1->next;          //data filling 
            }
            last->next=list2;               //traversal
            swap(list1,list2);
        }
        return head;
    }
};