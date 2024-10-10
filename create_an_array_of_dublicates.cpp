#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<char> arr = {1,2,2,2,2,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6};
    map<int,int> ans;
    for(auto it:arr){
        ans[it]++;
    }
    vector<int> arr2;
    for(auto it:ans){
        if(it.second>1){
            arr2.push_back(it.first);
        }
    }
    
    for(auto it:arr2){
        cout<<it<<" ";
    }
    
    return 0;
}
