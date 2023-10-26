#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        map<char,int>count;   //frequency of character in licensePlate

        for(char c:licensePlate){
            if(!isalpha(c)) continue;   //eliminate other than alphabet
            c=tolower(c);               
            if(count.find(c)==count.end()){     //first occurance
                count[c]=1;
            }
            else    count[c]++;
        }   
        string ans="";                          //to return final answer

        for(string word:words){                 //taking each string
            map<char,int>temp=count;
            for(char c:word){                   //taking each char per string
                if(temp.find(c)!=temp.end())    //found the element
                    temp[c]--;
                if(temp[c]==0){                 //all instances are found
                    temp.erase(c);
                }
            }
            if(temp.size()==0){                 //valid completing word
                if(ans==""){                //first completing word
                    ans=word;
                }
                else if(ans.size()>word.size()){    //need to find shortest
                    ans=word;
                }
            }
        } 
        return ans;  
    }
};