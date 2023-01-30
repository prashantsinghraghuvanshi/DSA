#include<bits/stdc++.h>                                 
using namespace std;
class Solution {                                                    //29 Jan,2023
public:
    bool containsDuplicate(vector<int>& nums) {                     
        unordered_set<int> set;                                     //created an unordered set
        for(auto i : nums)                                          //filled the elements
            set.insert(i);
        if(set.size()==nums.size())                                 //compared the size of set and the vector
            return false;
        else
            return true;
    }
};

int main(){

}
