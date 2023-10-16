#include<bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    class node{             //doubly linked list declaration
        public:
        int key;
        int val;
        node *next;
        node *prev;
        node(int _key,int _val){
            key=_key;
            val=_val;
        }
    };
    node *head=new node(-1,-1);     //default head and tail key-value
    node *tail=new node(-1,-1);

    int cap;                        //capacity
    unordered_map<int,node*>ump;    //unordered map to store index and pointer to node

    LRUCache(int capacity) {        //cache declaration
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }

    void addnode(node *newnode){    //simple add-node
        node *temp=head->next;
        newnode->next=temp;
        newnode->prev=head;
        head->next=newnode;
        temp->prev=newnode;
    }

    void deletenode(node *delnode){     //simple remove node
        node *delprev=delnode->prev;
        node *delnext=delnode->next;
        delprev->next=delnext;
        delnext->prev=delprev;
    }
    
    int get(int key) {
        if(ump.find(key)!=ump.end()){       //key found in hash map
            node *resnode=ump[key];
            int res=resnode->val;
            ump.erase(key);                 //remove after taking the element
            deletenode(resnode);            //through this termination,
            addnode(resnode);               //we're allocating new position to resnode
            ump[key]=head->next;            //new key insertion
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(ump.find(key)!=ump.end()){       //case I : key already exists
            node *existingnode=ump[key];    //terminate the existing key-value
            ump.erase(key);
            deletenode(existingnode);
        }
        if(ump.size()==cap){                //case II : Overflow condition
            ump.erase(tail->prev->key);     //terminate Least Recent Used 
            deletenode(tail->prev);
        }

        addnode(new node(key,value));       //creation of new node
        ump[key]=head->next;                //insertion of node on key
    }
};

int main(){
    return 0;
}