class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        int maxSum=nums[0];
        int curSum =0;
        
        for(int i=0; i<nums.size(); i++)
        {
            int n=nums[i];
            if(curSum < 0)   // for avoiding the 
                curSum =0;
            
            curSum+=n; 
            maxSum=max(maxSum,curSum);
        }
        return maxSum;
    }
};