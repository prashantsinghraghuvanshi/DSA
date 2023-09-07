#include<bits/stdc++.h>
using namespace std;
                                                            
class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>mpp;      //used unord. map
    TimeMap(){
        
    }
    
    void set(string key, string value, int timestamp){
        mpp[key].emplace_back(timestamp, value);            //create a data structure
    }
    
    string get(string key, int timestamp){
        if(mpp.find(key)==mpp.end()){                       //check if element is present in structure(map)
            return "";
        }
        if(!mpp[key].empty() && mpp[key][0].first>timestamp){     //incase no smaller element is present
            return "";
        }
        int lft=0,rht=mpp[key].size()-1;                    //taking lft and rht ptrs
        string ans;
        while(lft<=rht){                                    //Binary Search
            int mid=lft+(rht-lft)/2;
            if(mpp[key][mid].first==timestamp){             //compare directly(error resolved)
                return mpp[key][mid].second;                
            }
            else if(mpp[key][mid].first<timestamp){
                ans=mpp[key][mid].second;
                lft=mid+1;
            }
            else{
                rht=mid-1;
            }
        }
        return ans;           //if the ans isn't present previous value is returned
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */