class Solution 
{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        vector<int> ans;

        for (int i = 1; i <= nums.size(); i++)   
        {
            if (find(nums.begin(), nums.end(), i) 
                == nums.end()) 
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};