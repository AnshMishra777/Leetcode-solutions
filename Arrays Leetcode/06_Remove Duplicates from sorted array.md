    class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       // vector<int> ans;
       int k=0;
       int last=nums.back();
       
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                nums[k]=nums[i-1]; 
                k++;
            }

        }
       
        nums[k]=last;
        k++;
        return k;
    }
};
