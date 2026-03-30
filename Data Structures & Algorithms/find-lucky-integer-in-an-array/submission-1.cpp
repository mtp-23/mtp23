class Solution 
{
public:
    int findLucky(vector<int>& arr) 
    {
        unordered_map<int, int> freq;
        int ans = -1;

        for (int i = 0; i < arr.size(); i++) freq[arr[i]]++;
        
        for (auto x : freq)
        {
            if (x.first == x.second) ans = max(x.first, ans);
        }

        return ans;
    }
};