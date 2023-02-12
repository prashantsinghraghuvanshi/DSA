#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        void largest(vector<int>nums){
            int k = INT_MIN,max=nums.size()+1;
            for(int i=0;i<=max;i++){
                if((*nums.begin()+i)>k)
                    k=(*nums.begin()+i);
            }
            cout<<"The largest element : "<<k<<endl;
        }
};

int main(){
    vector<int>nums={1,4,3,6,7};
    solution a;
    a.largest(nums);
}