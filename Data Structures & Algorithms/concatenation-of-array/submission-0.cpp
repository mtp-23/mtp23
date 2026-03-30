class Solution 
{
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        vector<int> ans;
        bool check = false;
        if (1<= nums.size() && nums.size() <= 1000)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (1 <= nums[i] && nums[i] <= 1000)
                {
                    check = true;
                }
            }
            if (check)
            {
                for (int i = 0; i < nums.size(); i++)
                {
                    ans.push_back(nums[i]);
                }
                for (int i = 0; i < nums.size(); i++)
                {
                    ans.push_back(nums[i]);
                }
            }
        }
        return ans;
    }
};