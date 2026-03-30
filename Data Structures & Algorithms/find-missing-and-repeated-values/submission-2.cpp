class Solution 
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {

        unordered_map<int, int> freq;
        vector<int> ans, temp;
        int n = grid.size();

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid.size(); j++)
            {
                freq[grid[i][j]]++;
                temp.push_back(grid[i][j]);
            }
        }
        for (auto x : freq)
        {
            if (x.second > 1) ans.push_back(x.first);
        }
        for (int i = 1; i <= n * n; i++)   
        {
            if (find(temp.begin(), temp.end(), i) == temp.end()) 
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};