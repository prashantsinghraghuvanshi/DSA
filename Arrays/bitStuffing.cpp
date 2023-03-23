#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        void stuff(vector<int>flag,vector<int>data){
            int k=flag.size(),count=0,j=0;
            for(int i=0;i<=k;i++){
                j++;
                if((*flag.begin()+i==*data.begin()+j)&&(flag.begin()+i==data.begin()+j)){
                    count++;    
                }
                if(count==5){
                    count=0;
                    data.insert(data.begin()+j,0);
                    j++;
                }
                    
                data.insert(data.begin()+j,flag.begin()+i,data.begin()+j+1);
            }
            for(auto i:data){
                cout<<i<<" ";
            }
        }
};

int main(){
    vector<int>flag={0,1,1,1,1,1,1,0};
    vector<int>data={0,1,1,1,1,1,1,0};
    solution a;
    a.stuff(flag,data);
}