#include<bits/stdc++.h>
using namespace std;
void unique(vector<int>&arr){
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        bool found=false;
        for(int j=0;j<ans.size();j++){
            if(ans[j]==arr[i]){
                found=true;
                break;
            }
        }
        if(!found){
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}
int main(){
    vector<int>arr={1,2,3,1,1,2,3,4};
    unique(arr);
    return 0;
}