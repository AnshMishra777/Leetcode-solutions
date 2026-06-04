class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // map<int,int> freq;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     freq[nums[i]]++;
        // }
        // for(int i=0;i<=n;i++){
        //     if(freq[i]==0){
        //         return i;
        //         break;
        //     }
        // }
        // return -1;
        
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) return i;
        }
        return nums.size();
    }
};