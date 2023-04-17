#include<bits/stdc++.h>
using namespace std;

int main(){
    int flag[]={0,1,1,1,1,1,1,0};
    int data[]={};
    int count=0;
    int j=sizeof(flag);
    int k=0;
    for(int i=0;i<=j;i++){
        if(flag[i]==1){
            count++;
        }
        if(count==5){
            data[k]=0;
            k++;
            count=0;
        }
        if(flag[i]==0){
            count=0;
        }
        data[k]=flag[i];
        k++;
    }
    cout<<"The data array is : ";
    for(int i=0;i<k;i++){
        cout<<data[i]<<" ";
    }

}
