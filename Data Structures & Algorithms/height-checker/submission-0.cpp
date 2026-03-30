class Solution 
{
public:
    int heightChecker(vector<int>& heights) 
    {
        vector<int> m = heights;
        int count = 0;
        sort(m.begin(), m.end());

        for (int i = 0; i < heights.size(); i++)
        {
            if (m[i] != heights[i]) count++;
        }

        return count;
    }
};