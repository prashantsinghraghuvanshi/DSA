#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int ptr1=0;                         //use of 2 pointers
        int ptr2=height.size()-1;
        while(ptr1<ptr2){                               //main loop
            int h= min(height[ptr1],height[ptr2]);      //Time Complexity : O(log n)
            int w= ptr2-ptr1;
            int a= h*w;                     //to calc. area

            ans = max(ans,a);               //update ans

            if(height[ptr1]<height[ptr2]){  //array traversal
                ptr1++;
            } 
            else{
                ptr2--;
            }
        }
        return ans;
    }
};

int main(){
    int n,k;
    vector<int> height;
    cout<<"Enter the size of array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" index element : ";
        cin>>k;
        height.push_back(k);
    }
    Solution demo;
    cout<<demo.maxArea(height);
}