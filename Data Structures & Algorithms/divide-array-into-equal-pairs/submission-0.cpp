class Solution 
{
public:
    bool divideArray(vector<int>& nums) 
    {
        unordered_map<int, int> dem;
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            dem[nums[i]]++;
        }
        for (auto x : dem)
        {
            if (x.second % 2 == 0) count += (x.second / 2);
        }
        if (count == (nums.size() / 2)) return true;
        else return false;
    }
};