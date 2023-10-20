#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {     //binary exponential method
        //default condition
        if(n==0)    return 1;
        //in case the power is -ve, convert into fraction
        long N=n;
        if(n<0){
            x=1/x;
            //to resolve unsigned int error in changing the sign
            N=-N; 
        }      
        //variable to return ans
        double res=1;
        //base case
        while(N>0){
            if(N%2==1)
                res*=x;
            N=N/2;
            x*=x;
        }
        return res;
    }
};

int main(){
    Solution demo;
    cout<<demo.myPow(4.0,3)<<endl;    //ans->64
    cout<<demo.myPow(5.0,-2);         //ans->0.004
    return 0;
}