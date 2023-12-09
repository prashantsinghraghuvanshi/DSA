#include<bits/stdc++.h>
using namespace std;

class WordDictionary {
    struct TrieNode{
        char val;
        int index;
        bool endsHere=false;
        TrieNode *child[26];
    };
    TrieNode *root;
    TrieNode *getNode(int index){
        TrieNode *node=new TrieNode;
        if(index>=0 && index<26){
            node->val='a'+index;
        }
        else{
            node->val='/';
        }
        for(int i=0;i<26;i++){
            node->child[i]=NULL;
        }
        return node;
    }
    
public:
    WordDictionary() {
        root=getNode('/'-'a');  //root creation
    }
    
    void addWord(string word) {     //added a string
        TrieNode *node=root;
        for(char ch:word){
            int index=ch-'a';
            if(node->child[index]==NULL)
                node->child[index]=new TrieNode();
            node=node->child[index];
        }
        node->endsHere=true;
    }
    
    bool search(string word) {
        return helper(word,root);
    }

    bool helper(string word,TrieNode* node){
        for(int i=0;i<word.length();i++){
            char ch=word[i];
            if(ch=='.'){                        //for '.' check
                for(auto c:node->child){
                    if(c && helper(word.substr(i+1), c))
                        return true;
                }
                return false;
            }

            int index=ch-'a';                   //for char check
            if(node->child[index]==NULL)
                return false;
            node=node->child[index];
        }
        return node->endsHere;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */