#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> ump;       
        vector<vector<string>> vec;

        for(int i = 0; i< strs.size() ; i++){      //entering sorted strings as keys 
            string a = strs[i];                     //and words as .second in umap
            sort(a.begin(), a.end());
            ump[a].push_back(strs[i]);
        }

        for(auto i:ump){
            vec.push_back(i.second);
        }

        return vec;
    }
};

int main(){
    int a;
    cout<<"Enter the number of string you want to enter : ";
    cin>>a;
    vector<string>strs;
    for(int i=0;i<a;i++){
        string in;
        cout<<"enter the string : ";
        cin>>in;
        strs.push_back(in);
    }
    Solution demo;
    vector<vector<string>> vec = demo.groupAnagrams(strs);
    cout<<"Words as per group anagram are : "<<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }    
        cout << endl;
    }
}
