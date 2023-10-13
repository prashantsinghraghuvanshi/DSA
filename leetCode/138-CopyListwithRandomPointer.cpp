#include<bits/stdc++.h>
using namespace std;

class Node {        //Definition for a Node.
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {            //Two Passes Approach
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>mpp;      //unordered map to store value
        Node *temp,*nhead;

        temp=head;
        if(temp!=NULL){             //default condition was missing
            nhead=new Node(temp->val);
        
            mpp[temp]=nhead;

            while(temp->next!=NULL){            //first pass to create duplicate
                nhead->next=new Node(temp->next->val);
                temp=temp->next;
                nhead=nhead->next;
                mpp[temp]=nhead;
            }        
            temp=head;                          
            while(temp!=NULL){      //second pass to clone the LL
                mpp[temp]->random=mpp[temp->random];    //created a deep copy
                temp=temp->next;
            }
        }
        return mpp[head];
    }
};