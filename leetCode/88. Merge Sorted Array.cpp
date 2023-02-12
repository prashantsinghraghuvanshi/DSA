#include<bits/stdc++.h>                                 
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin()+m,nums1.end());                                //ive used this to remove unneccessary elements
        nums1.insert(nums1.begin()+m,nums2.begin(),nums2.begin()+n);             //to insert the value of one vector to another
        sort(nums1.begin(),nums1.end());                                         //to sort the elements in the vector
        }
};

int main(){

}