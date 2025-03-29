#include<bits/stdc++.h>
using namespace std;
void unique(vector<int>&arr){
    unordered_set<int>s;
    for(int i=0;i<arr.size();i++){
    s.insert(arr[i]);
    }
    for(auto it:s){
        cout<<it<<" ";
    }
}
int main(){
    vector<int>arr={1,2,3,4,1,2,3,5};
    unique(arr);
    return 0;
}