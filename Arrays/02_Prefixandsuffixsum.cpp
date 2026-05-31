#include<bits/stdc++.h>
using namespace std ;
int totalsum(vector<int>& arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    return sum;
}
int prefixsum(vector<int>& arr){
    int prefix_sum=0;
    int total_sum=totalsum(arr);
    for(int i=0;i<arr.size();i++){
        prefix_sum+=arr[i];
        int suffix_sum=total_sum-prefix_sum;
        if(prefix_sum==suffix_sum){
            return i;
        }
    }
    return -1;
}
int main(){
 vector<int> arr={5,4,7,8,9,10,11,12};
 vector<int> temp={5,4,7,11,9,19,10,11,12};
 cout<<prefixsum(temp)<<endl;
 cout<<prefixsum(arr);
return 0;
}