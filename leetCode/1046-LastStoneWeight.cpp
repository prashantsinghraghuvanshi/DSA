#include<bits/stdc++.h>
using namespace std;

class Solution {
    priority_queue<int, vector<int>, less<int>> pq;  //priority queue
public:
    int lastStoneWeight(vector<int>& stones) {
        int size=stones.size();
        for(int i=0;i<size;i++){    //insertion
            pq.push(stones[i]);
        }
        int val1,val2,calc;
        while(pq.size()>1){     //main
            val1=pq.top();
            pq.pop();
            val2=pq.top();
            pq.pop();
            calc=val1-val2;
            if(calc==0) continue;
            pq.push(calc);
        }
        if(pq.size()==0)    return 0;
        return pq.top();
    }
};