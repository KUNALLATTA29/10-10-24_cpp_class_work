#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<char> arr = {'r','b','r','b','g','r','b','b','g','r'};
    int c_r=0,c_b=0,c_g=0;
    for(auto it:arr){
        if(it=='r'){
            c_r++;
        }else if(it=='b'){
            c_b++;
        }else{
            c_g++;
        }
    }
    
    for(int i=0;i<c_r;i++){
        arr[i]='r';
    }
    for(int i=c_r;i<c_r+c_g;i++){
        arr[i]='g';
    }
    for(int i=c_r+c_g;i<c_r+c_g+c_b;i++){
        arr[i]='b';
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    
    return 0;
}
