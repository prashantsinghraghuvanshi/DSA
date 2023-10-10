#include<bits/stdc++.h>
using namespace std;

class Solution {                                        
public:
    string minWindow(string s, string t) {        
        const int char_no = 256;          //const due to var size object may not initialized
        int len1=s.length();        
        int len2=t.length();

        if(len1<len2){          //default fail cond.
            return "";
        }

        int hash_t[char_no]={0};    //created hash map
        int hash_s[char_no]={0};    //store freq.

        for(int i=0;i<len2;i++){    //first loop --> O(n)
            hash_t[t[i]]++;         //updates map as per t
        }

        int count=0, start=0, start_index=-1, min_length= INT_MAX;

        for(int j=0;j<len1;j++){
            hash_s[s[j]]++;         //occur in string
            if(hash_s[s[j]]<=hash_t[s[j]])      //element is found
                count++; 
            if(count==len2){        //all elements are present, now to minimize the string...
                while(hash_s[s[start]]>hash_t[s[start]] || hash_t[s[start]]==0){
                    if(hash_s[s[start]]>hash_t[s[start]])
                        hash_s[s[start]]--;         //remove unnecessary elements
                    start++;            //incrementing start
                }
            int len_window=j-start+1;       //window size
            if(min_length>len_window){
                min_length=len_window;
                start_index=start;
            }
            }
        }

        if(start_index==-1){            //incase no valid substring obtained
            return "";
        }

        return s.substr(start_index,min_length);        //answer
    }
};

int main(){
    string s="ADOBECODEBANC";
    string t="ABC";
    Solution demo;
    cout<<"Minimum substring is : "<<demo.minWindow(s,t)<<endl;
}