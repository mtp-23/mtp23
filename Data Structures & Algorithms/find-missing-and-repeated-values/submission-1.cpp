class Solution 
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int limit = n * n;
        unordered_map<int, int> freq;
        int repeated = -1, missing = -1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                freq[grid[i][j]]++;
            }
        }

        for (int i = 1; i <= limit; i++)
        {
            if (freq[i] == 2) 
            {
                repeated = i;
            }
            else if (freq[i] == 0) 
            {
                missing = i;
            }
            
            if (repeated != -1 && missing != -1) break;
        }

        return {repeated, missing};
    }
};