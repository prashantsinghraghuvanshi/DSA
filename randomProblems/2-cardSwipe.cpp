#include<bits/stdc++.h>                     
using namespace std;
class sol{
    public:
        void swipe(vector<int>&vec){
            unordered_set<int>set;
            int freq = 0;
            int j=0;
            for(auto i : vec){
                int k = set.size();
                set.insert(i);
                if(k==set.size()){
                    freq--;
                    set.erase(i);
                }
                else                                            
                    freq++;
                if(j<freq)
                    j=freq;
            }
            cout<<j;
        }
};

int main(){
    vector<int>vec;
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    for(int i=0; i<n; i++){
        int in;
        cout<<"enter the "<<i<<" element : ";
        cin>>in;
        vec.push_back(in);
    }
    sol a;
    a.swipe(vec);
}