#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>stk;                              //created a stack
        int size = tokens.size();               
        for(int i=0;i<size;i++){
            if(tokens[i]=="+"){                     //check weather the character obtained 
                int op1 = stk.top();                //is operand or an operator
                stk.pop();
                int op2 = stk.top();
                stk.pop();
                stk.push(op1+op2);
            }
            else if(tokens[i]=="-"){                //be careful in performing operation order
                int op1 = stk.top();                //in case of subtraction and division 
                stk.pop();                          
                int op2 = stk.top();
                stk.pop();
                stk.push(op2-op1);
            }
            else if(tokens[i]=="*"){
                int op1 = stk.top();
                stk.pop();
                int op2 = stk.top();
                stk.pop();
                stk.push(op1*op2);
            }
            else if(tokens[i]=="/"){
                int op1 = stk.top();
                stk.pop();
                int op2 = stk.top();
                stk.pop();
                stk.push(op2/op1);
            }
            else{
                stk.push(stoi(tokens[i]));              //"stoi" to convert string to integer 
            }
        }
        if(stk.size()==1){                              //valid case
            return stk.top();
        }
        else{                                           //invalid case
            return 0;
        }
    }
};

int main(){
    int a;
    string b;
    vector<string>tokens;
    cout<<"Enter the size of token : ";
    cin>>a;
    for(int i =0;i<a;i++){
        cout<<"enter index "<<i<<" element : ";
        cin>>b;
        tokens.push_back(b);
    }
    Solution demo;
    cout<<demo.evalRPN(tokens);
}