class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size() / 2;
        vector<int> ans;
        unordered_map<int, int> count;
        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }
        for (auto x : count)
        {
            if (x.second > n) 
            {
                ans.push_back(x.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans[0];
    }
};