class Solution 
{
public:
    int maxAscendingSum(vector<int>& nums) 
    {
        int res = nums[0];
        int sum = nums[0];
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < nums[i+1])
            {
                sum += nums[i+1];
            }
            if (nums[i] >= nums[i+1])
            {
                res = max(sum, res);
                sum = nums[i+1];
            }
            res = max(sum, res);
        }
        return res;
    }
};