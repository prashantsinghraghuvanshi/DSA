#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxProfit(vector<int>& prices) {
        int ptr1=0;
        int dif=0,ans=0;
        for(int ptr2=0;ptr2<prices.size();ptr2++){
            if(prices[ptr2]<=prices[ptr1]){         //In case of depletion 
                ptr1=ptr2;                          //update min value i.e ptr1
            }
            else{
                dif=prices[ptr2]-prices[ptr1];      //calc. dif. in case of profit
                ans=max(dif,ans);
            }
        }        
        return ans;
    }
};

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> prices(n);
    cout<<"The array is : ";
    for(int i=0;i<n;i++){
        int k = rand()%100;
        cout<<k<<" ";
        prices[i]=k;
    }
    Solution demo;
    cout<<"\n The answer is : "<<demo.maxProfit(prices);
}