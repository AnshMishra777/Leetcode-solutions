class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int j=0;j<nums.size();j++){
            if(freq[nums[j]]>n/2){
              return nums[j];
                
            }
        }
        return-1;
    }
};