#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(auto i : nums)
            set.insert(i);
        if(set.size()==nums.size())
            return false;
        else
            return true;
    }
};

int main(){

}


// the problem statement is to return true if a duplicate is found in the given array else return false
// the method ive used :
// ive created a set and stored all the elements of 