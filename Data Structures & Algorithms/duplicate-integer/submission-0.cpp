class Solution 
{
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        bool check = false;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[i] > nums[j])
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        for (int i = 0; i + 1 < nums.size(); i++ )
        {
            if (nums[i] == nums[i+1])
            {
                check = true;
            }
        }
        return check;
    }
};