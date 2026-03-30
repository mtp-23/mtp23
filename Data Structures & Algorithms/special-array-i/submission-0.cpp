class Solution 
{
public:
    bool isArraySpecial(vector<int>& nums) 
    {
        vector<bool> ans;

        if (nums.size() <= 1) return true;

        for (int i = 0; i + 1 < nums.size(); i++)
        {
            if ((nums[i] % 2 == 0) && (nums[i+1] % 2 != 0)) ans.push_back(true);
            else if ((nums[i+1] % 2 == 0) && (nums[i] % 2 != 0)) ans.push_back(true);
            else ans.push_back(false);
        }

        if (find(ans.begin(), ans.end(), false) != ans.end()) return false;
        else return true;
    }

};