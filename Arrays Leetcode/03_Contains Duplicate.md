class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int j=0;j<nums.size();j++){
            if(freq[nums[j]]>1){
                return true;
            }
        }
        return false;
    }
};