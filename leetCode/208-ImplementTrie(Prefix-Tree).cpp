#include<bits/stdc++.h>
using namespace std;

class Trie {
    //structure of trie
    struct TrieNode{    
        char val;
        int count;
        int endHere;
        TrieNode *child[26];
    };
    TrieNode *root;
    TrieNode *getNode(int index) {
    TrieNode *node = new TrieNode;
    if (index >= 0 && index < 26) {
        node->val = 'a' + index;
    } else {
        node->val = '/';
    }
    node->count = node->endHere = 0;
    for (int i = 0; i < 26; i++) {
        node->child[i] = NULL;
    }
    return node;
}
public:
    Trie() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        root=getNode('/'-'a');      //root init
    }
    
    void insert(string word) {
    TrieNode *curr = root;
    int index;
    for (int i = 0; i < word.size(); ++i) {
        index = word[i] - 'a';
        if (curr->child[index] == NULL)
            curr->child[index] = getNode(index);
        curr->child[index]->count += 1;  // Update count for the current node
        curr = curr->child[index];
    }
    curr->endHere += 1;
}
    
    bool search(string word) {
        TrieNode *curr=root;
        int index;
        for(int i=0;i<word.size();++i){
            index=word[i]-'a';
            if(curr->child[index]==NULL)
                return false;
            else{
                curr=curr->child[index];
            }
        }    
        return (curr->endHere>0);  
    }
    
    bool startsWith(string prefix) {
        TrieNode *curr=root;
        int index;
        for(int i=0;i<prefix.size();++i){
            index=prefix[i]-'a';
            if(curr->child[index]==NULL)
                return false;
            else
                curr=curr->child[index];
        }            
        return (curr->count>0);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
