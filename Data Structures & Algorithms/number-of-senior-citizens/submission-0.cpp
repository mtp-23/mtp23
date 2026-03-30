class Solution 
{
public:
    int countSeniors(vector<string>& details) 
    {
        vector<int> dem;
        int count = 0;
        for (int i = 0; i < details.size(); i++)
        {
            dem.push_back(stoi(details[i].substr(11, 2)));
        }
        for (int x : dem)
        {
            if (x > 60) count++;
        }
        return count;
    }
};