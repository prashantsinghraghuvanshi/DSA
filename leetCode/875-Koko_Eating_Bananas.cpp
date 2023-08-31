#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 0;                        //apply binary search 
        int high = findmax(piles);          //to find min element 
        while(low<=high){                   //simple binary search
            int mid = (low+high)/2;
            int total = calc(piles,mid);
            if(total <= h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }

    int findmax(vector<int>& piles){        //function to find max element
        int max = INT_MIN;
        int n= piles.size();
        for(int i=0;i<n;i++){
            if(piles[i]>max){
                max=piles[i];
            }
        }
        return max;
    }

    int calc(vector<int>& piles, int mid){  //func. to calc. total hours
    int total = 0;
    int n = piles.size();
    for (int i=0;i<n;i++) {
        if(mid==0){
            return INT_MAX;
        }
        total += ceil(static_cast<double>(piles[i]) / static_cast<double>(mid));
    }
    return total;
}

};

int main(){
    vector<int>piles = {3,6,7,11};
    int h=8;
    Solution demo;
    cout<<demo.minEatingSpeed(piles,h);
}