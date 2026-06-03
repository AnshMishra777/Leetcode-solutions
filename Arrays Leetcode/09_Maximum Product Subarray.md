class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi1=0;
        int prod=1;
        if(nums.size()==1){
            if(nums[0]<0)return nums[0];
        }
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
            maxi1=max(prod,maxi1);
            if(nums[i]==0)prod=1;
            
        }
        int maxi2=0;
        int prod1=1;
        for(int i=nums.size()-1;i>=0;i--){
            prod1*=nums[i];
            maxi2=max(maxi2,prod1);
            if(nums[i]==0)prod1=1;

        }
        return max(maxi1,maxi2);
    }
};