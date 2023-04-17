#include<bits/stdc++.h>
using namespace std;

class secondLargest{
    public:
    void demo(vector<int>vec,int s){
        int a,b;
        a=vec.at(0);
        b=vec.at(0);
        for(int i=0;i<s;i++){
            if(vec.at(i)>a){
                b=a;
                a=vec.at(i);
            }
            if(vec.at(i)>b && vec.at(i)<a){
                b=vec.at(i);
            }
        }
        cout<<"The second largest element is : "<<b<<endl;
    }
};

int main(){
    vector<int>vec{12, 35, 1, 10, 34, 1};
    int s = vec.size();
    secondLargest hello;
    hello.demo(vec,s);
}