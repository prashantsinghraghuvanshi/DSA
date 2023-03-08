#include<iostream>
#include<math.h>
using namespace std;

int leastfactorial(int x){
    int j=sqrt(x);
    for(int i=2;i<=j;i++){
        if(j%i==0){
            return i;
            break;
        if(i==j){
            return x;
        }
        }
    }
}

int main(){
    int x,y,count;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<"Enter the target element : ";
    cin>>y;
    count=1;
    do{
        x=leastfactorial(x)+x;
        count++;
    }while(x<y);
    cout<<"the time elapsed : "<<count<<endl;
}