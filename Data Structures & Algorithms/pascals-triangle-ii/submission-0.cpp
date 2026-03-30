class Solution 
{
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<int> row = {1};

        for (int i = 1; i <= rowIndex; i++)
        {
            vector<int> newr = {1};

            for (int j = 1; j < i; j++)
            {
                newr.push_back(row[j-1] + row[j]);
            }
            newr.push_back(1);
            row = newr;
        }

        return row;
    }
};