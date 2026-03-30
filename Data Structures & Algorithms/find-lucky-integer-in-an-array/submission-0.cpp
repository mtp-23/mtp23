class Solution 
{
public:
    int findLucky(vector<int>& arr) 
    {
        vector<int> ans;
        unordered_map<int, int> freq;

        for (int i = 0; i < arr.size(); i++) freq[arr[i]]++;

        for (auto x : freq)
        {
            if (x.first == x.second) ans.push_back(x.first);
        }
        if (ans.empty()) 
            return -1;
        else
            sort(ans.rbegin(), ans.rend());
            return ans[0]; 
    }
};