#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<char> arr = {1,2,3,3,3,4,5};
    map<int,int> ans;
    for(auto it:arr){
        ans[it]++;
    }
    for(auto it:ans){
        if(it.second>1){
            cout<<it.first;
            break;
        }
    }
    
    return 0;
}
