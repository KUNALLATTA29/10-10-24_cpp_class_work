#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> arr = {1,2,4,5,6,7,8,9};
    int n = arr.size()+1;
    int n_sum = n*(n+1)/2;
    int sum = 0;
    for(auto it:arr){
        sum+=it;
    }
    cout<<n_sum-sum;
    
    return 0;
}
