class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=INT_MIN;
        int n=height.size();
        int j=n-1;
        int area=INT_MIN;
        int i=0;
        while(i<n && j>=0){
            int sum=(j-i)*min(height[i],height[j]);
            area=max(area,sum);
            if(height[i]<height[j])i++;
            else j--;
        }
        return area;
    }
};