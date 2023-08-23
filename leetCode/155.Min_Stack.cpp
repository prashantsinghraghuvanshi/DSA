#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:

    stack<int>st,minSt;                     //created 2 stacks
    MinStack() {
        
    }
    
    void push(int val) {                    //pushing into stack
        st.push(val);
        if(minSt.empty() || val <= minSt.top()){
            minSt.push(val);
        }
    }
    
    void pop() {                            //pop operation
        int val = st.top();
        st.pop();
        if(minSt.top()==val){
            minSt.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};