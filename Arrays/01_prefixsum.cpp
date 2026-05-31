#include<bits/stdc++.h>
using namespace std ;
vector<int> prefixsum(vector<int>& arr){
    int sum=0;
    int size=arr.size();
    vector<int> temp;

    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
       temp.push_back(sum);
    }
    return temp;
}
int main(){
    vector<int> arr={5,4,7,8,9,10};
    vector<int> ans=prefixsum(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

return 0;
}