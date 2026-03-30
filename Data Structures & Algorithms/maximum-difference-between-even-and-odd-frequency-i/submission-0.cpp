class Solution 
{
public:
    int maxDifference(string s) 
    {
        unordered_map<char, int> freq;
        vector<int> odd, even;
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i]]++;
        }
        for (auto x : freq)
        {
            if (x.second % 2 == 0) even.push_back(x.second);
            else odd.push_back(x.second);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        return odd[odd.size()-1] - even[0];
    }
};