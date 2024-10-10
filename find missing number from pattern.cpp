#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> arr = {1,2,4,16,32};
    int n = arr.size()+1;
    set<int> arr_set(arr.begin(),arr.end());
    set<int> ans;
    for(int i=0;i<n;i++){
        ans.insert(pow(2,i));
    }
    for(auto it:ans){
        if(arr_set.find(it)==arr_set.end()){
            cout<<it;
            break;
        }
    }
    
    return 0;
}
