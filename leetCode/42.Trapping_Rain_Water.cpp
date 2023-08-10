#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0){                   //4th try
            return 0;
        }

        int lmax=height[0];                     //taking initial left max & right max
        int rmax=height[height.size()-1];

        int lptr=0;                             //initialising two pointers 
        int rptr=height.size()-1;

        int ans=0;

        while(lptr<rptr){
            if(lmax<rmax){
                lptr++;
                lmax= max(lmax,height[lptr]);   //this order is imp as it prevents 
                ans+= lmax-height[lptr];        //negative value of operation
            }
            else{
                rptr--;
                rmax= max(rmax,height[rptr]);
                ans+= rmax-height[rptr];
            }
        }
        return ans;
    }
};

int main(){
    int n,m;
    vector<int> height;
    cout<<"enter the size of array ";
    cin>>n;
    while(n>0){
        cout<<" enter element : ";
        cin>>m;
        height.push_back(m);
        n--;
    } 
    Solution demo;
    demo.trap(height);
}