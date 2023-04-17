#include<bits/stdc++.h>
using namespace std;

class solution{
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freespot;
    int n,k;

    public:
        solution(int n,int k){
            this->n=n;
            this->k=k;
            front = new int[k];
            rear = new int[k];
            for(int i=0;i<k;i++){
                front[i]=-1;
                rear[i]=-1;
            }
            next = new int[n];
            for(int i=0;i<n;i++){
                next[i]=i+1;
            }
            next[n-1]=-1;
            arr=new int[n];
            freespot=0;
        }

        void enqueue(int data,int qn){
            if(freespot==-1){
                cout<<"No space is available in Queue!"<<endl;
                return;
            }
            else{
                
            }
        }
};

int main(){

}