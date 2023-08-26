#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> v;                            //created a pair
        for (int i = 0; i < position.size(); ++i) {             //insert element into pair
            v.emplace_back(position[i],
                              static_cast<double>(target - position[i]) / speed[i]);
        }
        sort(v.begin(), v.end());                               //sort
        int res = 0;
        double curr = 0;
        for (int i = position.size() - 1; i >= 0 ; --i) {       //calculate car Fleet
            if (v[i].second > curr) {
                curr = v[i].second;
                ++res;
            }
        }
        return res;
    }
};

int main(){
    vector<int>position,speed;
    int target,s,a;
    cout<<"enter the size of vector : ";
    cin>>s;
    for(int i=0; i<s;i++){
        cout<<"enter "<<i<<" index position : ";
        cin>>a;
        position.push_back(a);
        cout<<"enter "<<i<<" index speed : ";
        cin>>a;
        speed.push_back(a);
    }
    cout<<"enter the target : ";
    cin>>target;
    Solution demo;
    cout<<demo.carFleet(target,position,speed);
}