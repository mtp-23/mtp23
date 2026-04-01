class Solution 
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int, int> freq;
        for (int i : nums)
            freq[i]++;
        vector<pair<int, int>> check(freq.begin(), freq.end());
        sort(check.begin(), check.end(), [&](auto a, auto b)
        {
            return a.second > b.second;
        });
        vector<int> ans;
        for (int i = 0; i < k; i++) ans.push_back(check[i].first);
        return ans;
    }
};